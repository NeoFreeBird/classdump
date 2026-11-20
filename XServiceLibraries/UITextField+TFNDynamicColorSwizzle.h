//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UITextField_TFNDynamicColorSwizzle_h
#define UITextField_TFNDynamicColorSwizzle_h
@import Foundation;

@interface UITextField (TFNDynamicColorSwizzle)

/* class methods */
+ (_Bool)tfn_defaultShouldFlipForRightToLeftTransform;

/* instance methods */
- (id)tfn_defaultTextAttributes;
- (void)setTfn_defaultTextAttributes:(id)attributes;
- (_Bool)isDictationRunning;
- (_Bool)fieldIsEmpty;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })nsRangeFromUITextRange:(id)range;
- (id)uiTextRangeFromNSRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })nsrange;
- (id)tfn_searchBarOverlay;
- (void)tfn_searchBarClear;
- (void)_tfn_dynamicColor_setKeyboardAppearance:(long long)appearance;
- (_Bool)_tfn_dynamicColor_becomeFirstResponder;

@end

#endif /* UITextField_TFNDynamicColorSwizzle_h */
