//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UITextView_KeyboardBugWorkarounds_h
#define UITextView_KeyboardBugWorkarounds_h
@import Foundation;

@interface UITextView (KeyboardBugWorkarounds)

/* class methods */
+ (_Bool)tfn_defaultShouldFlipForRightToLeftTransform;

/* instance methods */
- (id)tfn_typingAttributes;
- (void)setTfn_typingAttributes:(id)attributes;
- (void)_tfn_swizzled_deleteBackward;

@end

#endif /* UITextView_KeyboardBugWorkarounds_h */
