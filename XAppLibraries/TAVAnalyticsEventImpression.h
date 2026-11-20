//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVAnalyticsEventImpression_h
#define TAVAnalyticsEventImpression_h
@import Foundation;

#include "TAVAnalyticsEvent.h"
#include "TAVAnalyticsPromotedEvent-Protocol.h"
#include "TAVAnalyticsVASTTrackingEvent-Protocol.h"

@class NSString;

@interface TAVAnalyticsEventImpression : TAVAnalyticsEvent <TAVAnalyticsVASTTrackingEvent, TAVAnalyticsPromotedEvent>

@property (readonly, copy, nonatomic) NSString *VASTTrackingMetric;

/* class methods */
+ (id)promotedEventNameForAd;
+ (id)promotedEventNameForContent;

@end

#endif /* TAVAnalyticsEventImpression_h */
