//
#ifndef XNAVNavigationStacks_h
#define XNAVNavigationStacks_h
@import Foundation;

@class NSObject;

@interface XNAVNavigationStacks : NSObject // (Swift)

/* class methods */
+ (id)stackWithRootViewController:(id)controller popGestureCapability:(long long)capability defaultConfiguration:(id)configuration;
+ (id)stackWithPopGestureCapability:(long long)capability defaultConfiguration:(id)configuration;
+ (id)navigationBarItemFramesOfStack:(id)stack inView:(id)view;
+ (id)navigationBarCoveringViewOfStack:(id)stack;

/* instance methods */
- (id)init;

@end

#endif /* XNAVNavigationStacks_h */
