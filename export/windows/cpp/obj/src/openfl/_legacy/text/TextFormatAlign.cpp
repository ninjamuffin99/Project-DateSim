// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_text_TextFormatAlign
#include <openfl/_legacy/text/TextFormatAlign.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f50dcbea699d134f_6_boot,"openfl._legacy.text.TextFormatAlign","boot",0x2978647c,"openfl._legacy.text.TextFormatAlign.boot","openfl/_legacy/text/TextFormatAlign.hx",6,0x501e4059)
HX_LOCAL_STACK_FRAME(_hx_pos_f50dcbea699d134f_7_boot,"openfl._legacy.text.TextFormatAlign","boot",0x2978647c,"openfl._legacy.text.TextFormatAlign.boot","openfl/_legacy/text/TextFormatAlign.hx",7,0x501e4059)
HX_LOCAL_STACK_FRAME(_hx_pos_f50dcbea699d134f_8_boot,"openfl._legacy.text.TextFormatAlign","boot",0x2978647c,"openfl._legacy.text.TextFormatAlign.boot","openfl/_legacy/text/TextFormatAlign.hx",8,0x501e4059)
HX_LOCAL_STACK_FRAME(_hx_pos_f50dcbea699d134f_9_boot,"openfl._legacy.text.TextFormatAlign","boot",0x2978647c,"openfl._legacy.text.TextFormatAlign.boot","openfl/_legacy/text/TextFormatAlign.hx",9,0x501e4059)
HX_LOCAL_STACK_FRAME(_hx_pos_f50dcbea699d134f_12_boot,"openfl._legacy.text.TextFormatAlign","boot",0x2978647c,"openfl._legacy.text.TextFormatAlign.boot","openfl/_legacy/text/TextFormatAlign.hx",12,0x501e4059)
HX_LOCAL_STACK_FRAME(_hx_pos_f50dcbea699d134f_13_boot,"openfl._legacy.text.TextFormatAlign","boot",0x2978647c,"openfl._legacy.text.TextFormatAlign.boot","openfl/_legacy/text/TextFormatAlign.hx",13,0x501e4059)
namespace openfl{
namespace _legacy{
namespace text{

void TextFormatAlign_obj::__construct() { }

Dynamic TextFormatAlign_obj::__CreateEmpty() { return new TextFormatAlign_obj; }

void *TextFormatAlign_obj::_hx_vtable = 0;

Dynamic TextFormatAlign_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TextFormatAlign_obj > _hx_result = new TextFormatAlign_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TextFormatAlign_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6a130adc;
}

::String TextFormatAlign_obj::LEFT;

::String TextFormatAlign_obj::RIGHT;

::String TextFormatAlign_obj::CENTER;

::String TextFormatAlign_obj::JUSTIFY;

::String TextFormatAlign_obj::START;

::String TextFormatAlign_obj::END;


TextFormatAlign_obj::TextFormatAlign_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *TextFormatAlign_obj_sMemberStorageInfo = 0;
static hx::StaticInfo TextFormatAlign_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &TextFormatAlign_obj::LEFT,HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")},
	{hx::fsString,(void *) &TextFormatAlign_obj::RIGHT,HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")},
	{hx::fsString,(void *) &TextFormatAlign_obj::CENTER,HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8")},
	{hx::fsString,(void *) &TextFormatAlign_obj::JUSTIFY,HX_HCSTRING("JUSTIFY","\x30","\xb3","\x89","\x03")},
	{hx::fsString,(void *) &TextFormatAlign_obj::START,HX_HCSTRING("START","\x42","\xac","\xf9","\x01")},
	{hx::fsString,(void *) &TextFormatAlign_obj::END,HX_HCSTRING("END","\xbb","\x9f","\x34","\x00")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void TextFormatAlign_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextFormatAlign_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TextFormatAlign_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(TextFormatAlign_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(TextFormatAlign_obj::CENTER,"CENTER");
	HX_MARK_MEMBER_NAME(TextFormatAlign_obj::JUSTIFY,"JUSTIFY");
	HX_MARK_MEMBER_NAME(TextFormatAlign_obj::START,"START");
	HX_MARK_MEMBER_NAME(TextFormatAlign_obj::END,"END");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TextFormatAlign_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextFormatAlign_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TextFormatAlign_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(TextFormatAlign_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(TextFormatAlign_obj::CENTER,"CENTER");
	HX_VISIT_MEMBER_NAME(TextFormatAlign_obj::JUSTIFY,"JUSTIFY");
	HX_VISIT_MEMBER_NAME(TextFormatAlign_obj::START,"START");
	HX_VISIT_MEMBER_NAME(TextFormatAlign_obj::END,"END");
};

#endif

hx::Class TextFormatAlign_obj::__mClass;

static ::String TextFormatAlign_obj_sStaticFields[] = {
	HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),
	HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),
	HX_HCSTRING("CENTER","\xd5","\xd1","\x5d","\xb8"),
	HX_HCSTRING("JUSTIFY","\x30","\xb3","\x89","\x03"),
	HX_HCSTRING("START","\x42","\xac","\xf9","\x01"),
	HX_HCSTRING("END","\xbb","\x9f","\x34","\x00"),
	::String(null())
};

void TextFormatAlign_obj::__register()
{
	hx::Object *dummy = new TextFormatAlign_obj;
	TextFormatAlign_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.text.TextFormatAlign","\x64","\x64","\x77","\x30");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TextFormatAlign_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(TextFormatAlign_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< TextFormatAlign_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TextFormatAlign_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TextFormatAlign_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TextFormatAlign_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TextFormatAlign_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_f50dcbea699d134f_6_boot)
HXLINE(   6)		LEFT = HX_("left",07,08,b0,47);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f50dcbea699d134f_7_boot)
HXLINE(   7)		RIGHT = HX_("right",dc,0b,64,e9);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f50dcbea699d134f_8_boot)
HXLINE(   8)		CENTER = HX_("center",d5,25,db,05);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f50dcbea699d134f_9_boot)
HXLINE(   9)		JUSTIFY = HX_("justify",50,df,b5,83);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f50dcbea699d134f_12_boot)
HXLINE(  12)		START = HX_("left",07,08,b0,47);
            	}
{
            	HX_STACKFRAME(&_hx_pos_f50dcbea699d134f_13_boot)
HXLINE(  13)		END = HX_("right",dc,0b,64,e9);
            	}
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace text
