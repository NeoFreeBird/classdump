//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot33GrokBotCarRentalLocationsCardView_h
#define _TtC11ChatGrokBot33GrokBotCarRentalLocationsCardView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardSurfaceView ?, ChatGrokBot.GrokBotHotelChipsView, ChatGrokBot.GrokBotHotelSearchSummaryView, ChatGrokBot.GrokBotPlacesListCardView, UIView, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotCarRentalLocationsCardView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotHotelChipsView chipsView;
    ChatGrokBot.GrokBotPlacesListCardView listView;
    __C.UILabel noteLabel;
    ChatGrokBot.GrokBotHotelSearchSummaryView summaryView;
    ChatGrokBot.GrokBotCardSurfaceView ? $__lazy_storage_$_summarySurfaceView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot33GrokBotCarRentalLocationsCardView_h */
