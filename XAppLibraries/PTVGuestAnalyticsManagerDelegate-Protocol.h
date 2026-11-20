//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVGuestAnalyticsManagerDelegate_Protocol_h
#define PTVGuestAnalyticsManagerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVGuestAnalyticsManagerDelegate <NSObject>

@required

/* required instance methods */
- (void)guestAnalyticsManagerDidReportBeginGuestBroadcasting:(id)broadcasting;
- (void)guestAnalyticsManagerDidReportEndCondition:(id)condition;

@optional

@end

#endif /* PTVGuestAnalyticsManagerDelegate_Protocol_h */
