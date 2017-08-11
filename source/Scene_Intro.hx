package;
import flixel.FlxG;

/**
 * ...
 * @author 
 */
class Scene_Intro extends PlayState 
{
	private var _dialogMenu:DialogMenu;
	override public function create():Void 
	{
		super.create();
		_dialogMenu = new DialogMenu(0, 400, ["whatever??", "something else", "More??", "HAHAHA"]);
		_dialogMenu.screenCenter(X);
		add(_dialogMenu);
		
		_dialogueStart(Story.intro[0]);
		_choices._newChoices(["Here is one choice!", "Here is another choice!", "and another!!!!"]);
	}
	
	override public function update(elapsed:Float):Void 
	{
		if ( _choices._btnPressed)
		{
			if (_choices._getChoices() == 0)
				_dialogueStart(Story.intro[1]);
			if (_choices._getChoices() == 1)
				_dialogueStart(Story.intro[2]);
			if (_choices._getChoices() == 2)
			{
				
				_dialogueStart(["You picked choice 3!", "Press R to Reset!"]);
			}
		}
		
		if (FlxG.keys.justPressed.R)
			FlxG.resetGame();
		
		super.update(elapsed);
	}
	
}