//
#ifndef _TtC11ChatGrokBot26GrokBotFlightTravelersView_h
#define _TtC11ChatGrokBot26GrokBotFlightTravelersView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotFlightTravelerRowView, UIView, _$sSa -> ChatGrokBot.GrokBotFlightTravelerRowView, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotFlightTravelersView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotCardButton actionButton;
    ChatGrokBot.GrokBotFlightTravelerRowView contactRowView;
    __C.UILabel noteLabel;
    __C.UILabel saveNoteLabel;
    ChatGrokBot.GrokBotFlightTravelerRowView ticketsRowView;
    __C.UILabel titleLabel;
    Swift.Array -> ChatGrokBot.GrokBotFlightTravelerRowView rowViews;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot26GrokBotFlightTravelersView_h */
