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
