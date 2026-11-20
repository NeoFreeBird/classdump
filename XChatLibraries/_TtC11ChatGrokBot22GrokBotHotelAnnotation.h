//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot22GrokBotHotelAnnotation_h
#define _TtC11ChatGrokBot22GrokBotHotelAnnotation_h
@import Foundation;

#include "MKAnnotation-Protocol.h"

@class ChatGrokBot.GrokBotHotel, NSObject, NSString, Swift.Bool, __C.CLLocationCoordinate2D;

@interface ChatGrokBot.GrokBotHotelAnnotation : NSObject <MKAnnotation> { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotHotel hotel;
    Swift.Bool isSelected;
}

@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;
@property (nonatomic, readonly) NSString *title;

/* instance methods */
- (id)init;

@end

#endif /* _TtC11ChatGrokBot22GrokBotHotelAnnotation_h */
