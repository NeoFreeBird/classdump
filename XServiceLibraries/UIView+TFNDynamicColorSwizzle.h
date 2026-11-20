//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
