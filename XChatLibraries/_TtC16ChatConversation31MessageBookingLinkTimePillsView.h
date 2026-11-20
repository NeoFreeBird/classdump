//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation31MessageBookingLinkTimePillsView_h
#define _TtC16ChatConversation31MessageBookingLinkTimePillsView_h
@import Foundation;

@class ChatConversation.MessageBookingLinkScheduleGrid, ChatConversation.MessageBookingLinkTimePillsViewListener ?, UIView, _$sSa -> ChatConversation.MessageBookingLinkTimePillView, _$sSi;

@interface ChatConversation.MessageBookingLinkTimePillsView : UIView { // (Swift)
    /* instance variables */
    ChatConversation.MessageBookingLinkTimePillsViewListener ? listener;
    ChatConversation.MessageBookingLinkScheduleGrid grid;
    Swift.Array -> ChatConversation.MessageBookingLinkTimePillView pillViews;
    Swift.Int shownCount;
}

/* instance methods */
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC16ChatConversation31MessageBookingLinkTimePillsView_h */
