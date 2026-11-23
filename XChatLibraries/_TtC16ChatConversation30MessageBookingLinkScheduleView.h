//
#ifndef _TtC16ChatConversation30MessageBookingLinkScheduleView_h
#define _TtC16ChatConversation30MessageBookingLinkScheduleView_h
@import Foundation;

@class ChatConversation.MessageBookingLinkDayChipsView, ChatConversation.MessageBookingLinkOwnerBookingsView, ChatConversation.MessageBookingLinkOwnerHeaderView, ChatConversation.MessageBookingLinkScheduleView.CellLabels, ChatConversation.MessageBookingLinkScheduleView.CellLabels _$s6labels_SaySo6UIFontCG5fonts _$s12CoreGraphics7CGFloatVMn widthtSg, ChatConversation.MessageBookingLinkScheduleView.Configuration, ChatConversation.MessageBookingLinkScheduleViewListener ?, ChatConversation.MessageBookingLinkTimePillsView, ChatModels.MessageBookingLinkSelection ?, UIView, _$s10Foundation4DateVMn ?, _$sSSSg, _$sSa -> _$s10Foundation4DateVMn, _$sSaySSG, _$sSaySa -> _$s10Foundation4DateVMn, _$sSo7UILabelC;

@interface ChatConversation.MessageBookingLinkScheduleView : UIView { // (Swift)
    /* instance variables */
    ChatConversation.MessageBookingLinkScheduleViewListener ? listener;
    Swift.Array empty-list Swift.Array -> nominal type descriptor for Foundation.Date days;
    Swift.String? refusalMessage;
    nominal type descriptor for Foundation.Date ? selectedStart;
    ChatConversation.MessageBookingLinkScheduleView.Configuration configuration;
    ChatConversation.MessageBookingLinkDayChipsView dayChipsView;
    ChatConversation.MessageBookingLinkOwnerBookingsView ownerBookingsView;
    ChatConversation.MessageBookingLinkOwnerHeaderView ownerHeaderView;
    __C.UILabel summaryLabel;
    ChatConversation.MessageBookingLinkTimePillsView timePillsView;
    Swift.String? bookingLinkID;
    ChatConversation.MessageBookingLinkScheduleView.CellLabels cellLabels;
    ChatModels.MessageBookingLinkSelection ? selection;
    Swift.Array -> nominal type descriptor for Foundation.Date shownTimes;
    [Swift.String] summaryLines;
    ChatConversation.MessageBookingLinkScheduleView.CellLabels labels first-element-marker [__C.UIFont]fonts nominal type descriptor for CoreGraphics.CGFloat widthtSg widestCell;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC16ChatConversation30MessageBookingLinkScheduleView_h */
