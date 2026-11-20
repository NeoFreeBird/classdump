//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVCompositedVideoDelegate_Protocol_h
#define PTVCompositedVideoDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVCompositedVideoDelegate <NSObject>

@required

/* required instance methods */
- (void)pipeline:(id)pipeline videoFrame:(struct __CVBuffer *)frame at:(struct { long long x0; int x1; unsigned int x2; long long x3; })at captureContext:(struct { long long x0; })context;

@optional

@end

#endif /* PTVCompositedVideoDelegate_Protocol_h */
