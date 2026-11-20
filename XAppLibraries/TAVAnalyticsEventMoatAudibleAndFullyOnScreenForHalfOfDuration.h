//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
