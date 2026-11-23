//
#ifndef _TtC11ChatGrokBot21GrokBotPlacesCardView_h
#define _TtC11ChatGrokBot21GrokBotPlacesCardView_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class ChatGrokBot.GrokBotPlace _$s_ -> ChatGrokBot.GrokBotPlaces _$stcSg, ChatGrokBot.GrokBotPlaceStripView, ChatGrokBot.GrokBotPlaces, ChatGrokBot.GrokBotPlaces _$s_SSSgtcSg ->, ChatGrokBot.GrokBotPlacesChipView, ChatGrokBot.GrokBotPlacesMapView, GrokBotMark.GrokBotIdentityColor, UIView, _$s10Foundation3URLVMn _$scSg ->, _$s13XDesignSystem6ButtonCMn, _$sSSSg, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo10CLLocationCSg;

@interface ChatGrokBot.GrokBotPlacesCardView : UIView <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotPlacesChipView countChipView;
    nominal type descriptor for XDesignSystem.Button expandButton;
    ChatGrokBot.GrokBotPlacesMapView mapView;
    ChatGrokBot.GrokBotPlacesChipView providerChipView;
    ChatGrokBot.GrokBotPlaceStripView stripView;
    GrokBotMark.GrokBotIdentityColor botColor;
    ChatGrokBot.GrokBotPlaces _$s_SSSgtcSg -> onExpand;
    nominal type descriptor for Foundation.URL _$scSg -> onOpenLink;
    ChatGrokBot.GrokBotPlace  first-element-marker  -> ChatGrokBot.GrokBotPlaces _$stcSg onOpenPlace;
    ChatGrokBot.GrokBotPlaces places;
    Swift.String? selectedID;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
    __C.CLLocation? userLocation;
}

/* instance methods */
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)traitCollectionDidChange:(id)change;
- (void)didTapMap;

@end

#endif /* _TtC11ChatGrokBot21GrokBotPlacesCardView_h */
