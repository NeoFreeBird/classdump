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
