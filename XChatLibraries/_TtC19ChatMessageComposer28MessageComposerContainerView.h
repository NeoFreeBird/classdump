//
#ifndef _TtC19ChatMessageComposer28MessageComposerContainerView_h
#define _TtC19ChatMessageComposer28MessageComposerContainerView_h
@import Foundation;

@class ChatMessageComposer.MediaImageService, ChatMessageComposer.MessageComposerView ?, ChatUI.ChatColorProviding, UIView, _$sSo18NSLayoutConstraintCSg;

@interface ChatMessageComposer.MessageComposerContainerView : UIView { // (Swift)
    /* instance variables */
    ChatUI.ChatColorProviding colorProvider;
    ChatMessageComposer.MediaImageService mediaImageService;
    ChatMessageComposer.MessageComposerView ? $__lazy_storage_$_composerView;
    __C.NSLayoutConstraint? $__lazy_storage_$_minimumHeightConstraint;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC19ChatMessageComposer28MessageComposerContainerView_h */
