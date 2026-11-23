//
#ifndef UIView_TFNDynamicColorSwizzle_h
#define UIView_TFNDynamicColorSwizzle_h
@import Foundation;

@interface UIView (TFNDynamicColorSwizzle)

/* instance methods */
- (void)_tfn_dynamicColor_willMoveToSuperview:(id)superview;
- (void)_tfn_dynamicColor_didMoveToSuperview;
- (id)_tfn_dynamicColor_backgroundColor;

@end

#endif /* UIView_TFNDynamicColorSwizzle_h */
