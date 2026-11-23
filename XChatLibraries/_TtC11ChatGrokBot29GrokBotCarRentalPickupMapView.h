//
#ifndef _TtC11ChatGrokBot29GrokBotCarRentalPickupMapView_h
#define _TtC11ChatGrokBot29GrokBotCarRentalPickupMapView_h
@import Foundation;

@class ChatGrokBot.GrokBotPlace ?, ChatGrokBot.GrokBotPlacesMapView, UIView, _$s10Foundation4DateVMn ?;

@interface ChatGrokBot.GrokBotCarRentalPickupMapView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotPlacesMapView mapView;
    nominal type descriptor for Foundation.Date ? lastOpenedAt;
    ChatGrokBot.GrokBotPlace ? place;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)traitCollectionDidChange:(id)change;
- (_Bool)accessibilityActivate;

@end

#endif /* _TtC11ChatGrokBot29GrokBotCarRentalPickupMapView_h */
