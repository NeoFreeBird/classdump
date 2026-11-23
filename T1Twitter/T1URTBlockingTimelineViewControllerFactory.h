//
#ifndef T1URTBlockingTimelineViewControllerFactory_h
#define T1URTBlockingTimelineViewControllerFactory_h
@import Foundation;

@class NSObject;

@interface T1URTBlockingTimelineViewControllerFactory : NSObject // (Swift)

/* class methods */
+ (id)blockingViewControllerWithAccount:(id)account;
+ (id)dmBlockingViewControllerWithAccount:(id)account;

/* instance methods */
- (id)init;

@end

#endif /* T1URTBlockingTimelineViewControllerFactory_h */
