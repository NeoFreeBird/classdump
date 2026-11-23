//
#ifndef TAVAnalyticsEventMoat1SecFullyOnScreen_h
#define TAVAnalyticsEventMoat1SecFullyOnScreen_h
@import Foundation;

#include "TAVAnalyticsEvent.h"
#include "TAVAnalyticsPromotedEvent-Protocol.h"

@interface TAVAnalyticsEventMoat1SecFullyOnScreen : TAVAnalyticsEvent <TAVAnalyticsPromotedEvent>

/* class methods */
+ (id)promotedEventNameForAd;
+ (id)promotedEventNameForContent;

@end

#endif /* TAVAnalyticsEventMoat1SecFullyOnScreen_h */
