//
#ifndef _TtCV12MarkdownView18SelectableTextView11Coordinator_h
#define _TtCV12MarkdownView18SelectableTextView11Coordinator_h
@import Foundation;

#include "UITextViewDelegate-Protocol.h"

@class NSObject, _$s7SwiftUI13OpenURLActionVMn ?;

@interface MarkdownView.SelectableTextView.Coordinator : NSObject <UITextViewDelegate> { // (Swift)
    /* instance variables */
    nominal type descriptor for SwiftUI.OpenURLAction ? openURL;
}

/* instance methods */
- (_Bool)textView:(id)view shouldInteractWithURL:(id)url inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range interaction:(long long)interaction;
- (id)textView:(id)view menuConfigurationForTextItem:(id)item defaultMenu:(id)menu;
- (id)init;

@end

#endif /* _TtCV12MarkdownView18SelectableTextView11Coordinator_h */
