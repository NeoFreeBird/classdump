//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1TabSwitchTransitionAnimator_h
#define T1TabSwitchTransitionAnimator_h
@import Foundation;

@class NSObject;

@interface T1TabSwitchTransitionAnimator : NSObject // (Swift)

/* class methods */
+ (void)performSnapshotTransitionFromController:(id)controller toController:(id)controller fromIndex:(long long)index toIndex:(long long)index containerView:(id)view floatingActionButton:(id)button destinationWasLoaded:(_Bool)loaded swapBlock:(id /* block */)block completion:(id /* block */)completion;

/* instance methods */
- (id)init;

@end

#endif /* T1TabSwitchTransitionAnimator_h */
