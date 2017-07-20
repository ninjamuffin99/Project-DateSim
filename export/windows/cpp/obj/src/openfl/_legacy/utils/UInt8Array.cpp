// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ArrayBufferView
#include <openfl/_legacy/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_UInt8Array
#include <openfl/_legacy/utils/UInt8Array.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f47f36cb841378fc_19_new,"openfl._legacy.utils.UInt8Array","new",0x9b7bef4e,"openfl._legacy.utils.UInt8Array.new","openfl/_legacy/utils/UInt8Array.hx",19,0x0968c77f)
HX_LOCAL_STACK_FRAME(_hx_pos_f47f36cb841378fc_102___get,"openfl._legacy.utils.UInt8Array","__get",0xbecb17e4,"openfl._legacy.utils.UInt8Array.__get","openfl/_legacy/utils/UInt8Array.hx",102,0x0968c77f)
HX_LOCAL_STACK_FRAME(_hx_pos_f47f36cb841378fc_103___set,"openfl._legacy.utils.UInt8Array","__set",0xbed432f0,"openfl._legacy.utils.UInt8Array.__set","openfl/_legacy/utils/UInt8Array.hx",103,0x0968c77f)
HX_LOCAL_STACK_FRAME(_hx_pos_f47f36cb841378fc_13_boot,"openfl._legacy.utils.UInt8Array","boot",0x690e7584,"openfl._legacy.utils.UInt8Array.boot","openfl/_legacy/utils/UInt8Array.hx",13,0x0968c77f)
namespace openfl{
namespace _legacy{
namespace utils{

void UInt8Array_obj::__construct( ::Dynamic bufferOrArray,hx::Null< int >  __o_start, ::Dynamic elements){
int start = __o_start.Default(0);
            	HX_STACKFRAME(&_hx_pos_f47f36cb841378fc_19_new)
HXLINE(  21)		this->BYTES_PER_ELEMENT = (int)1;
HXLINE(  23)		if (::Std_obj::is(bufferOrArray,hx::ClassOf< int >())) {
HXLINE(  25)			super::__construct(::Std_obj::_hx_int(( (Float)(bufferOrArray) )),null(),null());
HXLINE(  26)			this->length = ::Std_obj::_hx_int(( (Float)(bufferOrArray) ));
            		}
            		else {
HXLINE(  28)			if (::Std_obj::is(bufferOrArray,hx::ArrayBase::__mClass)) {
HXLINE(  30)				::Array< int > ints = ( (::Array< int >)(bufferOrArray) );
HXLINE(  32)				if (hx::IsNotNull( elements )) {
HXLINE(  34)					this->length = elements;
            				}
            				else {
HXLINE(  38)					this->length = (ints->length - start);
            				}
HXLINE(  42)				super::__construct(this->length,null(),null());
HXLINE(  48)				{
HXLINE(  48)					int _g1 = (int)0;
HXDLIN(  48)					int _g = this->length;
HXDLIN(  48)					while((_g1 < _g)){
HXLINE(  48)						_g1 = (_g1 + (int)1);
HXDLIN(  48)						int i = (_g1 - (int)1);
HXLINE(  51)						::Array< unsigned char > _hx_tmp = this->bytes;
HXDLIN(  51)						::__hxcpp_memory_set_byte(_hx_tmp,i,ints->__get((i + start)));
            					}
            				}
            			}
            			else {
HXLINE(  94)				super::__construct(bufferOrArray,start,elements);
HXLINE(  95)				this->length = this->byteLength;
            			}
            		}
            	}

Dynamic UInt8Array_obj::__CreateEmpty() { return new UInt8Array_obj; }

void *UInt8Array_obj::_hx_vtable = 0;

Dynamic UInt8Array_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< UInt8Array_obj > _hx_result = new UInt8Array_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool UInt8Array_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x176ef474) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x176ef474;
	} else {
		return inClassId==(int)0x600248a5;
	}
}

int UInt8Array_obj::__get(int index){
            	HX_STACKFRAME(&_hx_pos_f47f36cb841378fc_102___get)
HXLINE( 102)		::Array< unsigned char > _hx_tmp = this->bytes;
HXDLIN( 102)		return ::__hxcpp_memory_get_byte(_hx_tmp,(index + this->byteOffset));
            	}


HX_DEFINE_DYNAMIC_FUNC1(UInt8Array_obj,__get,return )

void UInt8Array_obj::__set(int index,int value){
            	HX_STACKFRAME(&_hx_pos_f47f36cb841378fc_103___set)
HXLINE( 103)		::Array< unsigned char > _hx_tmp = this->bytes;
HXDLIN( 103)		::__hxcpp_memory_set_byte(_hx_tmp,(index + this->byteOffset),value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(UInt8Array_obj,__set,(void))

int UInt8Array_obj::SBYTES_PER_ELEMENT;


hx::ObjectPtr< UInt8Array_obj > UInt8Array_obj::__new( ::Dynamic bufferOrArray,hx::Null< int >  __o_start, ::Dynamic elements) {
	hx::ObjectPtr< UInt8Array_obj > __this = new UInt8Array_obj();
	__this->__construct(bufferOrArray,__o_start,elements);
	return __this;
}

hx::ObjectPtr< UInt8Array_obj > UInt8Array_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic bufferOrArray,hx::Null< int >  __o_start, ::Dynamic elements) {
	UInt8Array_obj *__this = (UInt8Array_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(UInt8Array_obj), true, "openfl._legacy.utils.UInt8Array"));
	*(void **)__this = UInt8Array_obj::_hx_vtable;
	__this->__construct(bufferOrArray,__o_start,elements);
	return __this;
}

UInt8Array_obj::UInt8Array_obj()
{
}

hx::Val UInt8Array_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"__get") ) { return hx::Val( __get_dyn()); }
		if (HX_FIELD_EQ(inName,"__set") ) { return hx::Val( __set_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return hx::Val( length); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BYTES_PER_ELEMENT") ) { return hx::Val( BYTES_PER_ELEMENT); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val UInt8Array_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"BYTES_PER_ELEMENT") ) { BYTES_PER_ELEMENT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UInt8Array_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("BYTES_PER_ELEMENT","\xa6","\x04","\x1d","\xcc"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo UInt8Array_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(UInt8Array_obj,BYTES_PER_ELEMENT),HX_HCSTRING("BYTES_PER_ELEMENT","\xa6","\x04","\x1d","\xcc")},
	{hx::fsInt,(int)offsetof(UInt8Array_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo UInt8Array_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &UInt8Array_obj::SBYTES_PER_ELEMENT,HX_HCSTRING("SBYTES_PER_ELEMENT","\xf3","\x76","\x83","\xc2")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String UInt8Array_obj_sMemberFields[] = {
	HX_HCSTRING("BYTES_PER_ELEMENT","\xa6","\x04","\x1d","\xcc"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("__get","\x76","\xe1","\x2a","\xf2"),
	HX_HCSTRING("__set","\x82","\xfc","\x33","\xf2"),
	::String(null()) };

static void UInt8Array_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UInt8Array_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(UInt8Array_obj::SBYTES_PER_ELEMENT,"SBYTES_PER_ELEMENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void UInt8Array_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UInt8Array_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UInt8Array_obj::SBYTES_PER_ELEMENT,"SBYTES_PER_ELEMENT");
};

#endif

hx::Class UInt8Array_obj::__mClass;

static ::String UInt8Array_obj_sStaticFields[] = {
	HX_HCSTRING("SBYTES_PER_ELEMENT","\xf3","\x76","\x83","\xc2"),
	::String(null())
};

void UInt8Array_obj::__register()
{
	hx::Object *dummy = new UInt8Array_obj;
	UInt8Array_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.utils.UInt8Array","\x5c","\xf0","\xaa","\x3b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = UInt8Array_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(UInt8Array_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(UInt8Array_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< UInt8Array_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = UInt8Array_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = UInt8Array_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = UInt8Array_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void UInt8Array_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f47f36cb841378fc_13_boot)
HXLINE(  13)		SBYTES_PER_ELEMENT = (int)1;
            	}
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace utils
