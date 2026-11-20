//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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

/* instance methods */
- (id)init;

@end

#endif /* XNAVNavigationStacks_h */
