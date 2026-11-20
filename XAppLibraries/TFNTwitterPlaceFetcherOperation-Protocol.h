//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterPlaceFetcherOperation_Protocol_h
#define TFNTwitterPlaceFetcherOperation_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNTwitterPlaceFetcherOperation <NSObject>

@required

/* required instance methods */
- (void)cancel;

@optional

@end

#endif /* TFNTwitterPlaceFetcherOperation_Protocol_h */
