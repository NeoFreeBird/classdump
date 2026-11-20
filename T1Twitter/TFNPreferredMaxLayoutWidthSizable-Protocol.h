//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
