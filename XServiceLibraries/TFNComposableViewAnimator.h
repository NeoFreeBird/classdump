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
