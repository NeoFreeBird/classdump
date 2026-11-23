//
#ifndef _TtC11ChatGrokBot30GrokBotHotelsMapViewController_h
#define _TtC11ChatGrokBot30GrokBotHotelsMapViewController_h
@import Foundation;

@class ChatGrokBot.GrokBotHotels, ChatGrokBot.GrokBotHotelsMapPanelView, ChatGrokBot.GrokBotHotelsMapView, Swift.Bool, UIViewController, _$s13XDesignSystem6ButtonCMn, _$s7Combine12AnyPublisherVMn ChatGrokBot.GrokBotHotels ? _$ss5NeverOMn, _$sSSSg, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sySSc;

@interface ChatGrokBot.GrokBotHotelsMapViewController : UIViewController { // (Swift)
    /* instance variables */
    nominal type descriptor for XDesignSystem.Button backButton;
    ChatGrokBot.GrokBotHotelsMapView mapView;
    (Swift.String) -> () onSendPrompt;
    ChatGrokBot.GrokBotHotelsMapPanelView panelView;
    nominal type descriptor for Combine.AnyPublisher ChatGrokBot.GrokBotHotels ? nominal type descriptor for Swift.Never updates;
    ChatGrokBot.GrokBotHotels hotels;
    Swift.Bool isGone;
    Swift.String? selectedID;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (_Bool)accessibilityPerformEscape;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC11ChatGrokBot30GrokBotHotelsMapViewController_h */
