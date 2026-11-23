//
#ifndef TFNPreferredMaxLayoutWidthSizable_Protocol_h
#define TFNPreferredMaxLayoutWidthSizable_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNPreferredMaxLayoutWidthSizable <NSObject>

@required

@property (nonatomic) double preferredMaxLayoutWidth;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

@optional

@end

#endif /* TFNPreferredMaxLayoutWidthSizable_Protocol_h */
