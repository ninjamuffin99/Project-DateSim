package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.system.FlxAssets.FlxGraphicAsset;

/**
 * ...
 * @author 
 */
class Player extends FlxSprite 
{
	private var _speed:Float = 250;

	public function new(?X:Float=0, ?Y:Float=0) 
	{
		super(X, Y);
		
		makeGraphic(30, 50);
		drag.x = drag.y = 1500;
	}
	
	override public function update(elapsed:Float):Void 
	{
		var _left:Bool = false;
		var _right:Bool = false;
		var _up:Bool = false;
		var _down:Bool = false;
		
		_left = FlxG.keys.anyPressed([A, LEFT]);
		_right = FlxG.keys.anyPressed([D, RIGHT]);
		_up = FlxG.keys.anyPressed([W, UP]);
		_down = FlxG.keys.anyPressed([S, DOWN]);
		
		if (_left)
			velocity.x = -_speed;
		if (_right)
			velocity.x = _speed;
			
		super.update(elapsed);
	}
	
}