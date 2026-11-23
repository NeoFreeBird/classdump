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
