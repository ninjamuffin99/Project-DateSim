// Generated by Haxe 3.4.0
#ifndef INCLUDED_openfl_display3D_Context3DClearMask
#define INCLUDED_openfl_display3D_Context3DClearMask

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display3D,Context3DClearMask)

namespace openfl{
namespace display3D{


class HXCPP_CLASS_ATTRIBUTES Context3DClearMask_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Context3DClearMask_obj OBJ_;
		Context3DClearMask_obj();

	public:
		enum { _hx_ClassId = 0x59383738 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display3D.Context3DClearMask")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl.display3D.Context3DClearMask"); }

		hx::ObjectPtr< Context3DClearMask_obj > __new() {
			hx::ObjectPtr< Context3DClearMask_obj > __this = new Context3DClearMask_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Context3DClearMask_obj > __alloc(hx::Ctx *_hx_ctx) {
			Context3DClearMask_obj *__this = (Context3DClearMask_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Context3DClearMask_obj), false, "openfl.display3D.Context3DClearMask"));
			*(void **)__this = Context3DClearMask_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Context3DClearMask_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Context3DClearMask","\xb9","\x44","\xf1","\x19"); }

		static void __boot();
		static int ALL;
		static int COLOR;
		static int DEPTH;
		static int STENCIL;
};

} // end namespace openfl
} // end namespace display3D

#endif /* INCLUDED_openfl_display3D_Context3DClearMask */ 
