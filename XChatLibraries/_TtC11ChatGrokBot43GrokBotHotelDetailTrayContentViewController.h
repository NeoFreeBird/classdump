//
#ifndef _TtC11ChatGrokBot43GrokBotHotelDetailTrayContentViewController_h
#define _TtC11ChatGrokBot43GrokBotHotelDetailTrayContentViewController_h
@import Foundation;

@class ChatGrokBot.GrokBotHotelDetail, ChatGrokBot.GrokBotHotelDetailTitleView, ChatGrokBot.GrokBotHotelNearbyView, ChatGrokBot.GrokBotHotelPricePanelView, ChatGrokBot.GrokBotPlaceDetailsHeroView, ChatGrokBot.GrokBotPlaceDetailsPhotosView, Swift.Bool, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$s13XDesignSystem9ListItemsCMn, _$s7Combine12AnyPublisherVMn ChatGrokBot.GrokBotHotelDetail ? _$ss5NeverOMn, _$sSSSg, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sySSc;

@interface ChatGrokBot.GrokBotHotelDetailTrayContentViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotPlaceDetailsHeroView heroView;
    nominal type descriptor for XDesignSystem.ListItems list;
    ChatGrokBot.GrokBotHotelNearbyView nearbyView;
    (Swift.String) -> () onSendPrompt;
    ChatGrokBot.GrokBotPlaceDetailsPhotosView photosView;
    ChatGrokBot.GrokBotHotelPricePanelView pricePanelView;
    ChatGrokBot.GrokBotHotelDetailTitleView titleView;
    nominal type descriptor for Combine.AnyPublisher ChatGrokBot.GrokBotHotelDetail ? nominal type descriptor for Swift.Never updates;
    Swift.String? chosenRateID;
    ChatGrokBot.GrokBotHotelDetail detail;
    Swift.Bool isGone;
    Swift.Bool showsAllAmenities;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC11ChatGrokBot43GrokBotHotelDetailTrayContentViewController_h */
