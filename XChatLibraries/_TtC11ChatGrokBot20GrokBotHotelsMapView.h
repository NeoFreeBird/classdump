//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot20GrokBotHotelsMapView_h
#define _TtC11ChatGrokBot20GrokBotHotelsMapView_h
@import Foundation;

#include "MKMapViewDelegate-Protocol.h"

@class ChatGrokBot.GrokBotHotel _$scSg ->, UIView, _$sSSSg, _$sSa -> ChatGrokBot.GrokBotHotel, _$sSa -> ChatGrokBot.GrokBotHotelAnnotation, _$sSo9MKMapViewC, __C.UIEdgeInsets;

@interface ChatGrokBot.GrokBotHotelsMapView : UIView <MKMapViewDelegate> { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotHotel _$scSg -> onOpenHotel;
    ChatGrokBot.GrokBotHotel _$scSg -> onSelectHotel;
    __C.MKMapView mapView;
    Swift.Array -> ChatGrokBot.GrokBotHotelAnnotation annotations;
    __C.UIEdgeInsets fitInsets;
    Swift.String? fittedKey;
    Swift.Array -> ChatGrokBot.GrokBotHotel hotels;
}

/* instance methods */
- (id)mapView:(id)view viewForAnnotation:(id)annotation;
- (void)mapView:(id)view didSelectAnnotationView:(id)view;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC11ChatGrokBot20GrokBotHotelsMapView_h */
