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
class Pause extends FlxSubState
{
	private var _bg:FlxSprite;
	private var _phone:Phone;
	private var _timeStuff:Time;
	
	override public function create():Void 
	{
		_bg = new FlxSprite(0, 0);
		_bg.makeGraphic(FlxG.width, FlxG.height, FlxColor.BLACK);
		_bg.alpha = 0;
		add(_bg);
		
		FlxTween.tween(_bg, { alpha: 0.6}, 0.3, {ease:FlxEase.quadOut});
		
		_phone = new Phone();
		add(_phone);
		_phone.x = 20;
		_phone.y = FlxG.height;
		
		FlxTween.tween(_phone, {y:40}, 0.6, {ease:FlxEase.elasticOut});
		
		_timeStuff = new Time();
		add(_timeStuff);
		
		super.create();
	}
	
	override public function update(elapsed:Float):Void 
	{
		if (FlxG.mouse.justPressedRight)
			fadeThings();
		
		if (_bg.alpha == 0)
			close();
		super.update(elapsed);
	}
	
	private function fadeThings():Void
	{
		FlxTween.tween(_phone, {y:FlxG.height}, 0.4, {ease:FlxEase.backIn});
		FlxTween.tween(_bg, {alpha:0}, 0.6, {ease:FlxEase.quadInOut});
	}
	
	private function closeIT():Void
	{
		close();
	}
}