// Generated by Haxe 3.4.0
#ifndef INCLUDED_PlayState
#define INCLUDED_PlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(Choices)
HX_DECLARE_CLASS0(Dialogue)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES PlayState_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef PlayState_obj OBJ_;
		PlayState_obj();

	public:
		enum { _hx_ClassId = 0x46c2835d };

		void __construct( ::Dynamic MaxSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="PlayState")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"PlayState"); }
		static hx::ObjectPtr< PlayState_obj > __new( ::Dynamic MaxSize);
		static hx::ObjectPtr< PlayState_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic MaxSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlayState_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("PlayState","\x5d","\x83","\xc2","\x46"); }

		 ::Dialogue _dialogue;
		 ::flixel::text::FlxText _nameTag;
		 ::flixel::FlxSprite _nameTextBox;
		 ::flixel::FlxSprite _electronImage;
		 ::flixel::FlxSprite _dummyImage;
		 ::Choices _choices;
		virtual void create();

		virtual void update(Float elapsed);

		void _dialogueStart(::Array< ::String > words,hx::Null< bool >  autostart,::String _name);
		::Dynamic _dialogueStart_dyn();

		void _tweening( ::flixel::FlxSprite _image,hx::Null< bool >  tweenIn);
		::Dynamic _tweening_dyn();

		void exit();
		::Dynamic exit_dyn();

};


#endif /* INCLUDED_PlayState */ 
