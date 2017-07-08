package;

import flixel.FlxG;
import flixel.group.FlxSpriteGroup;
import flixel.tweens.FlxTween;
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
	
	public function _newChoices(wordsChoices:Array<String>):Void
	{
		
		var choiceNum = [];
		for (i in 0...wordsChoices.length)
		{
			var choices:Int = wordsChoices.length;
			choiceNum[i] = new FlxButton(0, ((FlxG.height * i) / (choices + 4)) + (FlxG.height / 5), wordsChoices[i], clickChoice);
			add(choiceNum[i]);
		}
	}
	
	private function clickChoice():Void
	{
		FlxG.log.add("lol");
	}
	
}