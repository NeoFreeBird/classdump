//
#ifndef TAVAnalyticsEventCTAAppOpenImpression_h
#define TAVAnalyticsEventCTAAppOpenImpression_h
@import Foundation;

#include "TAVAnalyticsAppStoreCTAEvent.h"
#include "TAVAnalyticsClientEvent-Protocol.h"
#include "TAVAnalyticsSessionState.h"

@class NSDictionary, NSString, NSUUID;

@interface TAVAnalyticsEventCTAAppOpenImpression : TAVAnalyticsAppStoreCTAEvent <TAVAnalyticsClientEvent>

@property (readonly, copy, nonatomic) NSString *clientEventAction;
@property (readonly, copy, nonatomic) NSString *clientEventCategory;
@property (readonly, copy, nonatomic) NSDictionary *clientEventParameters;
@property (readonly, copy, nonatomic) NSUUID *playlistItemKey;
@property (readonly, copy, nonatomic) TAVAnalyticsSessionState *analyticsSessionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

#endif /* TAVAnalyticsEventCTAAppOpenImpression_h */
