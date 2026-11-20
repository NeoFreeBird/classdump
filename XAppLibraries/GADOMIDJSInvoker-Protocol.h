//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADOMIDJSInvoker_Protocol_h
#define GADOMIDJSInvoker_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSObject;
@protocol OS_dispatch_queue;

@protocol GADOMIDJSInvoker <NSObject>

@required

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

/* required instance methods */
- (void)invokeCallback:(id)callback;
- (void)invokeCallback:(id)callback argument:(id)argument;
- (void)invokeScript:(id)script;
- (void)assertOnJavaScriptQueue;

@optional

@end

#endif /* GADOMIDJSInvoker_Protocol_h */
