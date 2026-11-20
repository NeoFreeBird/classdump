//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ImmersiveMediaOriginCoordinatorFactory_h
#define T1ImmersiveMediaOriginCoordinatorFactory_h
@import Foundation;

@class NSObject;

@interface T1ImmersiveMediaOriginCoordinatorFactory : NSObject // (Swift)

/* class methods */
+ (id)coordinatorWithViewProvider:(id /* block */)provider;
+ (id)coordinatorWithViewProvider:(id /* block */)provider dismissDidComplete:(id /* block */)complete overlayViewsProvider:(id /* block */)provider dismissForegroundViewsProvider:(id /* block */)provider dismissCoveringViewProvider:(id /* block */)provider;
+ (id)coordinatorWithOriginViewProvider:(id /* block */)provider transitionViewProvider:(id /* block */)provider overlayViewsProvider:(id /* block */)provider dismissDidComplete:(id /* block */)complete;
+ (id)coordinatorWithViewForIndexProvider:(id /* block */)provider frameInWindowForIndexProvider:(id /* block */)provider;
+ (id)coordinatorWithViewProvider:(id /* block */)provider playerViewProvider:(id /* block */)provider playerProvider:(id /* block */)provider didReceivePlayerHandoff:(id /* block */)handoff transitionViewProvider:(id /* block */)provider dismissDidComplete:(id /* block */)complete overlayViewsProvider:(id /* block */)provider dismissForegroundViewsProvider:(id /* block */)provider dismissCoveringViewProvider:(id /* block */)provider prepare:(id /* block */)prepare;

/* instance methods */
- (id)init;

@end

#endif /* T1ImmersiveMediaOriginCoordinatorFactory_h */
