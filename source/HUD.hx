package;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.text.FlxText;
import flixel.ui.FlxBar;
import flixel.ui.FlxButton;
import flixel.util.FlxColor;

/**
 * ...
 * @author 
 */
class HUD extends FlxTypedGroup<FlxSprite>
{
	public static var yyyy:Int = 2017;
	public static var mm:Int = 1;
	public static var dd:Int = 4;
	public static var PM:Bool;
	public static var AMPM:String = "AM";
	public static var h:Int = 8;
	public static var m:Int;
	
	private var _sprTime:FlxText;
	private var _textAMPM:FlxText;
	private var _usernameText:FlxText;
	private var _cashText:FlxText;
	private var displayH:Int;
	
	private var _textDay:FlxText;
	private var _textMonth:FlxText;
	
	private var _healthBar:FlxBar;
	private var textColor:FlxColor;
	
	
	private var dim:FlxSprite;
	private var bg:FlxSprite;
	private var _txtSound:FlxText;
	//private var _txtOldSound:FlxUICheckBox;
	//private var _hints:FlxUICheckBox;
	private var _btnCred:FlxButton;
	
	
	public function new()
    {
        super();
		
		textColor = new FlxColor();
		textColor.setRGB(235, 117, 34);
		
		var barcolor:FlxColor;
		
		barcolor = new FlxColor();
		//235, 117, 34 is orange
		barcolor.setRGB(25, 21, 21);
		
		var _orangebar:FlxSprite;
		_orangebar = new FlxSprite();
		_orangebar.makeGraphic(FlxG.width, 24, barcolor);
		add(_orangebar);
		
		/*
		_healthBar = new FlxBar(FlxG.width / 2, 3, LEFT_TO_RIGHT, 100, 10, Stats, "_stamina", 0, 24);
		_healthBar.createColoredEmptyBar(0xFFA44F0F);
		_healthBar.createColoredFilledBar(textColor);
		add(_healthBar);
		*/
		var _whiteLine:FlxSprite;
		_whiteLine = new FlxSprite(0, 24);
		_whiteLine.makeGraphic(FlxG.width, 2, FlxColor.ORANGE);
		add(_whiteLine);
		
		createText();
    }
	
	private function createText():Void
	{
		var textFont:String = "assets/data/typo_round/Typo_Round_Bold_Demo.otf";
		
		_sprTime = new FlxText(0, 0, 0, Std.string(h), 19);
		_sprTime.font = textFont;
		add(_sprTime);
		
		_textDay = new FlxText(40, 0, 0, dd + "/", 19);
		_textDay.font = textFont;
		add(_textDay);
		
		_textMonth = new FlxText(65, 0, 0, mm + "/", 19);
		_textMonth.font = textFont;
		add(_textMonth);
		
		_textAMPM = new FlxText(15, 0, 0, AMPM, 19);
		_textAMPM.font = textFont;
		add(_textAMPM);
		
		/*
		var staminaText:FlxText;
		staminaText = new FlxText(577, 0, 0, "Stamina:", 12);
		staminaText.font = "assets/data/ARIALBD.TTF";
		staminaText.color = textColor;
		add(staminaText);
		
		_usernameText = new FlxText(FlxG.width * 0.3, 0, 0, Stats._username, 13);
		_usernameText.font = "assets/data/ARIALBD.TTF";
		_usernameText.color = textColor;
		add(_usernameText);
		
		_cashText = new FlxText(FlxG.width - 200, 0, 0, "Cash: " + Stats._cash, 13);
		_cashText.font = textFont;
		_cashText.color = textColor;
		add(_cashText);
		*/
	}
	
	
	public function updateTime():Void
	{
		displayH = h;
		
		if (h >= 12)
		{
			AMPM = "PM";
			PM = true;
			if (h > 12)
				displayH = h;
				displayH -= 12;
		}
		
		if (h > 23)
		{
			AMPM = "AM";
			dd += 1;
			PM = false;
			//var supporters:Int;
			//supporters = FlxG.random.int(2, 10);
			//updateSupporters(supporters);
			h -= 24;
		}
		
		if (dd >= 29)
		{
			dd = 1;
			mm += 1;
			//_cash -= 1400;
		}
		
		if (mm >= 13)
		{
			yyyy += 1;
			mm = 1;
		}
		
		if (displayH == 0)
		{
			displayH = 12;
		}
		
		
		_sprTime.text = Std.string(displayH);
		_textAMPM.text = AMPM;
		_textDay.text = dd + " /";
		_textMonth.text = mm + " /";
		
		
		//_cashText.text = "Cash: " + _cash;
		
		//_healthBar.value = _stamina;
		
		
	}
	
	override public function update(elapsed:Float):Void 
	{
		
		updateTime();
		
		super.update(elapsed);
	}
	
}