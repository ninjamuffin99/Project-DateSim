package;
import flixel.FlxG;

/**
 * ...
 * @author 
 */
class StatsBase 
{
	public static var _attraction:Int = 2;
	public static var _dates:Int = 1;
	public function new() 
	{
		
	}
	public static function load():Void
	{
		_attraction = FlxG.save.data._attraction;
		_dates = FlxG.save.data._dates;
	}
	public static function save():Void
	{
		FlxG.save.data._attraction = _attraction;
		FlxG.save.data._dates = _dates;
		
		FlxG.save.flush();
	}
}