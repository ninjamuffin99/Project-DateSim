// Generated by Haxe 3.4.0
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#define INCLUDED_flixel_group_FlxTypedGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroupIterator)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace group{


class HXCPP_CLASS_ATTRIBUTES FlxTypedGroup_obj : public  ::flixel::FlxBasic_obj
{
	public:
		typedef  ::flixel::FlxBasic_obj super;
		typedef FlxTypedGroup_obj OBJ_;
		FlxTypedGroup_obj();

	public:
		enum { _hx_ClassId = 0x3634c52c };

		void __construct(hx::Null< int >  __o_MaxSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.group.FlxTypedGroup")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.group.FlxTypedGroup"); }
		static hx::ObjectPtr< FlxTypedGroup_obj > __new(hx::Null< int >  __o_MaxSize);
		static hx::ObjectPtr< FlxTypedGroup_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_MaxSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxTypedGroup_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("FlxTypedGroup","\x67","\xcd","\x0c","\x9b"); }

		static bool overlaps( ::Dynamic Callback, ::flixel::group::FlxTypedGroup Group,Float X,Float Y,bool InScreenSpace, ::flixel::FlxCamera Camera);
		static ::Dynamic overlaps_dyn();

		static  ::flixel::group::FlxTypedGroup resolveGroup( ::flixel::FlxBasic ObjectOrGroup);
		static ::Dynamic resolveGroup_dyn();

		::cpp::VirtualArray members;
		int maxSize;
		int length;
		int _marker;
		virtual void destroy();

		virtual void update(Float elapsed);

		virtual void draw();

		 ::Dynamic add( ::Dynamic Object);
		::Dynamic add_dyn();

		 ::Dynamic insert(int position, ::Dynamic object);
		::Dynamic insert_dyn();

		 ::Dynamic recycle(hx::Class ObjectClass, ::Dynamic ObjectFactory,hx::Null< bool >  Force,hx::Null< bool >  Revive);
		::Dynamic recycle_dyn();

		 ::Dynamic recycleCreateObject(hx::Class ObjectClass, ::Dynamic ObjectFactory);
		::Dynamic recycleCreateObject_dyn();

		 ::Dynamic remove( ::Dynamic Object,hx::Null< bool >  Splice);
		::Dynamic remove_dyn();

		 ::Dynamic replace( ::Dynamic OldObject, ::Dynamic NewObject);
		::Dynamic replace_dyn();

		void sort( ::Dynamic Function,hx::Null< int >  Order);
		::Dynamic sort_dyn();

		 ::Dynamic getFirstAvailable(hx::Class ObjectClass,hx::Null< bool >  Force);
		::Dynamic getFirstAvailable_dyn();

		int getFirstNull();
		::Dynamic getFirstNull_dyn();

		 ::Dynamic getFirstExisting();
		::Dynamic getFirstExisting_dyn();

		 ::Dynamic getFirstAlive();
		::Dynamic getFirstAlive_dyn();

		 ::Dynamic getFirstDead();
		::Dynamic getFirstDead_dyn();

		int countLiving();
		::Dynamic countLiving_dyn();

		int countDead();
		::Dynamic countDead_dyn();

		 ::Dynamic getRandom(hx::Null< int >  StartIndex,hx::Null< int >  Length);
		::Dynamic getRandom_dyn();

		void clear();
		::Dynamic clear_dyn();

		virtual void kill();

		void revive();

		 ::flixel::group::FlxTypedGroupIterator iterator( ::Dynamic filter);
		::Dynamic iterator_dyn();

		void forEach( ::Dynamic Function,hx::Null< bool >  Recurse);
		::Dynamic forEach_dyn();

		void forEachAlive( ::Dynamic Function,hx::Null< bool >  Recurse);
		::Dynamic forEachAlive_dyn();

		void forEachDead( ::Dynamic Function,hx::Null< bool >  Recurse);
		::Dynamic forEachDead_dyn();

		void forEachExists( ::Dynamic Function,hx::Null< bool >  Recurse);
		::Dynamic forEachExists_dyn();

		void forEachOfType(hx::Class ObjectClass, ::Dynamic Function,hx::Null< bool >  Recurse);
		::Dynamic forEachOfType_dyn();

		int set_maxSize(int Size);
		::Dynamic set_maxSize_dyn();

};

} // end namespace flixel
} // end namespace group

#endif /* INCLUDED_flixel_group_FlxTypedGroup */ 
