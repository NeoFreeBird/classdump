//
#ifndef TAVAnalyticsEventMoatAudibleAndFullyOnScreenForHalfOfDuration_h
#define TAVAnalyticsEventMoatAudibleAndFullyOnScreenForHalfOfDuration_h
@import Foundation;

#include "TAVAnalyticsEvent.h"
#include "TAVAnalyticsPromotedEvent-Protocol.h"

@interface TAVAnalyticsEventMoatAudibleAndFullyOnScreenForHalfOfDuration : TAVAnalyticsEvent <TAVAnalyticsPromotedEvent>

/* class methods */
+ (id)promotedEventNameForAd;
+ (id)promotedEventNameForContent;

@end

#endif /* TAVAnalyticsEventMoatAudibleAndFullyOnScreenForHalfOfDuration_h */
