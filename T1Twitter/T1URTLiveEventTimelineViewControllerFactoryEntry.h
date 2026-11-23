//
#ifndef T1URTLiveEventTimelineViewControllerFactoryEntry_h
#define T1URTLiveEventTimelineViewControllerFactoryEntry_h
@import Foundation;

#include "T1URTLiveEventTimelineTweetInjectionListener.h"
#include "T1URTViewController.h"

@class NSObject;

@interface T1URTLiveEventTimelineViewControllerFactoryEntry : NSObject // (Swift)

@property (nonatomic, readonly) T1URTViewController *viewController;
@property (nonatomic, readonly) T1URTLiveEventTimelineTweetInjectionListener *tweetInjectionListener;

/* instance methods */
- (id)init;

@end

#endif /* T1URTLiveEventTimelineViewControllerFactoryEntry_h */
