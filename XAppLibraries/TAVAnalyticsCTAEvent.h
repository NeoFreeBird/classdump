//
#ifndef TAVAnalyticsCTAEvent_h
#define TAVAnalyticsCTAEvent_h
@import Foundation;

#include "TAVAnalyticsEvent.h"

@class NSURL;

@interface TAVAnalyticsCTAEvent : TAVAnalyticsEvent

@property (readonly, copy, nonatomic) NSURL *URL;

/* class methods */
+ (id)private_valueKeys;

/* instance methods */
- (id)initWithPlaylistItemKey:(id)key analyticsSessionState:(id)state URL:(id)url;
- (id)initWithAnalyticsSessionState:(id)state URL:(id)url;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TAVAnalyticsCTAEvent_h */
