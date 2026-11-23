//
#ifndef _TtC16ChatConversation30MessageBookingLinkDayChipsView_h
#define _TtC16ChatConversation30MessageBookingLinkDayChipsView_h
@import Foundation;

@class ChatConversation.MessageBookingLinkDayChipsViewListener ?, ChatConversation.MessageBookingLinkScheduleGrid, Swift.Bool, UIView, _$sSa -> ChatConversation.MessageBookingLinkDayChipView, _$sSi, _$sSiSg, _$sSo12UIScrollViewC;

@interface ChatConversation.MessageBookingLinkDayChipsView : UIView { // (Swift)
    /* instance variables */
    ChatConversation.MessageBookingLinkDayChipsViewListener ? listener;
    ChatConversation.MessageBookingLinkScheduleGrid grid;
    __C.UIScrollView scrollView;
    Swift.Bool wrapsChips;
    Swift.Array -> ChatConversation.MessageBookingLinkDayChipView chipViews;
    Swift.Int? selectedIndex;
    Swift.Int shownCount;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC16ChatConversation30MessageBookingLinkDayChipsView_h */
