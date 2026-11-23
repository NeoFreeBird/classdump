//
#ifndef _TtC11ChatGrokBot27GrokBotPlacesUserAnnotation_h
#define _TtC11ChatGrokBot27GrokBotPlacesUserAnnotation_h
@import Foundation;

#include "MKAnnotation-Protocol.h"

@class NSObject, __C.CLLocationCoordinate2D;

@interface ChatGrokBot.GrokBotPlacesUserAnnotation : NSObject <MKAnnotation> // (Swift)

@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x0; double x1; } coordinate;

/* instance methods */
- (id)init;

@end

#endif /* _TtC11ChatGrokBot27GrokBotPlacesUserAnnotation_h */
