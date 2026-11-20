//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNLBackoffBehaviorProvider_Protocol_h
#define TNLBackoffBehaviorProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TNLBackoffBehaviorProvider <NSObject>

@required

/* required instance methods */
- (struct TNLBackoffBehavior_T { double x0; double x1; double x2; })tnl_backoffBehaviorForURL:(id)url responseHeaders:(id)headers;

@optional

@end

#endif /* TNLBackoffBehaviorProvider_Protocol_h */
