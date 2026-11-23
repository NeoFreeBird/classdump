//
#ifndef T1StatusMediaTimelineObserverPrefetcher_Protocol_h
#define T1StatusMediaTimelineObserverPrefetcher_Protocol_h
@import Foundation;

@protocol T1StatusMediaTimelineObserverPrefetcher

@required

@property (nonatomic) _Bool disableStatusOrderReversing;

/* required instance methods */
- (void)fetchMediasForStatuses:(id)statuses;

@optional

@end

#endif /* T1StatusMediaTimelineObserverPrefetcher_Protocol_h */
