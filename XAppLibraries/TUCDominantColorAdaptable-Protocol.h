//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCDominantColorAdaptable_Protocol_h
#define TUCDominantColorAdaptable_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class UIColor;

@protocol TUCDominantColorAdaptable <NSObject>

@required

@property (readonly, nonatomic) UIColor *dominantColor;

/* required instance methods */
- (id)withDominantColor:(id)color;

@optional

@end

#endif /* TUCDominantColorAdaptable_Protocol_h */
