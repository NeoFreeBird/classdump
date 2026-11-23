//
#ifndef _TtC11ChatGrokBot20GrokBotPlacesMapView_h
#define _TtC11ChatGrokBot20GrokBotPlacesMapView_h
@import Foundation;

#include "MKMapViewDelegate-Protocol.h"

@class ChatGrokBot.GrokBotPlacesUserAnnotation ?, Swift.Bool, UIView, _$sSSSg, _$sSa -> ChatGrokBot.GrokBotPlace, _$sSa -> ChatGrokBot.GrokBotPlaceAnnotation, _$sSo7UIColorC, _$sSo9MKMapViewC, _$sySScSg, __C.UIEdgeInsets;

@interface ChatGrokBot.GrokBotPlacesMapView : UIView <MKMapViewDelegate> { // (Swift)
    /* instance variables */
    ((Swift.String) -> ())? onSelectPlace;
    Swift.Bool isInteractive;
    __C.MKMapView mapView;
    __C.UIColor fillColor;
    __C.UIEdgeInsets fitInsets;
    Swift.String? fittedKey;
    Swift.Array -> ChatGrokBot.GrokBotPlaceAnnotation placeAnnotations;
    Swift.Array -> ChatGrokBot.GrokBotPlace places;
    ChatGrokBot.GrokBotPlacesUserAnnotation ? userAnnotation;
}

/* instance methods */
- (id)mapView:(id)view viewForAnnotation:(id)annotation;
- (void)mapView:(id)view didSelectAnnotationView:(id)view;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11ChatGrokBot20GrokBotPlacesMapView_h */
