//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADOMIDJSExecutor_Protocol_h
#define GADOMIDJSExecutor_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADOMIDJSExecutor <NSObject>

@required

@property (readonly, nonatomic) _Bool supportBackgroundThread;
@property (readonly, nonatomic) id jsEnvironment;

/* required instance methods */
- (void)injectJavaScriptFromString:(id)string;

@optional

@end

#endif /* GADOMIDJSExecutor_Protocol_h */
