//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
