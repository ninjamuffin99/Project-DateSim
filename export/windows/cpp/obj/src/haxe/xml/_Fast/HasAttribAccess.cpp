// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#include <haxe/xml/_Fast/HasAttribAccess.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8dd6464b8ac86524_67_new,"haxe.xml._Fast.HasAttribAccess","new",0x4d025ce8,"haxe.xml._Fast.HasAttribAccess.new","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Fast.hx",67,0x60a2153a)
HX_LOCAL_STACK_FRAME(_hx_pos_8dd6464b8ac86524_70_resolve,"haxe.xml._Fast.HasAttribAccess","resolve",0x0ac38374,"haxe.xml._Fast.HasAttribAccess.resolve","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Fast.hx",70,0x60a2153a)
namespace haxe{
namespace xml{
namespace _Fast{

void HasAttribAccess_obj::__construct( ::Xml x){
            	HX_STACKFRAME(&_hx_pos_8dd6464b8ac86524_67_new)
HXLINE(  67)		this->_hx___x = x;
            	}

Dynamic HasAttribAccess_obj::__CreateEmpty() { return new HasAttribAccess_obj; }

void *HasAttribAccess_obj::_hx_vtable = 0;

Dynamic HasAttribAccess_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< HasAttribAccess_obj > _hx_result = new HasAttribAccess_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool HasAttribAccess_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2a4cf61e;
}

bool HasAttribAccess_obj::resolve(::String name){
            	HX_STACKFRAME(&_hx_pos_8dd6464b8ac86524_70_resolve)
HXLINE(  71)		if ((this->_hx___x->nodeType == ::Xml_obj::Document)) {
HXLINE(  72)			HX_STACK_DO_THROW((HX_("Cannot access document attribute ",ca,30,fe,c0) + name));
            		}
HXLINE(  73)		return this->_hx___x->exists(name);
            	}


HX_DEFINE_DYNAMIC_FUNC1(HasAttribAccess_obj,resolve,return )


hx::ObjectPtr< HasAttribAccess_obj > HasAttribAccess_obj::__new( ::Xml x) {
	hx::ObjectPtr< HasAttribAccess_obj > __this = new HasAttribAccess_obj();
	__this->__construct(x);
	return __this;
}

hx::ObjectPtr< HasAttribAccess_obj > HasAttribAccess_obj::__alloc(hx::Ctx *_hx_ctx, ::Xml x) {
	HasAttribAccess_obj *__this = (HasAttribAccess_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(HasAttribAccess_obj), true, "haxe.xml._Fast.HasAttribAccess"));
	*(void **)__this = HasAttribAccess_obj::_hx_vtable;
	__this->__construct(x);
	return __this;
}

HasAttribAccess_obj::HasAttribAccess_obj()
{
}

void HasAttribAccess_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HasAttribAccess);
	HX_MARK_DYNAMIC;
	HX_MARK_MEMBER_NAME(_hx___x,"__x");
	HX_MARK_END_CLASS();
}

void HasAttribAccess_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_DYNAMIC;
	HX_VISIT_MEMBER_NAME(_hx___x,"__x");
}

hx::Val HasAttribAccess_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__x") ) { return hx::Val( _hx___x); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return hx::Val( resolve_dyn()); }
	}
	HX_CHECK_DYNAMIC_GET_FIELD(inName);
	return super::__Field(inName,inCallProp);
}

hx::Val HasAttribAccess_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__x") ) { _hx___x=inValue.Cast<  ::Xml >(); return inValue; }
	}
	try { return super::__SetField(inName,inValue,inCallProp); }
	catch(Dynamic e) { HX_DYNAMIC_SET_FIELD(inName,inValue); }
	return inValue;
}

void HasAttribAccess_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__x","\x58","\x69","\x48","\x00"));
	HX_APPEND_DYNAMIC_FIELDS(outFields);
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo HasAttribAccess_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::Xml*/ ,(int)offsetof(HasAttribAccess_obj,_hx___x),HX_HCSTRING("__x","\x58","\x69","\x48","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *HasAttribAccess_obj_sStaticStorageInfo = 0;
#endif

static ::String HasAttribAccess_obj_sMemberFields[] = {
	HX_HCSTRING("__x","\x58","\x69","\x48","\x00"),
	HX_HCSTRING("resolve","\xec","\x12","\x60","\x67"),
	::String(null()) };

static void HasAttribAccess_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HasAttribAccess_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HasAttribAccess_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HasAttribAccess_obj::__mClass,"__mClass");
};

#endif

hx::Class HasAttribAccess_obj::__mClass;

void HasAttribAccess_obj::__register()
{
	hx::Object *dummy = new HasAttribAccess_obj;
	HasAttribAccess_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.xml._Fast.HasAttribAccess","\xf6","\x08","\x10","\x8d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = HasAttribAccess_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(HasAttribAccess_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< HasAttribAccess_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HasAttribAccess_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HasAttribAccess_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HasAttribAccess_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace xml
} // end namespace _Fast
