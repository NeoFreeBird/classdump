//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FIRAnalyticsInteropListener_Protocol_h
#define FIRAnalyticsInteropListener_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol FIRAnalyticsInteropListener <NSObject>

@required

/* required instance methods */
- (void)messageTriggered:(id)triggered parameters:(id)parameters;

@optional

@end

#endif /* FIRAnalyticsInteropListener_Protocol_h */
