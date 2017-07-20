// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_Choices
#include <Choices.h>
#endif
#ifndef INCLUDED_Dialogue
#include <Dialogue.h>
#endif
#ifndef INCLUDED_Pause
#include <Pause.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_StatsBase
#include <StatsBase.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxGradient
#include <flixel/util/FlxGradient.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_af23706db05c7feb_13_new,"PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",13,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_25_create,"PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",25,0xb30d7781)
static const int _hx_array_data_46c2835d_2[] = {
	(int)0,(int)-16777216,(int)-16777216,(int)-16777216,(int)-16777216,(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_73_update,"PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",73,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_106__dialogueStart,"PlayState","_dialogueStart",0xc782b25c,"PlayState._dialogueStart","PlayState.hx",106,0xb30d7781)
static const int _hx_array_data_46c2835d_5[] = {
	(int)0,(int)-16777216,(int)-16777216,(int)-16777216,(int)-16777216,(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_122__tweening,"PlayState","_tweening",0x95c83265,"PlayState._tweening","PlayState.hx",122,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_133_exit,"PlayState","exit",0xa8ffd1cf,"PlayState.exit","PlayState.hx",133,0xb30d7781)

void PlayState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_13_new)
HXLINE(  13)		super::__construct(MaxSize);
            	}

Dynamic PlayState_obj::__CreateEmpty() { return new PlayState_obj; }

void *PlayState_obj::_hx_vtable = 0;

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< PlayState_obj > _hx_result = new PlayState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PlayState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25a685e0) {
		if (inClassId<=(int)0x2335d9a7) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2335d9a7;
		} else {
			return inClassId==(int)0x25a685e0;
		}
	} else {
		return inClassId==(int)0x3634c52c || inClassId==(int)0x46c2835d;
	}
}

void PlayState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_25_create)
HXLINE(  26)		::flixel::FlxG_obj::save->bind(HX_("File1",15,4e,c6,93));
HXLINE(  27)		::StatsBase_obj::load();
HXLINE(  30)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  32)		bg->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,null(),null(),null());
HXLINE(  33)		this->add(bg);
HXLINE(  36)		this->_dialogue =  ::Dialogue_obj::__alloc( HX_CTX ,(int)4,(int)24,HX_("assets/data/typo_round/Typo_Round_Regular_Demo.otf",02,24,6a,e0));
HXLINE(  38)		Float _hx_tmp = (this->_dialogue->x + (int)70);
HXDLIN(  38)		this->_nameTag =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,_hx_tmp,(this->_dialogue->y + (int)100),(int)0,HX_("",00,00,00,00),(int)18,null());
HXLINE(  40)		Float _hx_tmp1 = (this->_nameTag->x - (int)5);
HXDLIN(  40)		this->_nameTextBox =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,_hx_tmp1,(this->_nameTag->y - (int)5),null());
HXLINE(  41)		int _hx_tmp2 = ::Std_obj::_hx_int((this->_nameTag->get_width() + (int)10));
HXDLIN(  41)		this->_nameTextBox = ::flixel::util::FlxGradient_obj::createGradientFlxSprite(_hx_tmp2,::Std_obj::_hx_int((this->_nameTag->get_height() + (int)10)),::Array_obj< int >::fromData( _hx_array_data_46c2835d_2,6),(int)1,(int)0,null());
HXLINE(  42)		this->_nameTextBox->set_alpha((int)0);
HXLINE(  45)		this->_electronImage =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  46)		this->_electronImage->loadGraphic(HX_("assets/images/concept/electron_blush.jpg",88,89,e6,99),false,(int)474,(int)428,null(),null());
HXLINE(  47)		 ::flixel::FlxSprite _hx_tmp3 = this->_electronImage;
HXDLIN(  47)		_hx_tmp3->set_x(((int)0 - this->_electronImage->get_width()));
HXLINE(  48)		this->_electronImage->set_y((int)150);
HXLINE(  49)		this->add(this->_electronImage);
HXLINE(  51)		this->_dummyImage =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  52)		this->add(this->_dummyImage);
HXLINE(  53)		{
HXLINE(  53)			 ::flixel::FlxSprite _g = this->_dummyImage;
HXDLIN(  53)			_g->set_x((_g->x - (int)30));
            		}
HXLINE(  55)		this->add(this->_dialogue);
HXLINE(  56)		 ::Dialogue _hx_tmp4 = this->_dialogue;
HXDLIN(  56)		_hx_tmp4->set_y(((int)30 - this->_dialogue->get_height()));
HXLINE(  57)		::flixel::tweens::FlxTween_obj::tween(this->_dialogue, ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("y",79,00,00,00),(int)0)),((Float)0.4), ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeInOut_dyn())));
HXLINE(  60)		this->add(this->_nameTextBox);
HXLINE(  63)		this->add(this->_nameTag);
HXLINE(  65)		this->_choices =  ::Choices_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  66)		this->_choices->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  67)		this->add(this->_choices);
HXLINE(  69)		this->super::create();
            	}


void PlayState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_73_update)
HXLINE(  86)		if ((::flixel::FlxG_obj::mouse->_rightButton->current == (int)2)) {
HXLINE(  88)			 ::Pause _phone =  ::Pause_obj::__alloc( HX_CTX ,null());
HXLINE(  90)			this->openSubState(_phone);
            		}
HXLINE(  94)		if (this->_choices->_btnPressed) {
HXLINE(  96)			if ((this->_choices->_getChoices() == (int)0)) {
HXLINE(  97)				::flixel::FlxG_obj::log->advanced(HX_("idk",30,04,50,00),::flixel::_hx_system::debug::log::LogStyle_obj::NORMAL,null());
            			}
            			else {
HXLINE(  99)				::flixel::FlxG_obj::log->advanced(HX_("OAOAOAHAH",39,08,76,18),::flixel::_hx_system::debug::log::LogStyle_obj::NORMAL,null());
            			}
            		}
HXLINE( 102)		this->super::update(elapsed);
            	}


void PlayState_obj::_dialogueStart(::Array< ::String > words,hx::Null< bool >  __o_autostart,::String __o__name){
bool autostart = __o_autostart.Default(true);
::String _name = __o__name.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_106__dialogueStart)
HXLINE( 107)		this->_dialogue->setDialog(words,autostart);
HXLINE( 108)		this->_nameTag->set_text(_name);
HXLINE( 111)		int _hx_tmp = ::Std_obj::_hx_int((this->_nameTag->get_width() + (int)10));
HXDLIN( 111)		this->_nameTextBox = ::flixel::util::FlxGradient_obj::createGradientFlxSprite(_hx_tmp,::Std_obj::_hx_int((this->_nameTag->get_height() + (int)10)),::Array_obj< int >::fromData( _hx_array_data_46c2835d_5,6),(int)1,(int)0,null());
HXLINE( 112)		if ((_name != HX_("",00,00,00,00))) {
HXLINE( 113)			this->_nameTextBox->set_alpha((int)1);
            		}
            		else {
HXLINE( 115)			this->_nameTextBox->set_alpha((int)0);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(PlayState_obj,_dialogueStart,(void))

void PlayState_obj::_tweening( ::flixel::FlxSprite _image,hx::Null< bool >  __o_tweenIn){
bool tweenIn = __o_tweenIn.Default(true);
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_122__tweening)
HXLINE( 122)		if (tweenIn) {
HXLINE( 124)			_image->set_x(((int)0 - _image->get_width()));
HXLINE( 125)			::flixel::tweens::FlxTween_obj::tween(_image, ::Dynamic(hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("x",78,00,00,00),(int)200)),((Float)1.5), ::Dynamic(hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::backOut_dyn())));
            		}
            		else {
HXLINE( 129)			Float _hx_tmp = ((int)0 - _image->get_width());
HXDLIN( 129)			::flixel::tweens::FlxTween_obj::tween(_image, ::Dynamic(hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("x",78,00,00,00),_hx_tmp)),((Float)0.75), ::Dynamic(hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::backIn_dyn())));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,_tweening,(void))

void PlayState_obj::exit(){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_133_exit)
HXLINE( 134)		int exitTHing = ((int)30 - ::Std_obj::_hx_int(this->_dialogue->get_height()));
HXLINE( 135)		::flixel::tweens::FlxTween_obj::tween(this->_dialogue, ::Dynamic(hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("y",79,00,00,00),exitTHing)
            			->setFixed(1,HX_("alpha",5e,a7,96,21),(int)0)),((Float)0.6), ::Dynamic(hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::cubeInOut_dyn())));
            	}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,exit,(void))


hx::ObjectPtr< PlayState_obj > PlayState_obj::__new( ::Dynamic MaxSize) {
	hx::ObjectPtr< PlayState_obj > __this = new PlayState_obj();
	__this->__construct(MaxSize);
	return __this;
}

hx::ObjectPtr< PlayState_obj > PlayState_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	PlayState_obj *__this = (PlayState_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(PlayState_obj), true, "PlayState"));
	*(void **)__this = PlayState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(_dialogue,"_dialogue");
	HX_MARK_MEMBER_NAME(_nameTag,"_nameTag");
	HX_MARK_MEMBER_NAME(_nameTextBox,"_nameTextBox");
	HX_MARK_MEMBER_NAME(_electronImage,"_electronImage");
	HX_MARK_MEMBER_NAME(_dummyImage,"_dummyImage");
	HX_MARK_MEMBER_NAME(_choices,"_choices");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_dialogue,"_dialogue");
	HX_VISIT_MEMBER_NAME(_nameTag,"_nameTag");
	HX_VISIT_MEMBER_NAME(_nameTextBox,"_nameTextBox");
	HX_VISIT_MEMBER_NAME(_electronImage,"_electronImage");
	HX_VISIT_MEMBER_NAME(_dummyImage,"_dummyImage");
	HX_VISIT_MEMBER_NAME(_choices,"_choices");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

hx::Val PlayState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"exit") ) { return hx::Val( exit_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return hx::Val( create_dyn()); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_nameTag") ) { return hx::Val( _nameTag); }
		if (HX_FIELD_EQ(inName,"_choices") ) { return hx::Val( _choices); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dialogue") ) { return hx::Val( _dialogue); }
		if (HX_FIELD_EQ(inName,"_tweening") ) { return hx::Val( _tweening_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_dummyImage") ) { return hx::Val( _dummyImage); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_nameTextBox") ) { return hx::Val( _nameTextBox); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_electronImage") ) { return hx::Val( _electronImage); }
		if (HX_FIELD_EQ(inName,"_dialogueStart") ) { return hx::Val( _dialogueStart_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val PlayState_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_nameTag") ) { _nameTag=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_choices") ) { _choices=inValue.Cast<  ::Choices >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_dialogue") ) { _dialogue=inValue.Cast<  ::Dialogue >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_dummyImage") ) { _dummyImage=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_nameTextBox") ) { _nameTextBox=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_electronImage") ) { _electronImage=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_dialogue","\x77","\x24","\x2a","\xef"));
	outFields->push(HX_HCSTRING("_nameTag","\x50","\x3a","\x3f","\xe6"));
	outFields->push(HX_HCSTRING("_nameTextBox","\x54","\x26","\x8f","\x6f"));
	outFields->push(HX_HCSTRING("_electronImage","\x1a","\x83","\x13","\x16"));
	outFields->push(HX_HCSTRING("_dummyImage","\x32","\xfd","\xd8","\x18"));
	outFields->push(HX_HCSTRING("_choices","\x73","\x0f","\xd0","\x12"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo PlayState_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::Dialogue*/ ,(int)offsetof(PlayState_obj,_dialogue),HX_HCSTRING("_dialogue","\x77","\x24","\x2a","\xef")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,_nameTag),HX_HCSTRING("_nameTag","\x50","\x3a","\x3f","\xe6")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,_nameTextBox),HX_HCSTRING("_nameTextBox","\x54","\x26","\x8f","\x6f")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,_electronImage),HX_HCSTRING("_electronImage","\x1a","\x83","\x13","\x16")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(PlayState_obj,_dummyImage),HX_HCSTRING("_dummyImage","\x32","\xfd","\xd8","\x18")},
	{hx::fsObject /*::Choices*/ ,(int)offsetof(PlayState_obj,_choices),HX_HCSTRING("_choices","\x73","\x0f","\xd0","\x12")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *PlayState_obj_sStaticStorageInfo = 0;
#endif

static ::String PlayState_obj_sMemberFields[] = {
	HX_HCSTRING("_dialogue","\x77","\x24","\x2a","\xef"),
	HX_HCSTRING("_nameTag","\x50","\x3a","\x3f","\xe6"),
	HX_HCSTRING("_nameTextBox","\x54","\x26","\x8f","\x6f"),
	HX_HCSTRING("_electronImage","\x1a","\x83","\x13","\x16"),
	HX_HCSTRING("_dummyImage","\x32","\xfd","\xd8","\x18"),
	HX_HCSTRING("_choices","\x73","\x0f","\xd0","\x12"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("_dialogueStart","\x6b","\x30","\x44","\x5d"),
	HX_HCSTRING("_tweening","\xb6","\x6e","\x75","\x59"),
	HX_HCSTRING("exit","\x1e","\xf7","\x1d","\x43"),
	::String(null()) };

static void PlayState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PlayState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#endif

hx::Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Object *dummy = new PlayState_obj;
	PlayState_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("PlayState","\x5d","\x83","\xc2","\x46");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = PlayState_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(PlayState_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< PlayState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PlayState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlayState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlayState_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

