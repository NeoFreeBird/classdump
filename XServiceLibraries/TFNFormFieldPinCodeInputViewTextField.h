//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
