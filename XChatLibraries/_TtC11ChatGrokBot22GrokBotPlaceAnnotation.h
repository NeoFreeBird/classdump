//
#ifndef _TtC11ChatGrokBot22GrokBotPlaceAnnotation_h
#define _TtC11ChatGrokBot22GrokBotPlaceAnnotation_h
@import Foundation;

#include "MKAnnotation-Protocol.h"

@class ChatGrokBot.GrokBotPlace, NSObject, NSString, Swift.Bool, __C.CLLocationCoordinate2D;

@interface ChatGrokBot.GrokBotPlaceAnnotation : NSObject <MKAnnotation> { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotPlace place;
    Swift.Bool isSelected;
}

@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (nonatomic, readonly) NSString *title;

/* instance methods */
- (id)init;

@end

#endif /* _TtC11ChatGrokBot22GrokBotPlaceAnnotation_h */
