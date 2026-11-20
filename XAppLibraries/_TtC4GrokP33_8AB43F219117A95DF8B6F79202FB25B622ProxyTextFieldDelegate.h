//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4GrokP33_8AB43F219117A95DF8B6F79202FB25B622ProxyTextFieldDelegate_h
#define _TtC4GrokP33_8AB43F219117A95DF8B6F79202FB25B622ProxyTextFieldDelegate_h
@import Foundation;

#include "UITextFieldDelegate-Protocol.h"

@class NSObject;

@interface Grok.(ProxyTextFieldDelegate in _8AB43F219117A95DF8B6F79202FB25B6) : NSObject <UITextFieldDelegate> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 base;
    @40@0:8:16@24@32 textFieldDidChangeSelectionHandler;
}

/* instance methods */
- (_Bool)textFieldShouldBeginEditing:(id)editing;
- (void)textFieldDidBeginEditing:(id)editing;
- (_Bool)textFieldShouldEndEditing:(id)editing;
- (void)textFieldDidEndEditing:(id)editing;
- (void)textFieldDidEndEditing:(id)editing reason:(long long)reason;
- (_Bool)textField:(id)field shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementString:(id)string;
- (void)textFieldDidChangeSelection:(id)selection;
- (_Bool)textFieldShouldClear:(id)clear;
- (_Bool)textFieldShouldReturn:(id)_return;
- (id)textField:(id)field editMenuForCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range suggestedActions:(id)actions;
- (void)textField:(id)field willPresentEditMenuWithAnimator:(id)animator;
- (void)textField:(id)field willDismissEditMenuWithAnimator:(id)animator;
- (id)init;

@end

#endif /* _TtC4GrokP33_8AB43F219117A95DF8B6F79202FB25B622ProxyTextFieldDelegate_h */
