//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVAnalyticsEvent6SecInView_h
#define TAVAnalyticsEvent6SecInView_h
@import Foundation;

#include "TAVAnalyticsClientEvent-Protocol.h"
#include "TAVAnalyticsEvent.h"
#include "TAVAnalyticsPromotedEvent-Protocol.h"
#include "TAVAnalyticsSessionState.h"

@class NSDictionary, NSString, NSUUID;

@interface TAVAnalyticsEvent6SecInView : TAVAnalyticsEvent <TAVAnalyticsPromotedEvent, TAVAnalyticsClientEvent>

@property (readonly, copy, nonatomic) NSString *clientEventAction;
@property (readonly, copy, nonatomic) NSString *clientEventCategory;
@property (readonly, copy, nonatomic) NSDictionary *clientEventParameters;
@property (readonly, copy, nonatomic) NSUUID *playlistItemKey;
@property (readonly, copy, nonatomic) TAVAnalyticsSessionState *analyticsSessionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)promotedEventNameForAd;
+ (id)promotedEventNameForContent;

@end

#endif /* TAVAnalyticsEvent6SecInView_h */
