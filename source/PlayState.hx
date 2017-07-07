package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
import flixel.util.FlxGradient;

class PlayState extends FlxState
{
	private var _player:Player;
	private var _dialogue:Dialogue;
	private var _nameTag:FlxText;
	private var _nameTextBox:FlxSprite;
	
	private var _electronImage:FlxSprite;
	
	private var _choices:Choices;
	
	override public function create():Void
	{
		var bg:FlxSprite;
		bg = new FlxSprite();
		bg.makeGraphic(FlxG.width, FlxG.height);
		add(bg);
		
		_player = new Player(30, 60);
		_dialogue = new Dialogue(4, 24, "assets/data/typo_round/Typo_Round_Regular_Demo.otf");
		
		_nameTag = new FlxText(_dialogue.x + 70, _dialogue.y + 100, 0 , "", 18);
		_nameTextBox = new FlxSprite(_nameTag.x - 5, _nameTag.y - 5);
		
		
		_electronImage = new FlxSprite();
		_electronImage.loadGraphic("assets/images/concept/electron_blush.jpg", false, 474, 428);
		_electronImage.x = 0 - _electronImage.width;
		_electronImage.y = 150;
		add(_electronImage);
		
		add(_dialogue);
		_dialogue.setDialog(["This is a line of text some thing a nd other stuff words", "YOu can press space toskip stuff", "space also goes onto the next groups of WOOOOORDSSSS!!!!!", " I don't know what to put here!!"]);
		
		add(_nameTextBox);
		
		_nameTag.text = "Press R to test the something??";
		add(_nameTag);
		
		add(_player);
		
		_choices = new Choices();
		add(_choices);
		_choices._newChoices(["choice 1", "choice22"]);
		_choices.screenCenter(X);
		
		super.create();
	}

	override public function update(elapsed:Float):Void
	{
		if (FlxG.keys.justPressed.R)
			_dialogueStart(["You just pressed R!", "Press E to make me go :("], true, "Electron", _electronImage);
		if (FlxG.keys.justPressed.E)
			_tweening(_electronImage, false);
			
		super.update(elapsed);
	}
	
	public function _dialogueStart(words:Array<String>, autostart:Bool = true, _name:String = "", _imageTween:FlxSprite = null)
	{
		_dialogue.setDialog(words, autostart);
		_nameTag.text = _name;
		//_nameTextBox.makeGraphic(Std.int(_nameTag.width + 10), Std.int(_nameTag.height + 10), FlxColor.BLUE);
		
		_nameTextBox = FlxGradient.createGradientFlxSprite(Std.int(_nameTag.width + 10), Std.int(_nameTag.height + 10), [FlxColor.TRANSPARENT, FlxColor.BLACK,FlxColor.BLACK, FlxColor.BLACK, FlxColor.BLACK, FlxColor.TRANSPARENT], 1, 0);
		
		_tweening(_imageTween, true);
	}
	
	public function _tweening(_image:FlxSprite, tweenIn:Bool = true)
	{
		if (tweenIn)
		{
			_image.x = 0 - _image.width;
			FlxTween.tween(_image, { x: 200 }, 1.5, { ease: FlxEase.backOut});
		}
		else
		{
			FlxTween.tween(_image, { x: 0 - _image.width}, 0.75, {ease: FlxEase.backIn});
		}
	}
}