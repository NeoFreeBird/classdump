//
#ifndef TUCDominantColorSource_Protocol_h
#define TUCDominantColorSource_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class UIColor;

@protocol TUCDominantColorSource <NSObject>

@required

@property (retain, nonatomic) UIColor *sourceDominantColor;

@optional

@end

#endif /* TUCDominantColorSource_Protocol_h */
