//
#ifndef T1TimelineMediaOriginCoordinatorFactory_h
#define T1TimelineMediaOriginCoordinatorFactory_h
@import Foundation;

@class NSObject;

@interface T1TimelineMediaOriginCoordinatorFactory : NSObject // (Swift)

/* class methods */
+ (id)coordinatorWithForwardViewProvider:(id /* block */)provider;
+ (id)coordinatorWithForwardViewProvider:(id /* block */)provider mediaIndex:(long long)index originIndex:(long long)index;
+ (id)mediaOriginCoordinatorForStatusID:(long long)id inTimelineViewController:(id)controller;

/* instance methods */
- (id)init;

@end

#endif /* T1TimelineMediaOriginCoordinatorFactory_h */
