//
#ifndef TFNFormFieldPinCodeInputViewTextField_h
#define TFNFormFieldPinCodeInputViewTextField_h
@import Foundation;

@class UITextField;

@interface TFNFormFieldPinCodeInputViewTextField : UITextField

/* instance methods */
- (_Bool)canPerformAction:(SEL)action withSender:(id)sender;
- (void)setSelectedTextRange:(id)range;

@end

#endif /* TFNFormFieldPinCodeInputViewTextField_h */
