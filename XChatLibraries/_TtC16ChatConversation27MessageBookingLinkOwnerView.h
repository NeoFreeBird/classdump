//
#ifndef _TtC16ChatConversation27MessageBookingLinkOwnerView_h
#define _TtC16ChatConversation27MessageBookingLinkOwnerView_h
@import Foundation;

@class UIView, _$sSo11UIImageViewC, _$sSo6UIViewC, _$sSo7UILabelC;

@interface ChatConversation.MessageBookingLinkOwnerView : UIView { // (Swift)
    /* instance variables */
    __C.UIImageView chevronView;
    __C.UILabel countsLabel;
    __C.UIView hairlineView;
    __C.UIImageView iconGlyphView;
    __C.UIView iconTileView;
    __C.UILabel subtitleLabel;
    __C.UILabel titleLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC16ChatConversation27MessageBookingLinkOwnerView_h */
