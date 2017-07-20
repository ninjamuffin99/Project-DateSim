// Generated by Haxe 3.4.0
#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_HTTPStatusEvent
#include <openfl/_legacy/events/HTTPStatusEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_URLLoader
#include <openfl/_legacy/net/URLLoader.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_URLRequest
#include <openfl/_legacy/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl__legacy_net__URLLoader_URLLoadersManager
#include <openfl/_legacy/net/_URLLoader/URLLoadersManager.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_ProgressEvent
#include <openfl/events/ProgressEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequestHeader
#include <openfl/net/URLRequestHeader.h>
#endif
#ifndef INCLUDED_openfl_net_URLVariables
#include <openfl/net/URLVariables.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_14f5ddd2e4dd829a_192_new,"openfl._legacy.net.URLLoader","new",0xb77dde7f,"openfl._legacy.net.URLLoader.new","openfl/_legacy/net/URLLoader.hx",192,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_14f5ddd2e4dd829a_211_close,"openfl._legacy.net.URLLoader","close",0xa8c42b97,"openfl._legacy.net.URLLoader.close","openfl/_legacy/net/URLLoader.hx",211,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_14f5ddd2e4dd829a_218_dispatchHTTPStatus,"openfl._legacy.net.URLLoader","dispatchHTTPStatus",0xa730fcd5,"openfl._legacy.net.URLLoader.dispatchHTTPStatus","openfl/_legacy/net/URLLoader.hx",218,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_14f5ddd2e4dd829a_240_getCookies,"openfl._legacy.net.URLLoader","getCookies",0x87bf411a,"openfl._legacy.net.URLLoader.getCookies","openfl/_legacy/net/URLLoader.hx",240,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_14f5ddd2e4dd829a_260_load,"openfl._legacy.net.URLLoader","load",0xd559e727,"openfl._legacy.net.URLLoader.load","openfl/_legacy/net/URLLoader.hx",260,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_14f5ddd2e4dd829a_265_loadInCURLThread,"openfl._legacy.net.URLLoader","loadInCURLThread",0x330ed8c2,"openfl._legacy.net.URLLoader.loadInCURLThread","openfl/_legacy/net/URLLoader.hx",265,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_14f5ddd2e4dd829a_320_onError,"openfl._legacy.net.URLLoader","onError",0x131c73c8,"openfl._legacy.net.URLLoader.onError","openfl/_legacy/net/URLLoader.hx",320,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_14f5ddd2e4dd829a_330_update,"openfl._legacy.net.URLLoader","update",0x7b95d54a,"openfl._legacy.net.URLLoader.update","openfl/_legacy/net/URLLoader.hx",330,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_14f5ddd2e4dd829a_379___dataComplete,"openfl._legacy.net.URLLoader","__dataComplete",0x1fc1c864,"openfl._legacy.net.URLLoader.__dataComplete","openfl/_legacy/net/URLLoader.hx",379,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_14f5ddd2e4dd829a_246_hasActive,"openfl._legacy.net.URLLoader","hasActive",0xff70e41f,"openfl._legacy.net.URLLoader.hasActive","openfl/_legacy/net/URLLoader.hx",246,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_14f5ddd2e4dd829a_253_initialize,"openfl._legacy.net.URLLoader","initialize",0x7e2ab511,"openfl._legacy.net.URLLoader.initialize","openfl/_legacy/net/URLLoader.hx",253,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_14f5ddd2e4dd829a_406___loadPending,"openfl._legacy.net.URLLoader","__loadPending",0x19792290,"openfl._legacy.net.URLLoader.__loadPending","openfl/_legacy/net/URLLoader.hx",406,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_14f5ddd2e4dd829a_411_enqueueEvent,"openfl._legacy.net.URLLoader","enqueueEvent",0x05a8e873,"openfl._legacy.net.URLLoader.enqueueEvent","openfl/_legacy/net/URLLoader.hx",411,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_14f5ddd2e4dd829a_414___pollData,"openfl._legacy.net.URLLoader","__pollData",0xcd9682ea,"openfl._legacy.net.URLLoader.__pollData","openfl/_legacy/net/URLLoader.hx",414,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_14f5ddd2e4dd829a_174_boot,"openfl._legacy.net.URLLoader","boot",0xcebdd133,"openfl._legacy.net.URLLoader.boot","openfl/_legacy/net/URLLoader.hx",174,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_14f5ddd2e4dd829a_175_boot,"openfl._legacy.net.URLLoader","boot",0xcebdd133,"openfl._legacy.net.URLLoader.boot","openfl/_legacy/net/URLLoader.hx",175,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_14f5ddd2e4dd829a_178_boot,"openfl._legacy.net.URLLoader","boot",0xcebdd133,"openfl._legacy.net.URLLoader.boot","openfl/_legacy/net/URLLoader.hx",178,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_14f5ddd2e4dd829a_180_boot,"openfl._legacy.net.URLLoader","boot",0xcebdd133,"openfl._legacy.net.URLLoader.boot","openfl/_legacy/net/URLLoader.hx",180,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_14f5ddd2e4dd829a_181_boot,"openfl._legacy.net.URLLoader","boot",0xcebdd133,"openfl._legacy.net.URLLoader.boot","openfl/_legacy/net/URLLoader.hx",181,0xef414054)
HX_LOCAL_STACK_FRAME(_hx_pos_14f5ddd2e4dd829a_186_boot,"openfl._legacy.net.URLLoader","boot",0xcebdd133,"openfl._legacy.net.URLLoader.boot","openfl/_legacy/net/URLLoader.hx",186,0xef414054)
namespace openfl{
namespace _legacy{
namespace net{

void URLLoader_obj::__construct( ::openfl::_legacy::net::URLRequest request){
            	HX_STACKFRAME(&_hx_pos_14f5ddd2e4dd829a_192_new)
HXLINE( 194)		super::__construct(null());
HXLINE( 196)		this->_hx___handle = (int)0;
HXLINE( 197)		this->bytesLoaded = (int)0;
HXLINE( 198)		this->bytesTotal = (int)-1;
HXLINE( 199)		this->state = (int)0;
HXLINE( 200)		this->dataFormat = (int)1;
HXLINE( 202)		if (hx::IsNotNull( request )) {
HXLINE( 204)			this->load(request);
            		}
            	}

Dynamic URLLoader_obj::__CreateEmpty() { return new URLLoader_obj; }

void *URLLoader_obj::_hx_vtable = 0;

Dynamic URLLoader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< URLLoader_obj > _hx_result = new URLLoader_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool URLLoader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25b00754) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x25b00754;
	} else {
		return inClassId==(int)0x7e9d2345;
	}
}

void URLLoader_obj::close(){
            	HX_STACKFRAME(&_hx_pos_14f5ddd2e4dd829a_211_close)
            	}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,close,(void))

void URLLoader_obj::dispatchHTTPStatus(int code){
            	HX_GC_STACKFRAME(&_hx_pos_14f5ddd2e4dd829a_218_dispatchHTTPStatus)
HXLINE( 220)		 ::openfl::_legacy::events::HTTPStatusEvent event =  ::openfl::_legacy::events::HTTPStatusEvent_obj::__alloc( HX_CTX ,::openfl::_legacy::events::HTTPStatusEvent_obj::HTTP_STATUS,false,false,code);
HXLINE( 221)		::Array< ::String > headers = ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance()->getHeaders(this->_hx___handle);
HXLINE( 223)		{
HXLINE( 223)			int _g = (int)0;
HXDLIN( 223)			while((_g < headers->length)){
HXLINE( 223)				::String header = headers->__get(_g);
HXDLIN( 223)				_g = (_g + (int)1);
HXLINE( 225)				int index = header.indexOf(HX_(": ",a6,32,00,00),null());
HXLINE( 226)				if ((index > (int)0)) {
HXLINE( 228)					::Array< ::Dynamic> event1 = event->responseHeaders;
HXDLIN( 228)					::String _hx_tmp = header.substr((int)0,index);
HXDLIN( 228)					event1->push( ::openfl::net::URLRequestHeader_obj::__alloc( HX_CTX ,_hx_tmp,header.substr((index + (int)2),((header.length - index) - (int)4))));
            				}
            			}
            		}
HXLINE( 234)		::openfl::_legacy::net::URLLoader_obj::enqueueEvent(hx::ObjectPtr<OBJ_>(this),event);
            	}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,dispatchHTTPStatus,(void))

::Array< ::String > URLLoader_obj::getCookies(){
            	HX_STACKFRAME(&_hx_pos_14f5ddd2e4dd829a_240_getCookies)
HXLINE( 240)		return ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance()->getCookies(this->_hx___handle);
            	}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,getCookies,return )

void URLLoader_obj::load( ::openfl::_legacy::net::URLRequest request){
            	HX_STACKFRAME(&_hx_pos_14f5ddd2e4dd829a_260_load)
HXLINE( 260)		::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance()->enqueueLoad(hx::ObjectPtr<OBJ_>(this),request);
            	}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,load,(void))

void URLLoader_obj::loadInCURLThread( ::openfl::_legacy::net::URLRequest request){
            	HX_GC_STACKFRAME(&_hx_pos_14f5ddd2e4dd829a_265_loadInCURLThread)
HXLINE( 267)		this->state = (int)1;
HXLINE( 269)		::String pref = request->url.substr((int)0,(int)7);
HXLINE( 270)		bool _hx_tmp;
HXDLIN( 270)		if ((pref != HX_("http://",52,75,cd,5a))) {
HXLINE( 270)			_hx_tmp = (pref != HX_("https:/",60,bf,f8,5a));
            		}
            		else {
HXLINE( 270)			_hx_tmp = false;
            		}
HXDLIN( 270)		if (_hx_tmp) {
HXLINE( 272)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 274)				 ::openfl::_legacy::utils::ByteArray bytes = ::openfl::_legacy::utils::ByteArray_obj::readFile(request->url);
HXLINE( 276)				if (hx::IsNull( bytes )) {
HXLINE( 278)					HX_STACK_DO_THROW(((HX_("Could not open file \"",48,89,1a,4a) + request->url) + HX_("\"",22,00,00,00)));
            				}
HXLINE( 282)				{
HXLINE( 282)					 ::Dynamic _g = this->dataFormat;
HXDLIN( 282)					 ::Dynamic _hx_switch_0 = _g;
            					if (  (_hx_switch_0==(int)1) ){
HXLINE( 284)						this->data = bytes->asString();
HXDLIN( 284)						goto _hx_goto_6;
            					}
            					if (  (_hx_switch_0==(int)2) ){
HXLINE( 285)						this->data =  ::openfl::net::URLVariables_obj::__alloc( HX_CTX ,bytes->asString());
HXDLIN( 285)						goto _hx_goto_6;
            					}
            					/* default */{
HXLINE( 286)						this->data = bytes;
            					}
            					_hx_goto_6:;
            				}
            			}
            			catch( ::Dynamic _hx_e){
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic e = _hx_e;
HXLINE( 292)					this->onError(( (::String)(e) ));
HXLINE( 293)					return;
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXLINE( 297)			this->_hx___dataComplete();
            		}
            		else {
HXLINE( 301)			request->_hx___prepare();
HXLINE( 303)			this->_hx___handle = ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance()->create(request);
HXLINE( 305)			if (hx::IsNull( this->_hx___handle )) {
HXLINE( 307)				this->onError(HX_("Could not open URL",45,5d,35,ab));
            			}
            			else {
HXLINE( 311)				::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance()->getActiveLoaders()->push(hx::ObjectPtr<OBJ_>(this));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,loadInCURLThread,(void))

void URLLoader_obj::onError(::String msg){
            	HX_GC_STACKFRAME(&_hx_pos_14f5ddd2e4dd829a_320_onError)
HXLINE( 322)		::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance()->getActiveLoaders()->remove(hx::ObjectPtr<OBJ_>(this));
HXLINE( 323)		::openfl::_legacy::net::URLLoader_obj::enqueueEvent(hx::ObjectPtr<OBJ_>(this), ::openfl::events::IOErrorEvent_obj::__alloc( HX_CTX ,HX_("ioError",02,fe,41,76),true,false,msg,null()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,onError,(void))

void URLLoader_obj::update(){
            	HX_GC_STACKFRAME(&_hx_pos_14f5ddd2e4dd829a_330_update)
HXLINE( 330)		if (hx::IsNotNull( this->_hx___handle )) {
HXLINE( 332)			int old_loaded = this->bytesLoaded;
HXLINE( 333)			int old_total = this->bytesTotal;
HXLINE( 334)			::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance()->updateLoader(this->_hx___handle,hx::ObjectPtr<OBJ_>(this));
HXLINE( 336)			bool _hx_tmp;
HXDLIN( 336)			if ((old_total < (int)0)) {
HXLINE( 336)				_hx_tmp = (this->bytesTotal > (int)0);
            			}
            			else {
HXLINE( 336)				_hx_tmp = false;
            			}
HXDLIN( 336)			if (_hx_tmp) {
HXLINE( 337)				::openfl::_legacy::net::URLLoader_obj::enqueueEvent(hx::ObjectPtr<OBJ_>(this), ::openfl::_legacy::events::Event_obj::__alloc( HX_CTX ,::openfl::_legacy::events::Event_obj::OPEN,null(),null()));
            			}
HXLINE( 340)			bool _hx_tmp1;
HXDLIN( 340)			if ((this->bytesTotal > (int)0)) {
HXLINE( 340)				_hx_tmp1 = (this->bytesLoaded != old_loaded);
            			}
            			else {
HXLINE( 340)				_hx_tmp1 = false;
            			}
HXDLIN( 340)			if (_hx_tmp1) {
HXLINE( 341)				 ::openfl::events::ProgressEvent evt =  ::openfl::events::ProgressEvent_obj::__alloc( HX_CTX ,HX_("progress",ad,f7,2a,86),false,false,this->bytesLoaded,this->bytesTotal);
HXLINE( 342)				::openfl::_legacy::net::URLLoader_obj::enqueueEvent(hx::ObjectPtr<OBJ_>(this),evt);
            			}
HXLINE( 345)			int code = ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance()->getCode(this->_hx___handle);
HXLINE( 347)			if ((this->state == (int)3)) {
HXLINE( 349)				this->dispatchHTTPStatus(code);
HXLINE( 350)				 ::openfl::_legacy::utils::ByteArray bytes = ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance()->getData(this->_hx___handle);
HXLINE( 351)				{
HXLINE( 351)					 ::Dynamic _g = this->dataFormat;
HXDLIN( 351)					 ::Dynamic _hx_switch_0 = _g;
            					if (  (_hx_switch_0==(int)1) ||  (_hx_switch_0==(int)2) ){
HXLINE( 353)						 ::Dynamic _hx_tmp2;
HXDLIN( 353)						if (hx::IsNull( bytes )) {
HXLINE( 353)							_hx_tmp2 = HX_("",00,00,00,00);
            						}
            						else {
HXLINE( 353)							_hx_tmp2 = bytes->asString();
            						}
HXDLIN( 353)						this->data = _hx_tmp2;
HXDLIN( 353)						goto _hx_goto_9;
            					}
            					/* default */{
HXLINE( 355)						this->data = bytes;
            					}
            					_hx_goto_9:;
            				}
HXLINE( 358)				if ((code < (int)400)) {
HXLINE( 359)					this->_hx___dataComplete();
            				}
            				else {
HXLINE( 361)					 ::openfl::events::IOErrorEvent event =  ::openfl::events::IOErrorEvent_obj::__alloc( HX_CTX ,HX_("ioError",02,fe,41,76),true,false,this->data,code);
HXLINE( 362)					this->_hx___handle = null();
HXLINE( 363)					::openfl::_legacy::net::URLLoader_obj::enqueueEvent(hx::ObjectPtr<OBJ_>(this),event);
            				}
            			}
            			else {
HXLINE( 366)				if ((this->state == (int)4)) {
HXLINE( 367)					this->dispatchHTTPStatus(code);
HXLINE( 368)					::String errorMessage = ::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance()->getErrorMessage(this->_hx___handle);
HXLINE( 369)					 ::openfl::events::IOErrorEvent event1 =  ::openfl::events::IOErrorEvent_obj::__alloc( HX_CTX ,HX_("ioError",02,fe,41,76),true,false,errorMessage,code);
HXLINE( 370)					this->_hx___handle = null();
HXLINE( 371)					::openfl::_legacy::net::URLLoader_obj::enqueueEvent(hx::ObjectPtr<OBJ_>(this),event1);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,update,(void))

void URLLoader_obj::_hx___dataComplete(){
            	HX_GC_STACKFRAME(&_hx_pos_14f5ddd2e4dd829a_379___dataComplete)
HXLINE( 381)		::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance()->getActiveLoaders()->remove(hx::ObjectPtr<OBJ_>(this));
HXLINE( 383)		if (hx::IsNotNull( this->_hx___onComplete )) {
HXLINE( 385)			if (( (bool)(this->_hx___onComplete(this->data)) )) {
HXLINE( 387)				::openfl::_legacy::net::URLLoader_obj::enqueueEvent(hx::ObjectPtr<OBJ_>(this), ::openfl::_legacy::events::Event_obj::__alloc( HX_CTX ,::openfl::_legacy::events::Event_obj::COMPLETE,null(),null()));
            			}
            			else {
HXLINE( 391)				this->_hx___dispatchIOErrorEvent();
            			}
            		}
            		else {
HXLINE( 397)			::openfl::_legacy::net::URLLoader_obj::enqueueEvent(hx::ObjectPtr<OBJ_>(this), ::openfl::_legacy::events::Event_obj::__alloc( HX_CTX ,::openfl::_legacy::events::Event_obj::COMPLETE,null(),null()));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,_hx___dataComplete,(void))

int URLLoader_obj::urlInvalid;

int URLLoader_obj::urlInit;

int URLLoader_obj::urlLoading;

int URLLoader_obj::urlComplete;

int URLLoader_obj::urlError;

::Array< ::Dynamic> URLLoader_obj::eventsQueue;

bool URLLoader_obj::hasActive(){
            	HX_STACKFRAME(&_hx_pos_14f5ddd2e4dd829a_246_hasActive)
HXLINE( 246)		return !(::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance()->activeLoadersIsEmpty());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,hasActive,return )

void URLLoader_obj::initialize(::String caCertFilePath){
            	HX_STACKFRAME(&_hx_pos_14f5ddd2e4dd829a_253_initialize)
HXLINE( 253)		::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance()->initialize(caCertFilePath);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(URLLoader_obj,initialize,(void))

bool URLLoader_obj::_hx___loadPending(){
            	HX_STACKFRAME(&_hx_pos_14f5ddd2e4dd829a_406___loadPending)
HXLINE( 406)		return !(::openfl::_legacy::net::_URLLoader::URLLoadersManager_obj::getInstance()->activeLoadersIsEmpty());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,_hx___loadPending,return )

void URLLoader_obj::enqueueEvent( ::openfl::_legacy::net::URLLoader loader, ::openfl::_legacy::events::Event event){
            	HX_STACKFRAME(&_hx_pos_14f5ddd2e4dd829a_411_enqueueEvent)
HXLINE( 411)		::openfl::_legacy::net::URLLoader_obj::eventsQueue->push( ::Dynamic(hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("loader",13,48,6f,58),loader)
            			->setFixed(1,HX_("event",1a,c8,c4,75),event)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(URLLoader_obj,enqueueEvent,(void))

void URLLoader_obj::_hx___pollData(){
            	HX_STACKFRAME(&_hx_pos_14f5ddd2e4dd829a_414___pollData)
HXLINE( 415)		if ((::openfl::_legacy::net::URLLoader_obj::eventsQueue->length == (int)0)) {
HXLINE( 415)			return;
            		}
HXLINE( 416)		 ::Dynamic evt = ::openfl::_legacy::net::URLLoader_obj::eventsQueue->shift();
HXLINE( 417)		if (hx::IsNotNull( evt )) {
HXLINE( 418)			( ( ::openfl::_legacy::events::EventDispatcher)(evt->__Field(HX_("loader",13,48,6f,58),hx::paccDynamic)) )->dispatchEvent(( ( ::openfl::_legacy::events::Event)(evt->__Field(HX_("event",1a,c8,c4,75),hx::paccDynamic)) ));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(URLLoader_obj,_hx___pollData,(void))


hx::ObjectPtr< URLLoader_obj > URLLoader_obj::__new( ::openfl::_legacy::net::URLRequest request) {
	hx::ObjectPtr< URLLoader_obj > __this = new URLLoader_obj();
	__this->__construct(request);
	return __this;
}

hx::ObjectPtr< URLLoader_obj > URLLoader_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::_legacy::net::URLRequest request) {
	URLLoader_obj *__this = (URLLoader_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(URLLoader_obj), true, "openfl._legacy.net.URLLoader"));
	*(void **)__this = URLLoader_obj::_hx_vtable;
	__this->__construct(request);
	return __this;
}

URLLoader_obj::URLLoader_obj()
{
}

void URLLoader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(URLLoader);
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(dataFormat,"dataFormat");
	HX_MARK_MEMBER_NAME(state,"state");
	HX_MARK_MEMBER_NAME(_hx___handle,"__handle");
	HX_MARK_MEMBER_NAME(_hx___onComplete,"__onComplete");
	 ::openfl::_legacy::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void URLLoader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(dataFormat,"dataFormat");
	HX_VISIT_MEMBER_NAME(state,"state");
	HX_VISIT_MEMBER_NAME(_hx___handle,"__handle");
	HX_VISIT_MEMBER_NAME(_hx___onComplete,"__onComplete");
	 ::openfl::_legacy::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

hx::Val URLLoader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return hx::Val( data); }
		if (HX_FIELD_EQ(inName,"load") ) { return hx::Val( load_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { return hx::Val( state); }
		if (HX_FIELD_EQ(inName,"close") ) { return hx::Val( close_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onError") ) { return hx::Val( onError_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { return hx::Val( _hx___handle); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return hx::Val( bytesTotal); }
		if (HX_FIELD_EQ(inName,"dataFormat") ) { return hx::Val( dataFormat); }
		if (HX_FIELD_EQ(inName,"getCookies") ) { return hx::Val( getCookies_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return hx::Val( bytesLoaded); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__onComplete") ) { return hx::Val( _hx___onComplete); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__dataComplete") ) { return hx::Val( _hx___dataComplete_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"loadInCURLThread") ) { return hx::Val( loadInCURLThread_dyn()); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"dispatchHTTPStatus") ) { return hx::Val( dispatchHTTPStatus_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool URLLoader_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"hasActive") ) { outValue = hasActive_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { outValue = initialize_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"__pollData") ) { outValue = _hx___pollData_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"eventsQueue") ) { outValue = eventsQueue; return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"enqueueEvent") ) { outValue = enqueueEvent_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__loadPending") ) { outValue = _hx___loadPending_dyn(); return true; }
	}
	return false;
}

hx::Val URLLoader_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { _hx___handle=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dataFormat") ) { dataFormat=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__onComplete") ) { _hx___onComplete=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool URLLoader_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"eventsQueue") ) { eventsQueue=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
	}
	return false;
}

void URLLoader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"));
	outFields->push(HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("dataFormat","\x01","\x55","\x30","\xe9"));
	outFields->push(HX_HCSTRING("state","\x11","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo URLLoader_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(URLLoader_obj,bytesLoaded),HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99")},
	{hx::fsInt,(int)offsetof(URLLoader_obj,bytesTotal),HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLLoader_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLLoader_obj,dataFormat),HX_HCSTRING("dataFormat","\x01","\x55","\x30","\xe9")},
	{hx::fsInt,(int)offsetof(URLLoader_obj,state),HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLLoader_obj,_hx___handle),HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(URLLoader_obj,_hx___onComplete),HX_HCSTRING("__onComplete","\x18","\x50","\x12","\x96")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo URLLoader_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &URLLoader_obj::urlInvalid,HX_HCSTRING("urlInvalid","\x48","\xb3","\x6a","\xfb")},
	{hx::fsInt,(void *) &URLLoader_obj::urlInit,HX_HCSTRING("urlInit","\x1f","\x76","\xd9","\xf5")},
	{hx::fsInt,(void *) &URLLoader_obj::urlLoading,HX_HCSTRING("urlLoading","\xcd","\xa6","\x15","\xc9")},
	{hx::fsInt,(void *) &URLLoader_obj::urlComplete,HX_HCSTRING("urlComplete","\x48","\x6f","\x22","\xde")},
	{hx::fsInt,(void *) &URLLoader_obj::urlError,HX_HCSTRING("urlError","\xd9","\x3d","\x7f","\xdd")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &URLLoader_obj::eventsQueue,HX_HCSTRING("eventsQueue","\xb8","\x53","\xdb","\x0a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String URLLoader_obj_sMemberFields[] = {
	HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"),
	HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("dataFormat","\x01","\x55","\x30","\xe9"),
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60"),
	HX_HCSTRING("__onComplete","\x18","\x50","\x12","\x96"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("dispatchHTTPStatus","\x14","\x50","\x06","\xfe"),
	HX_HCSTRING("getCookies","\x59","\xbd","\x4f","\xf6"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("loadInCURLThread","\x41","\x8e","\xec","\x8e"),
	HX_HCSTRING("onError","\x29","\x6a","\x67","\x09"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("__dataComplete","\x23","\xd0","\x7e","\x0c"),
	::String(null()) };

static void URLLoader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLLoader_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(URLLoader_obj::urlInvalid,"urlInvalid");
	HX_MARK_MEMBER_NAME(URLLoader_obj::urlInit,"urlInit");
	HX_MARK_MEMBER_NAME(URLLoader_obj::urlLoading,"urlLoading");
	HX_MARK_MEMBER_NAME(URLLoader_obj::urlComplete,"urlComplete");
	HX_MARK_MEMBER_NAME(URLLoader_obj::urlError,"urlError");
	HX_MARK_MEMBER_NAME(URLLoader_obj::eventsQueue,"eventsQueue");
};

#ifdef HXCPP_VISIT_ALLOCS
static void URLLoader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLLoader_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::urlInvalid,"urlInvalid");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::urlInit,"urlInit");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::urlLoading,"urlLoading");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::urlComplete,"urlComplete");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::urlError,"urlError");
	HX_VISIT_MEMBER_NAME(URLLoader_obj::eventsQueue,"eventsQueue");
};

#endif

hx::Class URLLoader_obj::__mClass;

static ::String URLLoader_obj_sStaticFields[] = {
	HX_HCSTRING("urlInvalid","\x48","\xb3","\x6a","\xfb"),
	HX_HCSTRING("urlInit","\x1f","\x76","\xd9","\xf5"),
	HX_HCSTRING("urlLoading","\xcd","\xa6","\x15","\xc9"),
	HX_HCSTRING("urlComplete","\x48","\x6f","\x22","\xde"),
	HX_HCSTRING("urlError","\xd9","\x3d","\x7f","\xdd"),
	HX_HCSTRING("eventsQueue","\xb8","\x53","\xdb","\x0a"),
	HX_HCSTRING("hasActive","\xc0","\xf4","\x2e","\x57"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("__loadPending","\xb1","\x97","\x02","\x45"),
	HX_HCSTRING("enqueueEvent","\x72","\x32","\x80","\x96"),
	HX_HCSTRING("__pollData","\x29","\xff","\x26","\x3c"),
	::String(null())
};

void URLLoader_obj::__register()
{
	hx::Object *dummy = new URLLoader_obj;
	URLLoader_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.net.URLLoader","\x0d","\x33","\x77","\x25");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &URLLoader_obj::__GetStatic;
	__mClass->mSetStaticField = &URLLoader_obj::__SetStatic;
	__mClass->mMarkFunc = URLLoader_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(URLLoader_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(URLLoader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< URLLoader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = URLLoader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = URLLoader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = URLLoader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void URLLoader_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_14f5ddd2e4dd829a_174_boot)
HXLINE( 174)		urlInvalid = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_14f5ddd2e4dd829a_175_boot)
HXLINE( 175)		urlInit = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_14f5ddd2e4dd829a_178_boot)
HXLINE( 178)		urlLoading = (int)2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_14f5ddd2e4dd829a_180_boot)
HXLINE( 180)		urlComplete = (int)3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_14f5ddd2e4dd829a_181_boot)
HXLINE( 181)		urlError = (int)4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_14f5ddd2e4dd829a_186_boot)
HXLINE( 186)		eventsQueue = ::Array_obj< ::Dynamic>::__new(0);
            	}
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace net
