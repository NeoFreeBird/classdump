//
#ifndef _TtC11ChatGrokBot47GrokBotCarRentalDetailTrayContentViewController_h
#define _TtC11ChatGrokBot47GrokBotCarRentalDetailTrayContentViewController_h
@import Foundation;

@class ChatGrokBot.GrokBotCarRentalDetail, ChatGrokBot.GrokBotCarRentalDetailTitleView, ChatGrokBot.GrokBotCarRentalPickupMapView, ChatGrokBot.GrokBotPlaceDetailsHeroView, Swift.Bool, _$s13XDesignSystem16TrayFootnoteViewCMn, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$s13XDesignSystem9ListItemsCMn, _$s7Combine12AnyPublisherVMn ChatGrokBot.GrokBotCarRentalDetail ? _$ss5NeverOMn, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sySSc;

@interface ChatGrokBot.GrokBotCarRentalDetailTrayContentViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    nominal type descriptor for XDesignSystem.ListItems detailsList;
    ChatGrokBot.GrokBotPlaceDetailsHeroView heroView;
    nominal type descriptor for XDesignSystem.TrayFootnoteView noteView;
    (Swift.String) -> () onSendPrompt;
    ChatGrokBot.GrokBotCarRentalPickupMapView pickUpMapView;
    ChatGrokBot.GrokBotCarRentalDetailTitleView titleView;
    nominal type descriptor for XDesignSystem.ListItems tripList;
    nominal type descriptor for Combine.AnyPublisher ChatGrokBot.GrokBotCarRentalDetail ? nominal type descriptor for Swift.Never updates;
    ChatGrokBot.GrokBotCarRentalDetail detail;
    Swift.Bool isGone;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC11ChatGrokBot47GrokBotCarRentalDetailTrayContentViewController_h */
