//
#ifndef _TtC16ChatConversation26InfoItemAvatarFacepileView_h
#define _TtC16ChatConversation26InfoItemAvatarFacepileView_h
@import Foundation;

@class ChatUI.ChatImageLoading ?, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSa -> ChatConversation.InfoItemAvatarView, _$sSa -> ChatConversation.InfoItemParticipant, _$syycSg;

@interface ChatConversation.InfoItemAvatarFacepileView : UIView { // (Swift)
    /* instance variables */
    (() -> ())? onAvatarTap;
    ChatUI.ChatImageLoading ? imageLoader;
    Swift.Array -> ChatConversation.InfoItemParticipant participants;
    nominal type descriptor for CoreGraphics.CGFloat avatarSize;
    nominal type descriptor for CoreGraphics.CGFloat avatarCutoutWidth;
    Swift.Array -> ChatConversation.InfoItemAvatarView avatarViews;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC16ChatConversation26InfoItemAvatarFacepileView_h */
