// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard__FlxKey_FlxKey_Impl_
#include <flixel/input/keyboard/_FlxKey/FlxKey_Impl_.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_replay_CodeValuePair
#include <flixel/system/replay/CodeValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_KeyboardEvent
#include <openfl/_legacy/events/KeyboardEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_86aaea01378aa57b_24_new,"flixel.input.keyboard.FlxKeyboard","new",0xa12d657a,"flixel.input.keyboard.FlxKeyboard.new","flixel/input/keyboard/FlxKeyboard.hx",24,0x41882875)
HX_LOCAL_STACK_FRAME(_hx_pos_86aaea01378aa57b_93_onKeyUp,"flixel.input.keyboard.FlxKeyboard","onKeyUp",0xa36f8255,"flixel.input.keyboard.FlxKeyboard.onKeyUp","flixel/input/keyboard/FlxKeyboard.hx",93,0x41882875)
HX_LOCAL_STACK_FRAME(_hx_pos_86aaea01378aa57b_107_onKeyDown,"flixel.input.keyboard.FlxKeyboard","onKeyDown",0xf4d786dc,"flixel.input.keyboard.FlxKeyboard.onKeyDown","flixel/input/keyboard/FlxKeyboard.hx",107,0x41882875)
HX_LOCAL_STACK_FRAME(_hx_pos_86aaea01378aa57b_119_resolveKeyCode,"flixel.input.keyboard.FlxKeyboard","resolveKeyCode",0x581c5a06,"flixel.input.keyboard.FlxKeyboard.resolveKeyCode","flixel/input/keyboard/FlxKeyboard.hx",119,0x41882875)
HX_LOCAL_STACK_FRAME(_hx_pos_86aaea01378aa57b_137_record,"flixel.input.keyboard.FlxKeyboard","record",0x38ad8db7,"flixel.input.keyboard.FlxKeyboard.record","flixel/input/keyboard/FlxKeyboard.hx",137,0x41882875)
HX_LOCAL_STACK_FRAME(_hx_pos_86aaea01378aa57b_166_playback,"flixel.input.keyboard.FlxKeyboard","playback",0x84dcbec1,"flixel.input.keyboard.FlxKeyboard.playback","flixel/input/keyboard/FlxKeyboard.hx",166,0x41882875)
namespace flixel{
namespace input{
namespace keyboard{

void FlxKeyboard_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_86aaea01378aa57b_24_new)
HXLINE(  25)		super::__construct(hx::ClassOf< ::flixel::input::keyboard::FlxKeyList >());
HXLINE(  27)		{
HXLINE(  27)			 ::Dynamic code = ::flixel::input::keyboard::_FlxKey::FlxKey_Impl__obj::fromStringMap->iterator();
HXDLIN(  27)			while(( (bool)(code->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE(  27)				int code1 = ( (int)(code->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE(  29)				bool _hx_tmp;
HXDLIN(  29)				if ((code1 != (int)-2)) {
HXLINE(  29)					_hx_tmp = (code1 != (int)-1);
            				}
            				else {
HXLINE(  29)					_hx_tmp = false;
            				}
HXDLIN(  29)				if (_hx_tmp) {
HXLINE(  31)					 ::flixel::input::FlxInput input =  ::flixel::input::FlxInput_obj::__alloc( HX_CTX ,code1);
HXLINE(  32)					this->_keyListArray->push(input);
HXLINE(  33)					this->_keyListMap->set(code1,input);
            				}
            			}
            		}
HXLINE(  38)		this->_nativeCorrection =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  40)		this->_nativeCorrection->set(HX_("0_64",2d,83,02,20),(int)45);
HXLINE(  41)		this->_nativeCorrection->set(HX_("0_65",2e,83,02,20),(int)35);
HXLINE(  42)		this->_nativeCorrection->set(HX_("0_67",30,83,02,20),(int)34);
HXLINE(  43)		this->_nativeCorrection->set(HX_("0_69",32,83,02,20),(int)-1);
HXLINE(  44)		this->_nativeCorrection->set(HX_("0_73",0b,84,02,20),(int)33);
HXLINE(  45)		this->_nativeCorrection->set(HX_("0_266",23,3d,2d,e2),(int)46);
HXLINE(  46)		this->_nativeCorrection->set(HX_("123_222",a5,bc,d4,8f),(int)219);
HXLINE(  47)		this->_nativeCorrection->set(HX_("125_187",a5,28,a1,b6),(int)221);
HXLINE(  48)		this->_nativeCorrection->set(HX_("126_233",08,7b,08,4a),(int)192);
HXLINE(  50)		this->_nativeCorrection->set(HX_("0_80",e7,84,02,20),(int)112);
HXLINE(  51)		this->_nativeCorrection->set(HX_("0_81",e8,84,02,20),(int)113);
HXLINE(  52)		this->_nativeCorrection->set(HX_("0_82",e9,84,02,20),(int)114);
HXLINE(  53)		this->_nativeCorrection->set(HX_("0_83",ea,84,02,20),(int)115);
HXLINE(  54)		this->_nativeCorrection->set(HX_("0_84",eb,84,02,20),(int)116);
HXLINE(  55)		this->_nativeCorrection->set(HX_("0_85",ec,84,02,20),(int)117);
HXLINE(  56)		this->_nativeCorrection->set(HX_("0_86",ed,84,02,20),(int)118);
HXLINE(  57)		this->_nativeCorrection->set(HX_("0_87",ee,84,02,20),(int)119);
HXLINE(  58)		this->_nativeCorrection->set(HX_("0_88",ef,84,02,20),(int)120);
HXLINE(  59)		this->_nativeCorrection->set(HX_("0_89",f0,84,02,20),(int)121);
HXLINE(  60)		this->_nativeCorrection->set(HX_("0_90",c6,85,02,20),(int)122);
HXLINE(  62)		this->_nativeCorrection->set(HX_("48_224",f9,a0,f0,47),(int)48);
HXLINE(  63)		this->_nativeCorrection->set(HX_("49_38",5f,96,cb,16),(int)49);
HXLINE(  64)		this->_nativeCorrection->set(HX_("50_233",2e,5a,17,13),(int)50);
HXLINE(  65)		this->_nativeCorrection->set(HX_("51_34",e4,75,e8,a4),(int)51);
HXLINE(  66)		this->_nativeCorrection->set(HX_("52_222",50,82,e4,39),(int)52);
HXLINE(  67)		this->_nativeCorrection->set(HX_("53_40",fd,e3,3a,a6),(int)53);
HXLINE(  68)		this->_nativeCorrection->set(HX_("54_189",52,ee,b0,60),(int)54);
HXLINE(  69)		this->_nativeCorrection->set(HX_("55_232",b2,40,18,f4),(int)55);
HXLINE(  70)		this->_nativeCorrection->set(HX_("56_95",3a,8c,36,a8),(int)56);
HXLINE(  71)		this->_nativeCorrection->set(HX_("57_231",b3,69,e5,1a),(int)57);
HXLINE(  73)		this->_nativeCorrection->set(HX_("48_64",59,62,22,16),(int)96);
HXLINE(  74)		this->_nativeCorrection->set(HX_("49_65",f9,98,cb,16),(int)97);
HXLINE(  75)		this->_nativeCorrection->set(HX_("50_66",e4,41,3f,a4),(int)98);
HXLINE(  76)		this->_nativeCorrection->set(HX_("51_67",84,78,e8,a4),(int)99);
HXLINE(  77)		this->_nativeCorrection->set(HX_("52_68",24,af,91,a5),(int)100);
HXLINE(  78)		this->_nativeCorrection->set(HX_("53_69",c4,e5,3a,a6),(int)101);
HXLINE(  79)		this->_nativeCorrection->set(HX_("54_70",39,1d,e4,a6),(int)102);
HXLINE(  80)		this->_nativeCorrection->set(HX_("55_71",d9,53,8d,a7),(int)103);
HXLINE(  81)		this->_nativeCorrection->set(HX_("56_72",79,8a,36,a8),(int)104);
HXLINE(  82)		this->_nativeCorrection->set(HX_("57_73",19,c1,df,a8),(int)105);
HXLINE(  84)		this->_nativeCorrection->set(HX_("43_75",1e,52,d4,12),(int)107);
HXLINE(  85)		this->_nativeCorrection->set(HX_("45_77",5e,bf,26,14),(int)109);
HXLINE(  86)		this->_nativeCorrection->set(HX_("47_79",9e,2c,79,15),(int)191);
HXLINE(  87)		this->_nativeCorrection->set(HX_("46_78",fe,f5,cf,14),(int)110);
HXLINE(  88)		this->_nativeCorrection->set(HX_("42_74",7e,1b,2b,12),(int)106);
            	}

Dynamic FlxKeyboard_obj::__CreateEmpty() { return new FlxKeyboard_obj; }

void *FlxKeyboard_obj::_hx_vtable = 0;

Dynamic FlxKeyboard_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxKeyboard_obj > _hx_result = new FlxKeyboard_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxKeyboard_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x338290da) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x338290da;
	} else {
		return inClassId==(int)0x716d4be4;
	}
}

void FlxKeyboard_obj::onKeyUp( ::openfl::_legacy::events::KeyboardEvent event){
            	HX_STACKFRAME(&_hx_pos_86aaea01378aa57b_93_onKeyUp)
HXLINE(  94)		this->super::onKeyUp(event);
HXLINE(  98)		bool _hx_tmp;
HXDLIN(  98)		if (hx::IsNotNull( ::flixel::FlxG_obj::game->debugger )) {
HXLINE(  98)			_hx_tmp = this->inKeyArray(::flixel::FlxG_obj::debugger->toggleKeys,event);
            		}
            		else {
HXLINE(  98)			_hx_tmp = false;
            		}
HXDLIN(  98)		if (_hx_tmp) {
HXLINE( 100)			::flixel::FlxG_obj::debugger->set_visible(!(::flixel::FlxG_obj::debugger->visible));
            		}
            	}


void FlxKeyboard_obj::onKeyDown( ::openfl::_legacy::events::KeyboardEvent event){
            	HX_STACKFRAME(&_hx_pos_86aaea01378aa57b_107_onKeyDown)
HXLINE( 107)		this->super::onKeyDown(event);
            	}


int FlxKeyboard_obj::resolveKeyCode( ::openfl::_legacy::events::KeyboardEvent e){
            	HX_STACKFRAME(&_hx_pos_86aaea01378aa57b_119_resolveKeyCode)
HXLINE( 123)		 ::Dynamic code = this->_nativeCorrection->get(((e->charCode + HX_("_",5f,00,00,00)) + e->keyCode));
HXLINE( 124)		if (hx::IsNull( code )) {
HXLINE( 124)			return e->keyCode;
            		}
            		else {
HXLINE( 124)			return code;
            		}
HXDLIN( 124)		return (int)0;
            	}


::Array< ::Dynamic> FlxKeyboard_obj::record(){
            	HX_GC_STACKFRAME(&_hx_pos_86aaea01378aa57b_137_record)
HXLINE( 138)		::Array< ::Dynamic> data = null();
HXLINE( 140)		{
HXLINE( 140)			int _g = (int)0;
HXDLIN( 140)			::Array< ::Dynamic> _g1 = this->_keyListArray;
HXDLIN( 140)			while((_g < _g1->length)){
HXLINE( 140)				 ::flixel::input::FlxInput key = _g1->__get(_g).StaticCast<  ::flixel::input::FlxInput >();
HXDLIN( 140)				_g = (_g + (int)1);
HXLINE( 142)				bool _hx_tmp;
HXDLIN( 142)				if (hx::IsNotNull( key )) {
HXLINE( 142)					if ((key->current != (int)0)) {
HXLINE( 142)						_hx_tmp = (key->current == (int)-1);
            					}
            					else {
HXLINE( 142)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE( 142)					_hx_tmp = true;
            				}
HXDLIN( 142)				if (_hx_tmp) {
HXLINE( 144)					continue;
            				}
HXLINE( 147)				if (hx::IsNull( data )) {
HXLINE( 149)					data = ::Array_obj< ::Dynamic>::__new();
            				}
HXLINE( 152)				data->push( ::flixel::_hx_system::replay::CodeValuePair_obj::__alloc( HX_CTX ,key->ID,key->current));
            			}
            		}
HXLINE( 155)		return data;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxKeyboard_obj,record,return )

void FlxKeyboard_obj::playback(::Array< ::Dynamic> Record){
            	HX_STACKFRAME(&_hx_pos_86aaea01378aa57b_166_playback)
HXLINE( 167)		int i = (int)0;
HXLINE( 168)		int l = Record->length;
HXLINE( 170)		while((i < l)){
HXLINE( 172)			i = (i + (int)1);
HXDLIN( 172)			 ::flixel::_hx_system::replay::CodeValuePair o = Record->__get((i - (int)1)).StaticCast<  ::flixel::_hx_system::replay::CodeValuePair >();
HXLINE( 173)			 ::flixel::input::FlxInput o2 = ( ( ::flixel::input::FlxInput)(::haxe::IMap_obj::get(this->_keyListMap,o->code)) );
HXLINE( 174)			o2->current = o->value;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxKeyboard_obj,playback,(void))


hx::ObjectPtr< FlxKeyboard_obj > FlxKeyboard_obj::__new() {
	hx::ObjectPtr< FlxKeyboard_obj > __this = new FlxKeyboard_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< FlxKeyboard_obj > FlxKeyboard_obj::__alloc(hx::Ctx *_hx_ctx) {
	FlxKeyboard_obj *__this = (FlxKeyboard_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxKeyboard_obj), true, "flixel.input.keyboard.FlxKeyboard"));
	*(void **)__this = FlxKeyboard_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxKeyboard_obj::FlxKeyboard_obj()
{
}

void FlxKeyboard_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxKeyboard);
	HX_MARK_MEMBER_NAME(_nativeCorrection,"_nativeCorrection");
	 ::flixel::input::FlxKeyManager_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxKeyboard_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_nativeCorrection,"_nativeCorrection");
	 ::flixel::input::FlxKeyManager_obj::__Visit(HX_VISIT_ARG);
}

hx::Val FlxKeyboard_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"record") ) { return hx::Val( record_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return hx::Val( onKeyUp_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"playback") ) { return hx::Val( playback_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return hx::Val( onKeyDown_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resolveKeyCode") ) { return hx::Val( resolveKeyCode_dyn()); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_nativeCorrection") ) { return hx::Val( _nativeCorrection); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxKeyboard_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"_nativeCorrection") ) { _nativeCorrection=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxKeyboard_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_nativeCorrection","\x74","\x82","\xe1","\x11"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxKeyboard_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(FlxKeyboard_obj,_nativeCorrection),HX_HCSTRING("_nativeCorrection","\x74","\x82","\xe1","\x11")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxKeyboard_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxKeyboard_obj_sMemberFields[] = {
	HX_HCSTRING("_nativeCorrection","\x74","\x82","\xe1","\x11"),
	HX_HCSTRING("onKeyUp","\x3b","\x58","\x3c","\x75"),
	HX_HCSTRING("onKeyDown","\x42","\x22","\xf2","\x73"),
	HX_HCSTRING("resolveKeyCode","\xe0","\xac","\x16","\xf4"),
	HX_HCSTRING("record","\x91","\x76","\xec","\xfd"),
	HX_HCSTRING("playback","\x1b","\x12","\x4b","\x46"),
	::String(null()) };

static void FlxKeyboard_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxKeyboard_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxKeyboard_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxKeyboard_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxKeyboard_obj::__mClass;

void FlxKeyboard_obj::__register()
{
	hx::Object *dummy = new FlxKeyboard_obj;
	FlxKeyboard_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.keyboard.FlxKeyboard","\x88","\xe0","\x02","\xc9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxKeyboard_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxKeyboard_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxKeyboard_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxKeyboard_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxKeyboard_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxKeyboard_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace keyboard
