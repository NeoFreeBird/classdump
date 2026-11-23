//
#ifndef T1StatusDynamicAdsPrefetcher_h
#define T1StatusDynamicAdsPrefetcher_h
@import Foundation;

#include "T1StatusMediaTimelineObserver.h"
#include "T1StatusMediaTimelineObserverPrefetcher-Protocol.h"

@class NSObject;

@interface T1StatusDynamicAdsPrefetcher : NSObject <T1StatusMediaTimelineObserverPrefetcher>

@property (weak, nonatomic) T1StatusMediaTimelineObserver *timelineObserver;
@property (nonatomic) _Bool disableStatusOrderReversing;

/* class methods */
+ (id)mediaPrefetcherForDynamicAdsWithViewController:(id)controller account:(id)account;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)flush;
- (void)fetchMediasForStatuses:(id)statuses;

@end

#endif /* T1StatusDynamicAdsPrefetcher_h */
