//
#ifndef _TtC16ChatConversation19InfoItemContentView_h
#define _TtC16ChatConversation19InfoItemContentView_h
@import Foundation;

@class ChatConversation.InfoItem ?, ChatConversation.InfoItemAvatarFacepileView, UIView, _$s12CoreGraphics7CGFloatVMn ?, _$s13XDesignSystem6ButtonCMn, _$sSo7UILabelC;

@interface ChatConversation.InfoItemContentView : UIView { // (Swift)
    /* instance variables */
    nominal type descriptor for XDesignSystem.Button actionButton;
    __C.UILabel label;
    ChatConversation.InfoItemAvatarFacepileView avatarFacepileView;
    ChatConversation.InfoItem ? infoItem;
    nominal type descriptor for CoreGraphics.CGFloat ? truncatedTitleWidth;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)didTapTitleLabel;

@end

#endif /* _TtC16ChatConversation19InfoItemContentView_h */
