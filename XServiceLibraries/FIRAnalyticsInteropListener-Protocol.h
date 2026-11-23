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
