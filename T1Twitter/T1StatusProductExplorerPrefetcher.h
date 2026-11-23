//
#ifndef T1StatusProductExplorerPrefetcher_h
#define T1StatusProductExplorerPrefetcher_h
@import Foundation;

#include "T1StatusMediaTimelineObserver.h"
#include "T1StatusMediaTimelineObserverPrefetcher-Protocol.h"

@class NSObject;

@interface T1StatusProductExplorerPrefetcher : NSObject <T1StatusMediaTimelineObserverPrefetcher>

@property (weak, nonatomic) T1StatusMediaTimelineObserver *timelineObserver;
@property (nonatomic) _Bool disableStatusOrderReversing;

/* class methods */
+ (id)productExplorerPrefetcherWithViewController:(id)controller account:(id)account;

/* instance methods */
- (void)fetchMediasForStatuses:(id)statuses;
- (_Bool)shouldNotPrecache;
- (id)extractProductExplorerStatusFromStatuses:(id)statuses;
- (id)extractMediaEntityFromStatus:(id)status;

@end

#endif /* T1StatusProductExplorerPrefetcher_h */
