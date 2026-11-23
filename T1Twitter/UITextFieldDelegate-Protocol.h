//
#ifndef UITextFieldDelegate_Protocol_h
#define UITextFieldDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UITextFieldDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (_Bool)textFieldShouldBeginEditing:(id)editing;
- (void)textFieldDidBeginEditing:(id)editing;
- (_Bool)textFieldShouldEndEditing:(id)editing;
- (void)textFieldDidEndEditing:(id)editing;
- (void)textFieldDidEndEditing:(id)editing reason:(long long)reason;
- (_Bool)textField:(id)field shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementString:(id)string;
- (_Bool)textField:(id)field shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementString:(id)string;
- (_Bool)textField:(id)field shouldChangeCharactersInRanges:(id)ranges replacementString:(id)string;
- (void)textFieldDidChangeSelection:(id)selection;
- (_Bool)textFieldShouldClear:(id)clear;
- (_Bool)textFieldShouldReturn:(id)_return;
- (id)textField:(id)field editMenuForCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range suggestedActions:(id)actions;
- (id)textField:(id)field editMenuForCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range suggestedActions:(id)actions;
- (id)textField:(id)field editMenuForCharactersInRanges:(id)ranges suggestedActions:(id)actions;
- (void)textField:(id)field willPresentEditMenuWithAnimator:(id)animator;
- (void)textField:(id)field willPresentEditMenuWithAnimator:(id)animator;
- (void)textField:(id)field willDismissEditMenuWithAnimator:(id)animator;
- (void)textField:(id)field willDismissEditMenuWithAnimator:(id)animator;
- (void)textField:(id)field insertInputSuggestion:(id)suggestion;

@end

#endif /* UITextFieldDelegate_Protocol_h */
