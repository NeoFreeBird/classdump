//
#ifndef UIView_TFNKeyboardAnimationAdditions_h
#define UIView_TFNKeyboardAnimationAdditions_h
@import Foundation;

@interface UIView (TFNKeyboardAnimationAdditions)

/* class methods */
+ (void)tfn_animateWithKeyboardAnimationCurve:(id /* block */)curve completion:(id /* block */)completion;

@end

#endif /* UIView_TFNKeyboardAnimationAdditions_h */
