// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_151a56598b761d13_12_new,"flixel.util.FlxTimer","new",0xb89241df,"flixel.util.FlxTimer.new","flixel/util/FlxTimer.hx",12,0x0a681e11)
HX_LOCAL_STACK_FRAME(_hx_pos_151a56598b761d13_91_destroy,"flixel.util.FlxTimer","destroy",0x3b34c9f9,"flixel.util.FlxTimer.destroy","flixel/util/FlxTimer.hx",91,0x0a681e11)
HX_LOCAL_STACK_FRAME(_hx_pos_151a56598b761d13_105_start,"flixel.util.FlxTimer","start",0x9de883a1,"flixel.util.FlxTimer.start","flixel/util/FlxTimer.hx",105,0x0a681e11)
HX_LOCAL_STACK_FRAME(_hx_pos_151a56598b761d13_133_reset,"flixel.util.FlxTimer","reset",0x00a5590e,"flixel.util.FlxTimer.reset","flixel/util/FlxTimer.hx",133,0x0a681e11)
HX_LOCAL_STACK_FRAME(_hx_pos_151a56598b761d13_146_cancel,"flixel.util.FlxTimer","cancel",0x3fc4355b,"flixel.util.FlxTimer.cancel","flixel/util/FlxTimer.hx",146,0x0a681e11)
HX_LOCAL_STACK_FRAME(_hx_pos_151a56598b761d13_164_update,"flixel.util.FlxTimer","update",0x0e95cdea,"flixel.util.FlxTimer.update","flixel/util/FlxTimer.hx",164,0x0a681e11)
HX_LOCAL_STACK_FRAME(_hx_pos_151a56598b761d13_181_onLoopFinished,"flixel.util.FlxTimer","onLoopFinished",0xd1a6ea96,"flixel.util.FlxTimer.onLoopFinished","flixel/util/FlxTimer.hx",181,0x0a681e11)
HX_LOCAL_STACK_FRAME(_hx_pos_151a56598b761d13_191_get_timeLeft,"flixel.util.FlxTimer","get_timeLeft",0x3108255e,"flixel.util.FlxTimer.get_timeLeft","flixel/util/FlxTimer.hx",191,0x0a681e11)
HX_LOCAL_STACK_FRAME(_hx_pos_151a56598b761d13_196_get_elapsedTime,"flixel.util.FlxTimer","get_elapsedTime",0x36d149ff,"flixel.util.FlxTimer.get_elapsedTime","flixel/util/FlxTimer.hx",196,0x0a681e11)
HX_LOCAL_STACK_FRAME(_hx_pos_151a56598b761d13_201_get_loopsLeft,"flixel.util.FlxTimer","get_loopsLeft",0x92ed534c,"flixel.util.FlxTimer.get_loopsLeft","flixel/util/FlxTimer.hx",201,0x0a681e11)
HX_LOCAL_STACK_FRAME(_hx_pos_151a56598b761d13_206_get_elapsedLoops,"flixel.util.FlxTimer","get_elapsedLoops",0x2913a75d,"flixel.util.FlxTimer.get_elapsedLoops","flixel/util/FlxTimer.hx",206,0x0a681e11)
HX_LOCAL_STACK_FRAME(_hx_pos_151a56598b761d13_211_get_progress,"flixel.util.FlxTimer","get_progress",0xcf219257,"flixel.util.FlxTimer.get_progress","flixel/util/FlxTimer.hx",211,0x0a681e11)
namespace flixel{
namespace util{

void FlxTimer_obj::__construct( ::flixel::util::FlxTimerManager manager){
            	HX_STACKFRAME(&_hx_pos_151a56598b761d13_12_new)
HXLINE(  76)		this->_inManager = false;
HXLINE(  74)		this->_loopsCounter = (int)0;
HXLINE(  70)		this->_timeCounter = ((Float)0);
HXLINE(  40)		this->finished = false;
HXLINE(  36)		this->active = false;
HXLINE(  32)		this->loops = (int)0;
HXLINE(  28)		this->time = ((Float)0);
HXLINE(  83)		 ::flixel::util::FlxTimerManager _hx_tmp;
HXDLIN(  83)		if (hx::IsNotNull( manager )) {
HXLINE(  83)			_hx_tmp = manager;
            		}
            		else {
HXLINE(  83)			_hx_tmp = ::flixel::util::FlxTimer_obj::globalManager;
            		}
HXDLIN(  83)		this->manager = _hx_tmp;
            	}

Dynamic FlxTimer_obj::__CreateEmpty() { return new FlxTimer_obj; }

void *FlxTimer_obj::_hx_vtable = 0;

Dynamic FlxTimer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxTimer_obj > _hx_result = new FlxTimer_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxTimer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x115f93d5;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_util_FlxTimer__hx_flixel_util_IFlxDestroyable= {
	( void (hx::Object::*)())&::flixel::util::FlxTimer_obj::destroy,
};

void *FlxTimer_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_util_FlxTimer__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxTimer_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_151a56598b761d13_91_destroy)
HXLINE(  91)		this->onComplete = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimer_obj,destroy,(void))

 ::flixel::util::FlxTimer FlxTimer_obj::start(hx::Null< Float >  __o_Time, ::Dynamic OnComplete,hx::Null< int >  __o_Loops){
Float Time = __o_Time.Default(1);
int Loops = __o_Loops.Default(1);
            	HX_STACKFRAME(&_hx_pos_151a56598b761d13_105_start)
HXLINE( 106)		bool _hx_tmp;
HXDLIN( 106)		if (hx::IsNotNull( this->manager )) {
HXLINE( 106)			_hx_tmp = !(this->_inManager);
            		}
            		else {
HXLINE( 106)			_hx_tmp = false;
            		}
HXDLIN( 106)		if (_hx_tmp) {
HXLINE( 108)			this->manager->add(hx::ObjectPtr<OBJ_>(this));
HXLINE( 109)			this->_inManager = true;
            		}
HXLINE( 112)		this->active = true;
HXLINE( 113)		this->finished = false;
HXLINE( 114)		this->time = ::Math_obj::abs(Time);
HXLINE( 116)		if ((Loops < (int)0)) {
HXLINE( 118)			Loops = (Loops * (int)-1);
            		}
HXLINE( 121)		this->loops = Loops;
HXLINE( 122)		this->onComplete = OnComplete;
HXLINE( 123)		this->_timeCounter = (int)0;
HXLINE( 124)		this->_loopsCounter = (int)0;
HXLINE( 125)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxTimer_obj,start,return )

 ::flixel::util::FlxTimer FlxTimer_obj::reset(hx::Null< Float >  __o_NewTime){
Float NewTime = __o_NewTime.Default(-1);
            	HX_STACKFRAME(&_hx_pos_151a56598b761d13_133_reset)
HXLINE( 134)		if ((NewTime < (int)0)) {
HXLINE( 136)			NewTime = this->time;
            		}
HXLINE( 138)		this->start(NewTime,this->onComplete,this->loops);
HXLINE( 139)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTimer_obj,reset,return )

void FlxTimer_obj::cancel(){
            	HX_STACKFRAME(&_hx_pos_151a56598b761d13_146_cancel)
HXLINE( 147)		this->finished = true;
HXLINE( 148)		this->active = false;
HXLINE( 150)		bool _hx_tmp;
HXDLIN( 150)		if (hx::IsNotNull( this->manager )) {
HXLINE( 150)			_hx_tmp = this->_inManager;
            		}
            		else {
HXLINE( 150)			_hx_tmp = false;
            		}
HXDLIN( 150)		if (_hx_tmp) {
HXLINE( 152)			this->manager->remove(hx::ObjectPtr<OBJ_>(this));
HXLINE( 153)			this->_inManager = false;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimer_obj,cancel,(void))

void FlxTimer_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_151a56598b761d13_164_update)
HXLINE( 165)		 ::flixel::util::FlxTimer _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 165)		_hx_tmp->_timeCounter = (_hx_tmp->_timeCounter + elapsed);
HXLINE( 167)		while(true){
HXLINE( 167)			bool _hx_tmp1;
HXDLIN( 167)			bool _hx_tmp2;
HXDLIN( 167)			if ((this->_timeCounter >= this->time)) {
HXLINE( 167)				_hx_tmp2 = this->active;
            			}
            			else {
HXLINE( 167)				_hx_tmp2 = false;
            			}
HXDLIN( 167)			if (_hx_tmp2) {
HXLINE( 167)				_hx_tmp1 = !(this->finished);
            			}
            			else {
HXLINE( 167)				_hx_tmp1 = false;
            			}
HXDLIN( 167)			if (!(_hx_tmp1)) {
HXLINE( 167)				goto _hx_goto_5;
            			}
HXLINE( 169)			 ::flixel::util::FlxTimer _hx_tmp3 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 169)			_hx_tmp3->_timeCounter = (_hx_tmp3->_timeCounter - this->time);
HXLINE( 170)			this->_loopsCounter++;
HXLINE( 172)			bool _hx_tmp4;
HXDLIN( 172)			if ((this->loops > (int)0)) {
HXLINE( 172)				_hx_tmp4 = (this->_loopsCounter >= this->loops);
            			}
            			else {
HXLINE( 172)				_hx_tmp4 = false;
            			}
HXDLIN( 172)			if (_hx_tmp4) {
HXLINE( 174)				this->finished = true;
            			}
            		}
            		_hx_goto_5:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTimer_obj,update,(void))

void FlxTimer_obj::onLoopFinished(){
            	HX_STACKFRAME(&_hx_pos_151a56598b761d13_181_onLoopFinished)
HXLINE( 182)		if (hx::IsNotNull( this->onComplete )) {
HXLINE( 183)			this->onComplete(hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 185)		if (this->finished) {
HXLINE( 186)			this->cancel();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimer_obj,onLoopFinished,(void))

Float FlxTimer_obj::get_timeLeft(){
            	HX_STACKFRAME(&_hx_pos_151a56598b761d13_191_get_timeLeft)
HXLINE( 191)		return (this->time - this->_timeCounter);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimer_obj,get_timeLeft,return )

Float FlxTimer_obj::get_elapsedTime(){
            	HX_STACKFRAME(&_hx_pos_151a56598b761d13_196_get_elapsedTime)
HXLINE( 196)		return this->_timeCounter;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimer_obj,get_elapsedTime,return )

int FlxTimer_obj::get_loopsLeft(){
            	HX_STACKFRAME(&_hx_pos_151a56598b761d13_201_get_loopsLeft)
HXLINE( 201)		return (this->loops - this->_loopsCounter);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimer_obj,get_loopsLeft,return )

int FlxTimer_obj::get_elapsedLoops(){
            	HX_STACKFRAME(&_hx_pos_151a56598b761d13_206_get_elapsedLoops)
HXLINE( 206)		return this->_loopsCounter;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimer_obj,get_elapsedLoops,return )

Float FlxTimer_obj::get_progress(){
            	HX_STACKFRAME(&_hx_pos_151a56598b761d13_211_get_progress)
HXLINE( 211)		if ((this->time > (int)0)) {
HXLINE( 211)			return ((Float)this->_timeCounter / (Float)this->time);
            		}
            		else {
HXLINE( 211)			return (int)0;
            		}
HXDLIN( 211)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimer_obj,get_progress,return )

 ::flixel::util::FlxTimerManager FlxTimer_obj::globalManager;


hx::ObjectPtr< FlxTimer_obj > FlxTimer_obj::__new( ::flixel::util::FlxTimerManager manager) {
	hx::ObjectPtr< FlxTimer_obj > __this = new FlxTimer_obj();
	__this->__construct(manager);
	return __this;
}

hx::ObjectPtr< FlxTimer_obj > FlxTimer_obj::__alloc(hx::Ctx *_hx_ctx, ::flixel::util::FlxTimerManager manager) {
	FlxTimer_obj *__this = (FlxTimer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxTimer_obj), true, "flixel.util.FlxTimer"));
	*(void **)__this = FlxTimer_obj::_hx_vtable;
	__this->__construct(manager);
	return __this;
}

FlxTimer_obj::FlxTimer_obj()
{
}

void FlxTimer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTimer);
	HX_MARK_MEMBER_NAME(manager,"manager");
	HX_MARK_MEMBER_NAME(time,"time");
	HX_MARK_MEMBER_NAME(loops,"loops");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(_timeCounter,"_timeCounter");
	HX_MARK_MEMBER_NAME(_loopsCounter,"_loopsCounter");
	HX_MARK_MEMBER_NAME(_inManager,"_inManager");
	HX_MARK_END_CLASS();
}

void FlxTimer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(manager,"manager");
	HX_VISIT_MEMBER_NAME(time,"time");
	HX_VISIT_MEMBER_NAME(loops,"loops");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(finished,"finished");
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(_timeCounter,"_timeCounter");
	HX_VISIT_MEMBER_NAME(_loopsCounter,"_loopsCounter");
	HX_VISIT_MEMBER_NAME(_inManager,"_inManager");
}

hx::Val FlxTimer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { return hx::Val( time); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"loops") ) { return hx::Val( loops); }
		if (HX_FIELD_EQ(inName,"start") ) { return hx::Val( start_dyn()); }
		if (HX_FIELD_EQ(inName,"reset") ) { return hx::Val( reset_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return hx::Val( active); }
		if (HX_FIELD_EQ(inName,"cancel") ) { return hx::Val( cancel_dyn()); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { return hx::Val( manager); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { return hx::Val( finished); }
		if (HX_FIELD_EQ(inName,"timeLeft") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_timeLeft()); }
		if (HX_FIELD_EQ(inName,"progress") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_progress()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loopsLeft") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_loopsLeft()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return hx::Val( onComplete); }
		if (HX_FIELD_EQ(inName,"_inManager") ) { return hx::Val( _inManager); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"elapsedTime") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_elapsedTime()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"elapsedLoops") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_elapsedLoops()); }
		if (HX_FIELD_EQ(inName,"_timeCounter") ) { return hx::Val( _timeCounter); }
		if (HX_FIELD_EQ(inName,"get_timeLeft") ) { return hx::Val( get_timeLeft_dyn()); }
		if (HX_FIELD_EQ(inName,"get_progress") ) { return hx::Val( get_progress_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_loopsCounter") ) { return hx::Val( _loopsCounter); }
		if (HX_FIELD_EQ(inName,"get_loopsLeft") ) { return hx::Val( get_loopsLeft_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onLoopFinished") ) { return hx::Val( onLoopFinished_dyn()); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_elapsedTime") ) { return hx::Val( get_elapsedTime_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_elapsedLoops") ) { return hx::Val( get_elapsedLoops_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxTimer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"globalManager") ) { outValue = globalManager; return true; }
	}
	return false;
}

hx::Val FlxTimer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"time") ) { time=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"loops") ) { loops=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast<  ::flixel::util::FlxTimerManager >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inManager") ) { _inManager=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_timeCounter") ) { _timeCounter=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_loopsCounter") ) { _loopsCounter=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxTimer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"globalManager") ) { globalManager=ioValue.Cast<  ::flixel::util::FlxTimerManager >(); return true; }
	}
	return false;
}

void FlxTimer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13"));
	outFields->push(HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"));
	outFields->push(HX_HCSTRING("loops","\x8f","\xf1","\xf9","\x78"));
	outFields->push(HX_HCSTRING("active","\xc6","\x41","\x46","\x16"));
	outFields->push(HX_HCSTRING("finished","\x72","\x93","\x0e","\x95"));
	outFields->push(HX_HCSTRING("timeLeft","\xb4","\x8a","\x11","\xe8"));
	outFields->push(HX_HCSTRING("elapsedTime","\x69","\x5e","\xcd","\xc6"));
	outFields->push(HX_HCSTRING("loopsLeft","\x36","\x99","\x1c","\x04"));
	outFields->push(HX_HCSTRING("elapsedLoops","\xb3","\x6f","\xa9","\x95"));
	outFields->push(HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"));
	outFields->push(HX_HCSTRING("_timeCounter","\x70","\x04","\xb9","\xf5"));
	outFields->push(HX_HCSTRING("_loopsCounter","\x0c","\x58","\xdd","\xc5"));
	outFields->push(HX_HCSTRING("_inManager","\xc9","\x50","\x66","\x55"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxTimer_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::util::FlxTimerManager*/ ,(int)offsetof(FlxTimer_obj,manager),HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13")},
	{hx::fsFloat,(int)offsetof(FlxTimer_obj,time),HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c")},
	{hx::fsInt,(int)offsetof(FlxTimer_obj,loops),HX_HCSTRING("loops","\x8f","\xf1","\xf9","\x78")},
	{hx::fsBool,(int)offsetof(FlxTimer_obj,active),HX_HCSTRING("active","\xc6","\x41","\x46","\x16")},
	{hx::fsBool,(int)offsetof(FlxTimer_obj,finished),HX_HCSTRING("finished","\x72","\x93","\x0e","\x95")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxTimer_obj,onComplete),HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d")},
	{hx::fsFloat,(int)offsetof(FlxTimer_obj,_timeCounter),HX_HCSTRING("_timeCounter","\x70","\x04","\xb9","\xf5")},
	{hx::fsInt,(int)offsetof(FlxTimer_obj,_loopsCounter),HX_HCSTRING("_loopsCounter","\x0c","\x58","\xdd","\xc5")},
	{hx::fsBool,(int)offsetof(FlxTimer_obj,_inManager),HX_HCSTRING("_inManager","\xc9","\x50","\x66","\x55")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo FlxTimer_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::flixel::util::FlxTimerManager*/ ,(void *) &FlxTimer_obj::globalManager,HX_HCSTRING("globalManager","\x4a","\xcb","\xfa","\x39")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxTimer_obj_sMemberFields[] = {
	HX_HCSTRING("manager","\x6d","\x92","\xc1","\x13"),
	HX_HCSTRING("time","\x0d","\xcc","\xfc","\x4c"),
	HX_HCSTRING("loops","\x8f","\xf1","\xf9","\x78"),
	HX_HCSTRING("active","\xc6","\x41","\x46","\x16"),
	HX_HCSTRING("finished","\x72","\x93","\x0e","\x95"),
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	HX_HCSTRING("_timeCounter","\x70","\x04","\xb9","\xf5"),
	HX_HCSTRING("_loopsCounter","\x0c","\x58","\xdd","\xc5"),
	HX_HCSTRING("_inManager","\xc9","\x50","\x66","\x55"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("cancel","\x7a","\xed","\x33","\xb8"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("onLoopFinished","\xb5","\x59","\xca","\xdf"),
	HX_HCSTRING("get_timeLeft","\xbd","\x3e","\x2b","\x9d"),
	HX_HCSTRING("get_elapsedTime","\x00","\x16","\xaf","\x87"),
	HX_HCSTRING("get_loopsLeft","\x0d","\x6d","\x80","\xc5"),
	HX_HCSTRING("get_elapsedLoops","\x3c","\x5c","\x48","\x9a"),
	HX_HCSTRING("get_progress","\xb6","\xab","\x44","\x3b"),
	::String(null()) };

static void FlxTimer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTimer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxTimer_obj::globalManager,"globalManager");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxTimer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTimer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxTimer_obj::globalManager,"globalManager");
};

#endif

hx::Class FlxTimer_obj::__mClass;

static ::String FlxTimer_obj_sStaticFields[] = {
	HX_HCSTRING("globalManager","\x4a","\xcb","\xfa","\x39"),
	::String(null())
};

void FlxTimer_obj::__register()
{
	hx::Object *dummy = new FlxTimer_obj;
	FlxTimer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxTimer","\x6d","\x66","\xfe","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxTimer_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxTimer_obj::__SetStatic;
	__mClass->mMarkFunc = FlxTimer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FlxTimer_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxTimer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTimer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxTimer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTimer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTimer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util
