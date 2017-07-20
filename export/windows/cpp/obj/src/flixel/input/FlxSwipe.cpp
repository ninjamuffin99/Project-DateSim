// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_input_FlxSwipe
#include <flixel/input/FlxSwipe.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
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
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_223f15e5be8ee429_29_new,"flixel.input.FlxSwipe","new",0xecc12d70,"flixel.input.FlxSwipe.new","flixel/input/FlxSwipe.hx",29,0xe38cac7e)
HX_LOCAL_STACK_FRAME(_hx_pos_223f15e5be8ee429_39_toString,"flixel.input.FlxSwipe","toString",0xb726199c,"flixel.input.FlxSwipe.toString","flixel/input/FlxSwipe.hx",39,0xe38cac7e)
HX_LOCAL_STACK_FRAME(_hx_pos_223f15e5be8ee429_50_get_distance,"flixel.input.FlxSwipe","get_distance",0xd139c82e,"flixel.input.FlxSwipe.get_distance","flixel/input/FlxSwipe.hx",50,0xe38cac7e)
HX_LOCAL_STACK_FRAME(_hx_pos_223f15e5be8ee429_55_get_angle,"flixel.input.FlxSwipe","get_angle",0xc834293a,"flixel.input.FlxSwipe.get_angle","flixel/input/FlxSwipe.hx",55,0xe38cac7e)
HX_LOCAL_STACK_FRAME(_hx_pos_223f15e5be8ee429_60_get_duration,"flixel.input.FlxSwipe","get_duration",0x79ce444d,"flixel.input.FlxSwipe.get_duration","flixel/input/FlxSwipe.hx",60,0xe38cac7e)
namespace flixel{
namespace input{

void FlxSwipe_obj::__construct(int ID, ::flixel::math::FlxPoint StartPosition, ::flixel::math::FlxPoint EndPosition,Float StartTimeInTicks){
            	HX_STACKFRAME(&_hx_pos_223f15e5be8ee429_29_new)
HXLINE(  30)		this->ID = ID;
HXLINE(  31)		this->startPosition = StartPosition;
HXLINE(  32)		this->endPosition = EndPosition;
HXLINE(  33)		this->_startTimeInTicks = StartTimeInTicks;
HXLINE(  34)		this->_endTimeInTicks = ::flixel::FlxG_obj::game->ticks;
            	}

Dynamic FlxSwipe_obj::__CreateEmpty() { return new FlxSwipe_obj; }

void *FlxSwipe_obj::_hx_vtable = 0;

Dynamic FlxSwipe_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxSwipe_obj > _hx_result = new FlxSwipe_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool FlxSwipe_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x25d95576;
}

::String FlxSwipe_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_223f15e5be8ee429_39_toString)
HXLINE(  40)		 ::Dynamic value = this->ID;
HXDLIN(  40)		 ::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(  40)		_this->label = HX_("ID",db,3f,00,00);
HXDLIN(  40)		_this->value = value;
HXDLIN(  40)		 ::flixel::util::LabelValuePair _hx_tmp = _this;
HXLINE(  41)		 ::Dynamic value1 = this->startPosition;
HXDLIN(  41)		 ::flixel::util::LabelValuePair _this1 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(  41)		_this1->label = HX_("start",62,74,0b,84);
HXDLIN(  41)		_this1->value = value1;
HXDLIN(  41)		 ::flixel::util::LabelValuePair _hx_tmp1 = _this1;
HXLINE(  42)		 ::Dynamic value2 = this->endPosition;
HXDLIN(  42)		 ::flixel::util::LabelValuePair _this2 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(  42)		_this2->label = HX_("end",db,03,4d,00);
HXDLIN(  42)		_this2->value = value2;
HXDLIN(  42)		 ::flixel::util::LabelValuePair _hx_tmp2 = _this2;
HXLINE(  43)		Float dx = (this->startPosition->x - this->endPosition->x);
HXDLIN(  43)		Float dy = (this->startPosition->y - this->endPosition->y);
HXDLIN(  43)		 ::Dynamic value3 = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
HXDLIN(  43)		 ::flixel::util::LabelValuePair _this3 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(  43)		_this3->label = HX_("distance",35,93,f9,6b);
HXDLIN(  43)		_this3->value = value3;
HXDLIN(  43)		 ::flixel::util::LabelValuePair _hx_tmp3 = _this3;
HXLINE(  44)		 ::Dynamic value4 = this->startPosition->angleBetween(this->endPosition);
HXDLIN(  44)		 ::flixel::util::LabelValuePair _this4 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(  44)		_this4->label = HX_("angle",d3,43,e2,22);
HXDLIN(  44)		_this4->value = value4;
HXDLIN(  44)		 ::flixel::util::LabelValuePair _hx_tmp4 = _this4;
HXLINE(  45)		 ::Dynamic value5 = ((Float)(this->_endTimeInTicks - this->_startTimeInTicks) / (Float)(int)1000);
HXDLIN(  45)		 ::flixel::util::LabelValuePair _this5 = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN(  45)		_this5->label = HX_("duration",54,0f,8e,14);
HXDLIN(  45)		_this5->value = value5;
HXLINE(  39)		return ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(6)->init(0,_hx_tmp)->init(1,_hx_tmp1)->init(2,_hx_tmp2)->init(3,_hx_tmp3)->init(4,_hx_tmp4)->init(5,_this5));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSwipe_obj,toString,return )

Float FlxSwipe_obj::get_distance(){
            	HX_STACKFRAME(&_hx_pos_223f15e5be8ee429_50_get_distance)
HXLINE(  50)		Float dx = (this->startPosition->x - this->endPosition->x);
HXDLIN(  50)		Float dy = (this->startPosition->y - this->endPosition->y);
HXDLIN(  50)		return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSwipe_obj,get_distance,return )

Float FlxSwipe_obj::get_angle(){
            	HX_STACKFRAME(&_hx_pos_223f15e5be8ee429_55_get_angle)
HXLINE(  55)		return this->startPosition->angleBetween(this->endPosition);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSwipe_obj,get_angle,return )

Float FlxSwipe_obj::get_duration(){
            	HX_STACKFRAME(&_hx_pos_223f15e5be8ee429_60_get_duration)
HXLINE(  60)		return ((Float)(this->_endTimeInTicks - this->_startTimeInTicks) / (Float)(int)1000);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSwipe_obj,get_duration,return )


hx::ObjectPtr< FlxSwipe_obj > FlxSwipe_obj::__new(int ID, ::flixel::math::FlxPoint StartPosition, ::flixel::math::FlxPoint EndPosition,Float StartTimeInTicks) {
	hx::ObjectPtr< FlxSwipe_obj > __this = new FlxSwipe_obj();
	__this->__construct(ID,StartPosition,EndPosition,StartTimeInTicks);
	return __this;
}

hx::ObjectPtr< FlxSwipe_obj > FlxSwipe_obj::__alloc(hx::Ctx *_hx_ctx,int ID, ::flixel::math::FlxPoint StartPosition, ::flixel::math::FlxPoint EndPosition,Float StartTimeInTicks) {
	FlxSwipe_obj *__this = (FlxSwipe_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxSwipe_obj), true, "flixel.input.FlxSwipe"));
	*(void **)__this = FlxSwipe_obj::_hx_vtable;
	__this->__construct(ID,StartPosition,EndPosition,StartTimeInTicks);
	return __this;
}

FlxSwipe_obj::FlxSwipe_obj()
{
}

void FlxSwipe_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSwipe);
	HX_MARK_MEMBER_NAME(ID,"ID");
	HX_MARK_MEMBER_NAME(startPosition,"startPosition");
	HX_MARK_MEMBER_NAME(endPosition,"endPosition");
	HX_MARK_MEMBER_NAME(_startTimeInTicks,"_startTimeInTicks");
	HX_MARK_MEMBER_NAME(_endTimeInTicks,"_endTimeInTicks");
	HX_MARK_END_CLASS();
}

void FlxSwipe_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ID,"ID");
	HX_VISIT_MEMBER_NAME(startPosition,"startPosition");
	HX_VISIT_MEMBER_NAME(endPosition,"endPosition");
	HX_VISIT_MEMBER_NAME(_startTimeInTicks,"_startTimeInTicks");
	HX_VISIT_MEMBER_NAME(_endTimeInTicks,"_endTimeInTicks");
}

hx::Val FlxSwipe_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { return hx::Val( ID); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_angle()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_distance()); }
		if (HX_FIELD_EQ(inName,"duration") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_duration()); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_angle") ) { return hx::Val( get_angle_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"endPosition") ) { return hx::Val( endPosition); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_distance") ) { return hx::Val( get_distance_dyn()); }
		if (HX_FIELD_EQ(inName,"get_duration") ) { return hx::Val( get_duration_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startPosition") ) { return hx::Val( startPosition); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_endTimeInTicks") ) { return hx::Val( _endTimeInTicks); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_startTimeInTicks") ) { return hx::Val( _startTimeInTicks); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxSwipe_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { ID=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"endPosition") ) { endPosition=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startPosition") ) { startPosition=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_endTimeInTicks") ) { _endTimeInTicks=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_startTimeInTicks") ) { _startTimeInTicks=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSwipe_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00"));
	outFields->push(HX_HCSTRING("startPosition","\x2b","\x03","\xb6","\xcf"));
	outFields->push(HX_HCSTRING("endPosition","\xa4","\x33","\xb9","\x82"));
	outFields->push(HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"));
	outFields->push(HX_HCSTRING("angle","\xd3","\x43","\xe2","\x22"));
	outFields->push(HX_HCSTRING("duration","\x54","\x0f","\x8e","\x14"));
	outFields->push(HX_HCSTRING("_startTimeInTicks","\xe1","\x34","\xb7","\x36"));
	outFields->push(HX_HCSTRING("_endTimeInTicks","\x48","\x30","\xb2","\xc2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxSwipe_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxSwipe_obj,ID),HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxSwipe_obj,startPosition),HX_HCSTRING("startPosition","\x2b","\x03","\xb6","\xcf")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxSwipe_obj,endPosition),HX_HCSTRING("endPosition","\xa4","\x33","\xb9","\x82")},
	{hx::fsFloat,(int)offsetof(FlxSwipe_obj,_startTimeInTicks),HX_HCSTRING("_startTimeInTicks","\xe1","\x34","\xb7","\x36")},
	{hx::fsFloat,(int)offsetof(FlxSwipe_obj,_endTimeInTicks),HX_HCSTRING("_endTimeInTicks","\x48","\x30","\xb2","\xc2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxSwipe_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxSwipe_obj_sMemberFields[] = {
	HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00"),
	HX_HCSTRING("startPosition","\x2b","\x03","\xb6","\xcf"),
	HX_HCSTRING("endPosition","\xa4","\x33","\xb9","\x82"),
	HX_HCSTRING("_startTimeInTicks","\xe1","\x34","\xb7","\x36"),
	HX_HCSTRING("_endTimeInTicks","\x48","\x30","\xb2","\xc2"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("get_distance","\x3e","\x47","\x13","\x21"),
	HX_HCSTRING("get_angle","\x2a","\xa0","\x8b","\x66"),
	HX_HCSTRING("get_duration","\x5d","\xc3","\xa7","\xc9"),
	::String(null()) };

static void FlxSwipe_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSwipe_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxSwipe_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSwipe_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxSwipe_obj::__mClass;

void FlxSwipe_obj::__register()
{
	hx::Object *dummy = new FlxSwipe_obj;
	FlxSwipe_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.FlxSwipe","\x7e","\xf5","\xe9","\xec");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxSwipe_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxSwipe_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxSwipe_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxSwipe_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxSwipe_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxSwipe_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
