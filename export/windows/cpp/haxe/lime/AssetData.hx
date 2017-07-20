package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/data/data-goes-here.txt", "assets/data/data-goes-here.txt");
			type.set ("assets/data/data-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/typo_round/Read_Me.txt", "assets/data/typo_round/Read_Me.txt");
			type.set ("assets/data/typo_round/Read_Me.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/typo_round/Typo Round test screen.url", "assets/data/typo_round/Typo Round test screen.url");
			type.set ("assets/data/typo_round/Typo Round test screen.url", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/typo_round/typo_round_1024.png", "assets/data/typo_round/typo_round_1024.png");
			type.set ("assets/data/typo_round/typo_round_1024.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/data/typo_round/Typo_Round_Bold_Demo.otf", "assets/data/typo_round/Typo_Round_Bold_Demo.otf");
			type.set ("assets/data/typo_round/Typo_Round_Bold_Demo.otf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/data/typo_round/Typo_Round_Bold_Italic_Demo.otf", "assets/data/typo_round/Typo_Round_Bold_Italic_Demo.otf");
			type.set ("assets/data/typo_round/Typo_Round_Bold_Italic_Demo.otf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/data/typo_round/Typo_Round_Italic_Demo.otf", "assets/data/typo_round/Typo_Round_Italic_Demo.otf");
			type.set ("assets/data/typo_round/Typo_Round_Italic_Demo.otf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/data/typo_round/Typo_Round_Light_Demo.otf", "assets/data/typo_round/Typo_Round_Light_Demo.otf");
			type.set ("assets/data/typo_round/Typo_Round_Light_Demo.otf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/data/typo_round/Typo_Round_Light_Italic_Demo.otf", "assets/data/typo_round/Typo_Round_Light_Italic_Demo.otf");
			type.set ("assets/data/typo_round/Typo_Round_Light_Italic_Demo.otf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/data/typo_round/Typo_Round_Regular_Demo.otf", "assets/data/typo_round/Typo_Round_Regular_Demo.otf");
			type.set ("assets/data/typo_round/Typo_Round_Regular_Demo.otf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/data/typo_round/Typo_Round_Thin_Demo.otf", "assets/data/typo_round/Typo_Round_Thin_Demo.otf");
			type.set ("assets/data/typo_round/Typo_Round_Thin_Demo.otf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/data/typo_round/Typo_Round_Thin_Italic Demo.otf", "assets/data/typo_round/Typo_Round_Thin_Italic Demo.otf");
			type.set ("assets/data/typo_round/Typo_Round_Thin_Italic Demo.otf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/data/typo_round.zip", "assets/data/typo_round.zip");
			type.set ("assets/data/typo_round.zip", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/concept/branching_pathsmaybe.jpg", "assets/images/concept/branching_pathsmaybe.jpg");
			type.set ("assets/images/concept/branching_pathsmaybe.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/concept/characters_or_whatever.jpg", "assets/images/concept/characters_or_whatever.jpg");
			type.set ("assets/images/concept/characters_or_whatever.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/concept/ElectricalPLug.jpg", "assets/images/concept/ElectricalPLug.jpg");
			type.set ("assets/images/concept/ElectricalPLug.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/concept/electron_blush.jpg", "assets/images/concept/electron_blush.jpg");
			type.set ("assets/images/concept/electron_blush.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/concept/electron_cheekyboy.jpg", "assets/images/concept/electron_cheekyboy.jpg");
			type.set ("assets/images/concept/electron_cheekyboy.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/concept/electron_silly.jpg", "assets/images/concept/electron_silly.jpg");
			type.set ("assets/images/concept/electron_silly.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/concept/electron_strongboy.jpg", "assets/images/concept/electron_strongboy.jpg");
			type.set ("assets/images/concept/electron_strongboy.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/concept/Fate_Colored.jpg", "assets/images/concept/Fate_Colored.jpg");
			type.set ("assets/images/concept/Fate_Colored.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/concept/fate_linework.jpg", "assets/images/concept/fate_linework.jpg");
			type.set ("assets/images/concept/fate_linework.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/concept/fate_penguinIDKLOLOL.jpg", "assets/images/concept/fate_penguinIDKLOLOL.jpg");
			type.set ("assets/images/concept/fate_penguinIDKLOLOL.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/concept/TheEnd_MoonKillEarth.jpg", "assets/images/concept/TheEnd_MoonKillEarth.jpg");
			type.set ("assets/images/concept/TheEnd_MoonKillEarth.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/concept/watermelon.jpg", "assets/images/concept/watermelon.jpg");
			type.set ("assets/images/concept/watermelon.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/concept/watermelon_cheeky.jpg", "assets/images/concept/watermelon_cheeky.jpg");
			type.set ("assets/images/concept/watermelon_cheeky.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/electron particle_v1.zip", "assets/images/electron particle_v1.zip");
			type.set ("assets/images/electron particle_v1.zip", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/electron_particle_v2.zip", "assets/images/electron_particle_v2.zip");
			type.set ("assets/images/electron_particle_v2.zip", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/images-go-here.txt", "assets/images/images-go-here.txt");
			type.set ("assets/images/images-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/tease.gif", "assets/images/tease.gif");
			type.set ("assets/images/tease.gif", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/music/music-goes-here.txt", "assets/music/music-goes-here.txt");
			type.set ("assets/music/music-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/music/potential songs/745989_When-the-Sky-Falls-Down-an.mp3", "assets/music/potential songs/745989_When-the-Sky-Falls-Down-an.mp3");
			type.set ("assets/music/potential songs/745989_When-the-Sky-Falls-Down-an.mp3", Reflect.field (AssetType, "music".toUpperCase ()));
			path.set ("assets/sounds/jingle.mp3", "assets/sounds/jingle.mp3");
			type.set ("assets/sounds/jingle.mp3", Reflect.field (AssetType, "music".toUpperCase ()));
			path.set ("assets/sounds/jingle.ogg", "assets/sounds/jingle.ogg");
			type.set ("assets/sounds/jingle.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/jingle.wav", "assets/sounds/jingle.wav");
			type.set ("assets/sounds/jingle.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/sounds-go-here.txt", "assets/sounds/sounds-go-here.txt");
			type.set ("assets/sounds/sounds-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/sounds/VoiceClips/Electron/electronVO.ogg", "assets/sounds/VoiceClips/Electron/electronVO.ogg");
			type.set ("assets/sounds/VoiceClips/Electron/electronVO.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/sounds/beep.ogg", "flixel/sounds/beep.ogg");
			type.set ("flixel/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/sounds/flixel.ogg", "flixel/sounds/flixel.ogg");
			type.set ("flixel/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("flixel/fonts/nokiafc22.ttf", "flixel/fonts/nokiafc22.ttf");
			type.set ("flixel/fonts/nokiafc22.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/fonts/monsterrat.ttf", "flixel/fonts/monsterrat.ttf");
			type.set ("flixel/fonts/monsterrat.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("flixel/images/ui/button.png", "flixel/images/ui/button.png");
			type.set ("flixel/images/ui/button.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("flixel/images/logo/default.png", "flixel/images/logo/default.png");
			type.set ("flixel/images/logo/default.png", Reflect.field (AssetType, "image".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
