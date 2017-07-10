package;

import flixel.FlxG;
import flixel.FlxState;
import flixel.group.FlxSpriteGroup;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.ui.FlxButton;

/**
 * ...
 * @author 
 */
class Choices extends FlxSpriteGroup 
{

	public function _newChoices(wordsChoices:Array<String>):Void
	{
		
		var choiceNum = [];
		for (i in 0...wordsChoices.length)
		{
			var choices:Int = wordsChoices.length;
			choiceNum[i] = new FlxButton(0, ((FlxG.height * i) / (choices + 4)) + (FlxG.height / 5), wordsChoices[i], function()
			{
				FlxTween.tween(this, {alpha: 0, y: this.y - 10}, 0.4, {ease: FlxEase.quartOut} );
			});
			
			add(choiceNum[i]);
			
		}
		
		this.y = this.y + 10;
		FlxTween.tween(this, {y: this.y -10}, 0.4, {ease: FlxEase.quartOut});
	}
	
	private function deadzo():Void
	{
		this.kill();
	}
}