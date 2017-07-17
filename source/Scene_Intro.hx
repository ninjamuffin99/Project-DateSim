package;
import flixel.FlxG;

/**
 * ...
 * @author 
 */
class Scene_Intro extends PlayState 
{

	override public function create():Void 
	{
		super.create();
		
		_dialogueStart(Story.intro[0]);
	}
	
}