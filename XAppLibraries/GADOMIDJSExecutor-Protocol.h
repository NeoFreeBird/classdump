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
