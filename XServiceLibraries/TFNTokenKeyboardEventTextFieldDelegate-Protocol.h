//
#ifndef TFNTokenKeyboardEventTextFieldDelegate_Protocol_h
#define TFNTokenKeyboardEventTextFieldDelegate_Protocol_h
@import Foundation;

#include "UITextFieldDelegate-Protocol.h"

@protocol TFNTokenKeyboardEventTextFieldDelegate <UITextFieldDelegate>

@required

@optional

/* optional instance methods */
- (void)textFieldDidReceiveDeleteKeyOnEmptyText:(id)text;
- (_Bool)textFieldShouldResignFirstResponder:(id)responder;
- (void)textFieldWillAttemptToBecomeFirstResponder:(id)responder;
- (void)textField:(id)field didAttemptToBecomeFirstResponder:(_Bool)responder;
- (void)textFieldWillAttemptToResignFirstResponder:(id)responder;
- (void)textField:(id)field didAttemptToResignFirstResponder:(_Bool)responder;

@end

#endif /* TFNTokenKeyboardEventTextFieldDelegate_Protocol_h */
