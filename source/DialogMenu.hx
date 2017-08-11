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
	private var _btnMenu = [];
	private var _mainGrp:FlxSpriteGroup;
	
	public function new(X:Int, Y:Int, _menuChoices:Array<String>) 
	{
		super(X, Y);
		_bg = new FlxSprite(0, 0);
		_bg.makeGraphic(Std.int(FlxG.width * 0.95), Std.int(FlxG.height * 0.35), FlxColor.YELLOW);
		add(_bg);
		
		for (i in 0..._menuChoices.length)
		{
			_btnMenu[i] = new FlxButton((FlxG.width * 0.24) * i, _bg.height + 10, _menuChoices[i], whatever);
			add(_btnMenu[i]);
		}
		
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