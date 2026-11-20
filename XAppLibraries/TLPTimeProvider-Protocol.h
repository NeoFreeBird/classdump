//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TLPTimeProvider_Protocol_h
#define TLPTimeProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TLPTimeProvider <NSObject>

@required

/* required instance methods */
- (double)currentTime;

@optional

@end

#endif /* TLPTimeProvider_Protocol_h */
