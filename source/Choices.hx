package;

import flixel.FlxG;
import flixel.FlxState;
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
	
	public function _newChoices(wordsChoices:Array<String>, _funcName:Void->Void, _currentState:FlxState):Void
	{
		
		var choiceNum = [];
		for (i in 0...wordsChoices.length)
		{
			var choices:Int = wordsChoices.length;
			choiceNum[i] = new FlxButton(0, ((FlxG.height * i) / (choices + 4)) + (FlxG.height / 5), wordsChoices[i], function()
			{
				//_currentState._funcName([i]);
				if (i == 0)
					_currentState._funcName(0);
			});
			add(choiceNum[i]);
		}
	}
}