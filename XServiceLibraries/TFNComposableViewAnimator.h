//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNComposableViewAnimator_h
#define TFNComposableViewAnimator_h
@import Foundation;

@class NSObject;

@interface TFNComposableViewAnimator : NSObject

/* class methods */
+ (void)animateWithView:(id)view updates:(id)updates completionBlock:(id /* block */)block;

@end

#endif /* TFNComposableViewAnimator_h */
