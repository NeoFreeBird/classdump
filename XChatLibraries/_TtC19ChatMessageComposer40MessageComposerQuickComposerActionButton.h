//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC19ChatMessageComposer40MessageComposerQuickComposerActionButton_h
#define _TtC19ChatMessageComposer40MessageComposerQuickComposerActionButton_h
@import Foundation;

@class ChatMessageComposer.LongPressPanGestureRecognizer ?, ChatMessageComposer.MessageComposerAction ?, ChatUI.ChatColorProviding, UIButton, _$syycSg;

@interface ChatMessageComposer.MessageComposerQuickComposerActionButton : UIButton { // (Swift)
    /* instance variables */
    ChatMessageComposer.MessageComposerAction ? action;
    ChatUI.ChatColorProviding colorProvider;
    (() -> ())? pressDidEnd;
    ChatMessageComposer.LongPressPanGestureRecognizer ? $__lazy_storage_$_longPressPanGestureRecognizer;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)didPress:(id)press;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC19ChatMessageComposer40MessageComposerQuickComposerActionButton_h */
