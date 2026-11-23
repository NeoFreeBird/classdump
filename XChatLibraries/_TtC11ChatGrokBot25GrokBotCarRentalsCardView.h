//
#ifndef _TtC11ChatGrokBot25GrokBotCarRentalsCardView_h
#define _TtC11ChatGrokBot25GrokBotCarRentalsCardView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardSurfaceView ?, ChatGrokBot.GrokBotHotelChipsView, ChatGrokBot.GrokBotHotelSearchSummaryView, ChatGrokBot.GrokBotHotelTileGridView, UIView, _$sSaySSG;

@interface ChatGrokBot.GrokBotCarRentalsCardView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotHotelChipsView chipsView;
    ChatGrokBot.GrokBotHotelTileGridView gridView;
    ChatGrokBot.GrokBotHotelSearchSummaryView summaryView;
    ChatGrokBot.GrokBotCardSurfaceView ? $__lazy_storage_$_summarySurfaceView;
    [Swift.String] shownRentalIDs;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot25GrokBotCarRentalsCardView_h */
