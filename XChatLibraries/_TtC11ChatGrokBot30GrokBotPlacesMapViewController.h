//
#ifndef _TtC11ChatGrokBot30GrokBotPlacesMapViewController_h
#define _TtC11ChatGrokBot30GrokBotPlacesMapViewController_h
@import Foundation;

@class ChatGrokBot.GrokBotPlaceReserve ?, ChatGrokBot.GrokBotPlaceStripView, ChatGrokBot.GrokBotPlaces, ChatGrokBot.GrokBotPlacesChipView, ChatGrokBot.GrokBotPlacesMapEmptyStateView, ChatGrokBot.GrokBotPlacesMapFilter, ChatGrokBot.GrokBotPlacesMapView, GrokBotMark.GrokBotIdentityColor, UIViewController, _$s13XDesignSystem6ButtonCMn, _$sSSSg, _$sSa -> ChatGrokBot.GrokBotPlace, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo10CLLocationCSg;

@interface ChatGrokBot.GrokBotPlacesMapViewController : UIViewController { // (Swift)
    /* instance variables */
    nominal type descriptor for XDesignSystem.Button backButton;
    GrokBotMark.GrokBotIdentityColor botColor;
    ChatGrokBot.GrokBotPlacesMapEmptyStateView emptyStateView;
    nominal type descriptor for XDesignSystem.Button filterButton;
    ChatGrokBot.GrokBotPlacesMapView mapView;
    ChatGrokBot.GrokBotPlaces places;
    ChatGrokBot.GrokBotPlacesChipView providerChipView;
    nominal type descriptor for XDesignSystem.Button recenterButton;
    ChatGrokBot.GrokBotPlaceReserve ? reserve;
    ChatGrokBot.GrokBotPlaceStripView stripView;
    ChatGrokBot.GrokBotPlacesMapFilter filter;
    Swift.String? selectedID;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
    __C.CLLocation? userLocation;
    Swift.Array -> ChatGrokBot.GrokBotPlace visiblePlaces;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (_Bool)accessibilityPerformEscape;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC11ChatGrokBot30GrokBotPlacesMapViewController_h */
