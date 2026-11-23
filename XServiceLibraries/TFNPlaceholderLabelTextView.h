//
#ifndef TFNPlaceholderLabelTextView_h
#define TFNPlaceholderLabelTextView_h
@import Foundation;

@class UITextView;

@interface TFNPlaceholderLabelTextView : UITextView

/* instance methods */
- (id)accessibilityElements;
- (long long)accessibilityElementCount;
- (_Bool)isAccessibilityElement;

@end

#endif /* TFNPlaceholderLabelTextView_h */
