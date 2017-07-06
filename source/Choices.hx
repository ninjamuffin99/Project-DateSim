package;

import flixel.FlxG;
import flixel.group.FlxSpriteGroup;
import flixel.ui.FlxButton;

/**
 * ...
 * @author 
 */
class Choices extends FlxSpriteGroup 
{
//
	//public function new() 
	//{
		//
	//}
	//
	
	public function _newChoices(choices:Int = 2, wordsChoices:Array<String>):Void
	{
		var choiceNum = [];
		for (i in 0...choices)
		{
			choiceNum[i] = new FlxButton(FlxG.width /2, i * 100, wordsChoices[i], clickChoice);
			add(choiceNum[i]);
		}
	}
	
	private function clickChoice():Void
	{
		FlxG.log.add("lol");
	}
	
}