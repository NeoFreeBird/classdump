//
#ifndef PTVBroadcastAnalyticsManager_h
#define PTVBroadcastAnalyticsManager_h
@import Foundation;

#include "PTVBroadcast.h"

@class NSMutableSet, NSObject, NSSet;

@interface PTVBroadcastAnalyticsManager : NSObject

@property (retain, nonatomic) PTVBroadcast *broadcast;
@property (readonly, nonatomic) _Bool hasScrolledChat;
@property (readonly, copy, nonatomic) NSSet *shareEvents;

/* instance methods */
- (id)initWithBroadcast:(id)broadcast;
- (void)didScrollChat;
- (void)trackNewShareEventWithType:(id)type;

@end

#endif /* PTVBroadcastAnalyticsManager_h */
