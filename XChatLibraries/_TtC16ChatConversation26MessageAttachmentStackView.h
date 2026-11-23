//
#ifndef _TtC16ChatConversation26MessageAttachmentStackView_h
#define _TtC16ChatConversation26MessageAttachmentStackView_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class ChatConversation.MessageAttachmentGridView ?, ChatConversation.MessageAttachmentView _$s_ -> __C.CGPoint _$stcSg, ChatConversation.MessageAttachmentView _$scSg ->, ChatUI.ChatColorProviding ?, Swift.Bool, UIView, _$sSa -> ChatConversation.MessageAttachmentStackView.AttachmentSlot, _$sSa -> ChatModels.ChatMessageAttachment, _$sSo12UIScrollViewCSgXw;

@interface ChatConversation.MessageAttachmentStackView : UIView <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    ChatUI.ChatColorProviding ? colorProvider;
    ChatConversation.MessageAttachmentView  first-element-marker  -> __C.CGPoint _$stcSg onAttachmentTap;
    ChatConversation.MessageAttachmentView _$scSg -> onAttachmentLongPress;
    Swift.Bool ownsHorizontalPans;
    weak __C.UIScrollView? scrollView;
    Swift.Array -> ChatModels.ChatMessageAttachment attachments;
    Swift.Bool isFromCurrentUser;
    Swift.Array -> ChatConversation.MessageAttachmentStackView.AttachmentSlot stackedSlots;
    ChatConversation.MessageAttachmentGridView ? mediaGridView;
}

/* instance methods */
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)handleTap:(id)tap;

@end

#endif /* _TtC16ChatConversation26MessageAttachmentStackView_h */
