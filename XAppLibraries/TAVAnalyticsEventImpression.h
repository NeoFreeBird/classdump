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
