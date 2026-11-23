//
#ifndef _TtC19ChatMessageComposer28MessageComposerVoiceLockView_h
#define _TtC19ChatMessageComposer28MessageComposerVoiceLockView_h
@import Foundation;

#include "_TtC6ChatUI15PassthroughView.h"

@class ChatMessageComposer.ComposerActionButton ?, ChatUI.ChatColorProviding;

@interface ChatMessageComposer.MessageComposerVoiceLockView : ChatUI.PassthroughView { // (Swift)
    /* instance variables */
    ChatMessageComposer.ComposerActionButton ? $__lazy_storage_$_lockButton;
    ChatUI.ChatColorProviding colorProvider;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC19ChatMessageComposer28MessageComposerVoiceLockView_h */
