//
#ifndef _TtC11ChatGrokBot22GrokBotFlightsCardView_h
#define _TtC11ChatGrokBot22GrokBotFlightsCardView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardSurfaceView ?, ChatGrokBot.GrokBotFlightFollowUpsView, ChatGrokBot.GrokBotFlightResultsView, UIView;

@interface ChatGrokBot.GrokBotFlightsCardView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotFlightFollowUpsView followUpsView;
    ChatGrokBot.GrokBotFlightResultsView resultsView;
    ChatGrokBot.GrokBotCardSurfaceView ? $__lazy_storage_$_surfaceView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot22GrokBotFlightsCardView_h */
