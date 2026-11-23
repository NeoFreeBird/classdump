//
#ifndef _TtC16ChatConversation33MessageBookingLinkOwnerHeaderView_h
#define _TtC16ChatConversation33MessageBookingLinkOwnerHeaderView_h
@import Foundation;

@class UIView, _$s10Foundation3URLVMn ?, _$s7Combine11CancellableMp ?, _$sSo11UIImageViewC, _$sSo7UILabelC;

@interface ChatConversation.MessageBookingLinkOwnerHeaderView : UIView { // (Swift)
    /* instance variables */
    __C.UIImageView avatarView;
    __C.UILabel subtitleLabel;
    __C.UILabel titleLabel;
    protocol descriptor for Combine.Cancellable ? avatarTask;
    nominal type descriptor for Foundation.URL ? avatarURL;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC16ChatConversation33MessageBookingLinkOwnerHeaderView_h */
