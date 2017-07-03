package;

import flixel.FlxSprite;
import flixel.FlxState;

class PlayState extends FlxState
{
	var _player:Player;
	var _dialogue:Dialogue;
	
	override public function create():Void
	{
		_player = new Player(30, 60);
		_dialogue = new Dialogue();
		
		add(_dialogue);
		_dialogue.setDialog(["ehyys", "ppospp"]);
		
		
		
		add(_player);
		
		super.create();
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
	}
}