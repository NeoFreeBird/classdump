//
#ifndef _TtC11ChatGrokBot26GrokBotPlaceAnnotationView_h
#define _TtC11ChatGrokBot26GrokBotPlaceAnnotationView_h
@import Foundation;

#include "MKAnnotation-Protocol.h"

@class ChatGrokBot.GrokBotPlacePhotoPinView, ChatGrokBot.GrokBotPlacePinLabel, MKAnnotationView, Swift.Bool, _$sSo6UIViewC, _$sSo7UIColorC;

@interface ChatGrokBot.GrokBotPlaceAnnotationView : MKAnnotationView { // (Swift)
    /* instance variables */
    __C.UIColor fillColor;
    __C.UIView dotCenterView;
    __C.UIView dotView;
    ChatGrokBot.GrokBotPlacePinLabel labelView;
    ChatGrokBot.GrokBotPlacePhotoPinView photoPinView;
    Swift.Bool isPicked;
}

@property (nonatomic, retain) id <MKAnnotation> annotation;

/* instance methods */
- (id)initWithAnnotation:(id)annotation reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)prepareForDisplay;
- (void)layoutSubviews;

@end

#endif /* _TtC11ChatGrokBot26GrokBotPlaceAnnotationView_h */
