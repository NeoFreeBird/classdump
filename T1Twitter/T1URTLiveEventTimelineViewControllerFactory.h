//
#ifndef T1URTLiveEventTimelineViewControllerFactory_h
#define T1URTLiveEventTimelineViewControllerFactory_h
@import Foundation;

@class NSObject;

@interface T1URTLiveEventTimelineViewControllerFactory : NSObject // (Swift)

/* class methods */
+ (id)viewControllerWithLiveEvent:(id)event timelineVariant:(id)variant sourceID:(id)id account:(id)account scribeContext:(id)context;

/* instance methods */
- (id)init;

@end

#endif /* T1URTLiveEventTimelineViewControllerFactory_h */
