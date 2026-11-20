//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIView_TFNKeyboardAnimationAdditions_h
#define UIView_TFNKeyboardAnimationAdditions_h
@import Foundation;

@interface UIView (TFNKeyboardAnimationAdditions)

/* class methods */
+ (void)tfn_animateWithKeyboardAnimationCurve:(id /* block */)curve completion:(id /* block */)completion;

@end

#endif /* UIView_TFNKeyboardAnimationAdditions_h */
