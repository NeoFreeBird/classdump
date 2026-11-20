//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation35MessageBookingLinkOwnerBookingsView_h
#define _TtC16ChatConversation35MessageBookingLinkOwnerBookingsView_h
@import Foundation;

@class UIView, _$sSa -> ChatConversation.MessageBookingLinkOwnerBookingView, _$sSi, _$sSo7UILabelC;

@interface ChatConversation.MessageBookingLinkOwnerBookingsView : UIView { // (Swift)
    /* instance variables */
    Swift.Int shownBookingCount;
    __C.UILabel moreLabel;
    __C.UILabel titleLabel;
    Swift.Array -> ChatConversation.MessageBookingLinkOwnerBookingView bookingViews;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC16ChatConversation35MessageBookingLinkOwnerBookingsView_h */
