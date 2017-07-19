package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxSubState;
import flixel.group.FlxSpriteGroup;
import flixel.text.FlxText;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;

/**
 * ...
 * @author 
 */
class Phone extends FlxSubState
{
	private var _bg:FlxSprite;
	private var _phone:FlxSprite;
	private var _timeStuff:Time;
	
	override public function create():Void 
	{
		_bg = new FlxSprite(0, 0);
		_bg.makeGraphic(FlxG.width, FlxG.height, FlxColor.BLACK);
		_bg.alpha = 0;
		add(_bg);
		
		FlxTween.tween(_bg, { alpha: 0.5}, 0.3, {ease:FlxEase.quadOut});
		
		_phone = new FlxSprite(0, 0);
		_phone.makeGraphic(133, 75, FlxColor.RED);
		add(_phone);
		
		_timeStuff = new Time();
		add(_timeStuff);
		
		super.create();
	}
	
	override public function update(elapsed:Float):Void 
	{
		if (FlxG.mouse.justPressedRight)
			close();
		
		super.update(elapsed);
	}
}