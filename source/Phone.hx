package;

import flixel.FlxSprite;
import flixel.group.FlxSpriteGroup;

/**
 * ...
 * @author 
 */
class Phone extends FlxSpriteGroup 
{
	private var _bg:FlxSprite;
	
	//private var _btn
	public function new() 
	{
		super();
		
		_bg = new FlxSprite();
		_bg.makeGraphic(550, 660);
		add(_bg);
		
		
	}
	
}