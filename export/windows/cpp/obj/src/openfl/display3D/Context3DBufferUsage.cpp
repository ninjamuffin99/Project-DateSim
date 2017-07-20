// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D_Context3DBufferUsage
#include <openfl/display3D/Context3DBufferUsage.h>
#endif
namespace openfl{
namespace display3D{

::openfl::display3D::Context3DBufferUsage Context3DBufferUsage_obj::DYNAMIC_DRAW;

::openfl::display3D::Context3DBufferUsage Context3DBufferUsage_obj::STATIC_DRAW;

bool Context3DBufferUsage_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("DYNAMIC_DRAW",24,04,1f,24)) { outValue = Context3DBufferUsage_obj::DYNAMIC_DRAW; return true; }
	if (inName==HX_("STATIC_DRAW",75,50,2f,ba)) { outValue = Context3DBufferUsage_obj::STATIC_DRAW; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Context3DBufferUsage_obj)

int Context3DBufferUsage_obj::__FindIndex(::String inName)
{
	if (inName==HX_("DYNAMIC_DRAW",24,04,1f,24)) return 1;
	if (inName==HX_("STATIC_DRAW",75,50,2f,ba)) return 0;
	return super::__FindIndex(inName);
}

int Context3DBufferUsage_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("DYNAMIC_DRAW",24,04,1f,24)) return 0;
	if (inName==HX_("STATIC_DRAW",75,50,2f,ba)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val Context3DBufferUsage_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("DYNAMIC_DRAW",24,04,1f,24)) return DYNAMIC_DRAW;
	if (inName==HX_("STATIC_DRAW",75,50,2f,ba)) return STATIC_DRAW;
	return super::__Field(inName,inCallProp);
}

static ::String Context3DBufferUsage_obj_sStaticFields[] = {
	HX_("STATIC_DRAW",75,50,2f,ba),
	HX_("DYNAMIC_DRAW",24,04,1f,24),
	::String(null())
};

static void Context3DBufferUsage_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DBufferUsage_obj::DYNAMIC_DRAW,"DYNAMIC_DRAW");
	HX_MARK_MEMBER_NAME(Context3DBufferUsage_obj::STATIC_DRAW,"STATIC_DRAW");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Context3DBufferUsage_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DBufferUsage_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DBufferUsage_obj::DYNAMIC_DRAW,"DYNAMIC_DRAW");
	HX_VISIT_MEMBER_NAME(Context3DBufferUsage_obj::STATIC_DRAW,"STATIC_DRAW");
};
#endif

hx::Class Context3DBufferUsage_obj::__mClass;

Dynamic __Create_Context3DBufferUsage_obj() { return new Context3DBufferUsage_obj; }

void Context3DBufferUsage_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("openfl.display3D.Context3DBufferUsage","\x9a","\xab","\xb7","\x96"), hx::TCanCast< Context3DBufferUsage_obj >,Context3DBufferUsage_obj_sStaticFields,0,
	&__Create_Context3DBufferUsage_obj, &__Create,
	&super::__SGetClass(), &CreateContext3DBufferUsage_obj, Context3DBufferUsage_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , Context3DBufferUsage_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Context3DBufferUsage_obj::__GetStatic;
}

void Context3DBufferUsage_obj::__boot()
{
DYNAMIC_DRAW = hx::CreateEnum< Context3DBufferUsage_obj >(HX_HCSTRING("DYNAMIC_DRAW","\x24","\x04","\x1f","\x24"),1,0);
STATIC_DRAW = hx::CreateEnum< Context3DBufferUsage_obj >(HX_HCSTRING("STATIC_DRAW","\x75","\x50","\x2f","\xba"),0,0);
}


} // end namespace openfl
} // end namespace display3D
