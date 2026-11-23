//
#ifndef _TtC4GrokP33_8AB43F219117A95DF8B6F79202FB25B621ProxyTextViewDelegate_h
#define _TtC4GrokP33_8AB43F219117A95DF8B6F79202FB25B621ProxyTextViewDelegate_h
@import Foundation;

#include "UITextViewDelegate-Protocol.h"

@class NSObject;

@interface Grok.(ProxyTextViewDelegate in _8AB43F219117A95DF8B6F79202FB25B6) : NSObject <UITextViewDelegate> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 base;
    @40@0:8:16@24@32 textViewDidChangeSelection;
}

/* instance methods */
- (_Bool)textViewShouldBeginEditing:(id)editing;
- (_Bool)textViewShouldEndEditing:(id)editing;
- (void)textViewDidBeginEditing:(id)editing;
- (void)textViewDidEndEditing:(id)editing;
- (_Bool)textView:(id)view shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementText:(id)text;
- (void)textViewDidChange:(id)change;
- (void)textViewDidChangeSelection:(id)selection;
- (id)textView:(id)view editMenuForTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range suggestedActions:(id)actions;
- (void)textView:(id)view willPresentEditMenuWithAnimator:(id)animator;
- (void)textView:(id)view willDismissEditMenuWithAnimator:(id)animator;
- (id)textView:(id)view primaryActionForTextItem:(id)item defaultAction:(id)action;
- (id)textView:(id)view menuConfigurationForTextItem:(id)item defaultMenu:(id)menu;
- (void)textView:(id)view textItemMenuWillDisplayForTextItem:(id)item animator:(id)animator;
- (void)textView:(id)view textItemMenuWillEndForTextItem:(id)item animator:(id)animator;
- (void)textViewWritingToolsWillBegin:(id)begin;
- (void)textViewWritingToolsDidEnd:(id)end;
- (id)textView:(id)view writingToolsIgnoredRangesInEnclosingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (_Bool)textView:(id)view shouldInteractWithURL:(id)url inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range interaction:(long long)interaction;
- (_Bool)textView:(id)view shouldInteractWithTextAttachment:(id)attachment inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range interaction:(long long)interaction;
- (_Bool)textView:(id)view shouldInteractWithURL:(id)url inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (_Bool)textView:(id)view shouldInteractWithTextAttachment:(id)attachment inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)textView:(id)view willBeginFormattingWithViewController:(id)controller;
- (void)textView:(id)view didBeginFormattingWithViewController:(id)controller;
- (void)textView:(id)view willEndFormattingWithViewController:(id)controller;
- (void)textView:(id)view didEndFormattingWithViewController:(id)controller;
- (id)init;

@end

#endif /* _TtC4GrokP33_8AB43F219117A95DF8B6F79202FB25B621ProxyTextViewDelegate_h */
