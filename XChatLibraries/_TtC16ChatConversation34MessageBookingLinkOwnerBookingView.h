//
#ifndef _TtC16ChatConversation34MessageBookingLinkOwnerBookingView_h
#define _TtC16ChatConversation34MessageBookingLinkOwnerBookingView_h
@import Foundation;

@class Swift.Bool, UIView, _$sSo7UILabelC;

@interface ChatConversation.MessageBookingLinkOwnerBookingView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel leadingLabel;
    __C.UILabel nameLabel;
    __C.UILabel trailingLabel;
    __C.UILabel whenLabel;
    Swift.Bool isNameInRow;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC16ChatConversation34MessageBookingLinkOwnerBookingView_h */
