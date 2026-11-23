//
#ifndef _TFNAnimationState_h
#define _TFNAnimationState_h
@import Foundation;

@class NSObject, UIButton;

@interface _TFNAnimationState : NSObject

@property (weak, nonatomic) UIButton *button;
@property (copy, nonatomic) id /* block */ completionBlock;

/* instance methods */

@end

#endif /* _TFNAnimationState_h */
