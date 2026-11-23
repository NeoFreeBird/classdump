//
#ifndef TFNDatePickerLabel_h
#define TFNDatePickerLabel_h
@import Foundation;

@class UILabel;

@interface TFNDatePickerLabel : UILabel

/* instance methods */
- (id)_enclosingTFNDatePicker;
- (void)_tfn_datePickerLabel_updateAttributedText;
- (void)setText:(id)text;
- (void)setAttributedText:(id)text;
- (void)setTextColor:(id)color;
- (void)setHighlightedTextColor:(id)color;
- (void)setHighlighted:(_Bool)highlighted;
- (void)setEnabled:(_Bool)enabled;
- (void)updateAttributedText;

@end

#endif /* TFNDatePickerLabel_h */
