//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTokenKeyboardEventTextField_h
#define TFNTokenKeyboardEventTextField_h
@import Foundation;

#include "TFNTextField.h"
#include "TFNTokenKeyboardEventTextFieldDelegate-Protocol.h"

@interface TFNTokenKeyboardEventTextField : TFNTextField

@property (weak, nonatomic) id <TFNTokenKeyboardEventTextFieldDelegate> delegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)deleteBackward;
- (_Bool)canResignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;

@end

#endif /* TFNTokenKeyboardEventTextField_h */
