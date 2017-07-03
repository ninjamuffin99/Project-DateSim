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
		_dialogue = new Dialogue(3, 27);
		
		
		add(_dialogue);
		_dialogue.setDialog(["This is a line of text some thing a nd other stuff words words idk loillfodlfdldfosfdofdosfd", "YOu can press space toskip stuff", "space also goes onto the next groups of WOOOOORDSSSS!!!!!", " I don't know what to put here!!"]);
		
		
		
		add(_player);
		
		super.create();
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
	}
}