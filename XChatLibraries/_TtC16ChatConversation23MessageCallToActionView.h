//
#ifndef _TtC16ChatConversation23MessageCallToActionView_h
#define _TtC16ChatConversation23MessageCallToActionView_h
@import Foundation;

@class ChatModels.ChatMessageCallToAction _$scSg ->, UIView, _$sSa -> ChatModels.ChatMessageCallToAction, _$sSa -> _$s13XDesignSystem6ButtonCMn;

@interface ChatConversation.MessageCallToActionView : UIView { // (Swift)
    /* instance variables */
    ChatModels.ChatMessageCallToAction _$scSg -> onTap;
    Swift.Array -> nominal type descriptor for XDesignSystem.Button buttons;
    Swift.Array -> ChatModels.ChatMessageCallToAction callToActions;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC16ChatConversation23MessageCallToActionView_h */
