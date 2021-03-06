package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.ui.FlxButton;
import flixel.util.FlxColor;
import flixel.util.FlxGradient;

class PlayState extends FlxState
{
	private var _dialogue:Dialogue;
	private var _nameTag:FlxText;
	private var _nameTextBox:FlxSprite;
	
	private var _electronImage:FlxSprite;
	private var _dummyImage:FlxSprite;
	private var _dialogMenu:DialogMenu;
	
	private var _choices:Choices;
	
	override public function create():Void
	{
		FlxG.save.bind("File1");
		StatsBase.load();
		
		
		var bg:FlxSprite;
		bg = new FlxSprite();
		bg.makeGraphic(FlxG.width, FlxG.height);
		add(bg);
		
		_dialogMenu = new DialogMenu(0, 30, ["whatever??", "something else", "More??", "HAHAHA"]);
		_dialogMenu.screenCenter(X);
		add(_dialogMenu);
		
		_dialogue = new Dialogue(4, 40, "assets/data/typo_round/Typo_Round_Regular_Demo.otf");
		_dialogue.y = 40;
		
		_nameTag = new FlxText(_dialogue.x + 70, _dialogue.y + 100, 0 , "", 18);
		
		_nameTextBox = new FlxSprite(_nameTag.x - 5, _nameTag.y - 5);
		_nameTextBox = FlxGradient.createGradientFlxSprite(Std.int(_nameTag.width + 10), Std.int(_nameTag.height + 10), [FlxColor.TRANSPARENT, FlxColor.BLACK,FlxColor.BLACK, FlxColor.BLACK, FlxColor.BLACK, FlxColor.TRANSPARENT], 1, 0);
		_nameTextBox.alpha = 0;
		
		
		_electronImage = new FlxSprite();
		_electronImage.loadGraphic("assets/images/concept/electron_blush.jpg", false, 474, 428);
		_electronImage.x = 0 - _electronImage.width;
		_electronImage.y = 150;
		add(_electronImage);
		
		_dummyImage = new FlxSprite();
		add(_dummyImage);
		_dummyImage.x -= 30;
		
		add(_dialogue);
		_dialogue.y = 30 - _dialogue.height;
		FlxTween.tween(_dialogue, { y: 0}, 0.4, { ease:FlxEase.cubeInOut});
		//_dialogue.setDialog(["This is a line of text some thing a nd other stuff words", "YOu can press space toskip stuff", "space also goes onto the next groups of WOOOOORDSSSS!!!!!", " I don't know what to put here!!"]);
		
		add(_nameTextBox);
		
		//_nameTag.text = "Press R to test the something??";
		add(_nameTag);
		
		_choices = new Choices();
		_choices.screenCenter(X);
		add(_choices);
		
		super.create();
	}

	override public function update(elapsed:Float):Void
	{
		//Various 'debug' things??
		/*
		if (FlxG.keys.justPressed.R)
			_dialogueStart(["You just pressed R!", "Press E to make me go :("], true, "Electron", _electronImage);
		if (FlxG.keys.justPressed.E)
			_tweening(_electronImage, false);
			
		if (FlxG.keys.justPressed.Q)
			_dialogueStart(Story.intro);
		if (FlxG.keys.justPressed.F)
			exit();
		*/
		if (FlxG.mouse.justPressedRight)
		{
			var _phone:Pause;
			_phone = new Pause();
			openSubState(_phone);
		}
		
		//temp solution??
		if ( _choices._btnPressed)
		{
			if (_choices._getChoices() == 0)
				FlxG.log.add("idk");
			else
				FlxG.log.add("OAOAOAHAH");
		}
		
		super.update(elapsed);
	}
	
	public function _dialogueStart(words:Array<String>, autostart:Bool = true, _name:String = "")
	{
		_dialogue.setDialog(words, autostart);
		_nameTag.text = _name;
		
		//maybe change this so the graphics are different?
		_nameTextBox = FlxGradient.createGradientFlxSprite(Std.int(_nameTag.width + 10), Std.int(_nameTag.height + 10), [FlxColor.TRANSPARENT, FlxColor.BLACK,FlxColor.BLACK, FlxColor.BLACK, FlxColor.BLACK, FlxColor.TRANSPARENT], 1, 0);
		if (_name != "")
			_nameTextBox.alpha = 1;
		else
			_nameTextBox.alpha = 0;
		
		//_tweening(_imageTween, true);
	}
	
	public function _tweening(_image:FlxSprite, tweenIn:Bool = true):Void
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
	public function exit():Void
	{
		var exitTHing:Int = 30 - Std.int(_dialogue.height);
		FlxTween.tween(_dialogue, { y : exitTHing, alpha: 0}, 0.6, { ease: FlxEase.cubeInOut});
	}
}