//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
