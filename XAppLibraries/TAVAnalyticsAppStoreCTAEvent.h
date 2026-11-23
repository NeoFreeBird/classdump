//
#ifndef TAVAnalyticsAppStoreCTAEvent_h
#define TAVAnalyticsAppStoreCTAEvent_h
@import Foundation;

#include "TAVAnalyticsCTAEvent.h"

@class NSString;

@interface TAVAnalyticsAppStoreCTAEvent : TAVAnalyticsCTAEvent

@property (readonly, copy, nonatomic) NSString *appStoreID;

/* class methods */
+ (id)private_valueKeys;

/* instance methods */
- (id)initWithPlaylistItemKey:(id)key analyticsSessionState:(id)state URL:(id)url appStoreID:(id)id;
- (id)initWithAnalyticsSessionState:(id)state URL:(id)url appStoreID:(id)id;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TAVAnalyticsAppStoreCTAEvent_h */
