//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADJavascriptEvaluating_Protocol_h
#define GADJavascriptEvaluating_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADJavascriptEvaluating <NSObject>

@required

/* required instance methods */
- (void)asyncEvaluateFunction:(id)function parameters:(id)parameters;
- (void)dispatchSDKEvent:(id)sdkevent parameters:(id)parameters;
- (void)evaluateScript:(id)script;

@optional

@end

#endif /* GADJavascriptEvaluating_Protocol_h */
