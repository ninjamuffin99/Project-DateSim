package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.group.FlxGroup;
import flixel.group.FlxSpriteGroup;
import flixel.ui.FlxButton;
import flixel.util.FlxColor;

/**
 * ...
 * @author ninjaMuffin
 */
class DialogMenu extends FlxSpriteGroup 
{
	private var _bg:FlxSprite;
	
	private var _button0:FlxButton;
	private var _button1:FlxButton;
	private var _button2:FlxButton;
	private var _button3:FlxButton;
	
	private var _mainGrp:FlxSpriteGroup;
	
	public function new(X:Int, Y:Int, _menuChoices:Array<String>) 
	{
		super(X, Y);
		_bg = new FlxSprite(0, 0);
		_bg.makeGraphic(Std.int(FlxG.width * 0.95), Std.int(FlxG.height * 0.35), FlxColor.BLACK);
		add(_bg);
		
		createButtons();
		
		
	}
	
	private function createButtons():Void
	{
		var x:Float = FlxG.width * 0.24;
		var y:Float = -25;
		
		_button0 = new FlxButton(x * 0, y, "whatee", function(){FlxG.log.add("ButtonBressed"); });
		add(_button0);
		
		_button1 = new FlxButton(x * 1, y, "whatee", function(){FlxG.log.add("ButtonBressed"); });
		add(_button1);
		
		_button2 = new FlxButton(x * 2, y, "whatee", function(){FlxG.log.add("ButtonBressed"); });
		add(_button2);
		
		_button3 = new FlxButton(x * 3, y, "whatee", function(){FlxG.log.add("ButtonBressed"); });
		add(_button3);
	}
	
	private function whatever():Void
	{
		FlxG.log.add("button was pressed");
	}
	
	override public function update(elapsed:Float):Void 
	{
		
		super.update(elapsed);
	}
	
}