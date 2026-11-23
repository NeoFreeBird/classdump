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
