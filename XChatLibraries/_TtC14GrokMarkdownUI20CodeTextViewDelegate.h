//
#ifndef _TtC14GrokMarkdownUI20CodeTextViewDelegate_h
#define _TtC14GrokMarkdownUI20CodeTextViewDelegate_h
@import Foundation;

#include "UITextViewDelegate-Protocol.h"

@class GrokMarkdownCore.MarkdownStrings, NSObject;

@interface GrokMarkdownUI.CodeTextViewDelegate : NSObject <UITextViewDelegate> { // (Swift)
    /* instance variables */
    GrokMarkdownCore.MarkdownStrings strings;
}

/* instance methods */
- (id)textView:(id)view editMenuForTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range suggestedActions:(id)actions;
- (id)init;

@end

#endif /* _TtC14GrokMarkdownUI20CodeTextViewDelegate_h */
