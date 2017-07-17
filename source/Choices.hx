package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxSpriteGroup;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.ui.FlxButton;
import flixel.util.FlxColor;
import flixel.util.FlxGradient;

/**
 * ...
 * @author 
 */
class Choices extends FlxSpriteGroup 
{
	private var choiceNum = [];
	private var choicePicked:Int;
	public function _newChoices(wordsChoices:Array<String>):Int
	{
		
		for (i in 0...wordsChoices.length)
		{
			var choices:Int = wordsChoices.length;
			choiceNum[i] = new FlxButton(0, ((FlxG.height * i) / (choices + 4)) + (FlxG.height / 5), wordsChoices[i], function()
			{
				FlxTween.tween(this, {alpha: 0, y: this.y - 10}, 0.4, {ease: FlxEase.quartOut});
				choicePicked = i;
				FlxG.log.add(choicePicked);
			});
			
			add(choiceNum[i]);
			
			choiceNum[i].makeGraphic(Std.int(FlxG.width * 0.60), 40, FlxColor.RED);
			choiceNum[i].label.size = 0;
			choiceNum[i].alpha = 0;
			FlxTween.tween(choiceNum[i], {alpha: 1}, 0.4, {ease:FlxEase.quadOut, startDelay: i * 0.05});
			FlxTween.tween(choiceNum[i].label, {size: 23}, 0.4, { ease: FlxEase.backOut, startDelay: i * 0.05});
		}
		
		this.y = this.y + 10;
		FlxTween.tween(this, {y: this.y -10}, 0.4, {ease: FlxEase.quartOut});
		
		return choicePicked;
	}
	
	private function deadzo():Void
	{
		this.kill();
	}
}