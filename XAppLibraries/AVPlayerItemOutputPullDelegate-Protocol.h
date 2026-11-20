//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef AVPlayerItemOutputPullDelegate_Protocol_h
#define AVPlayerItemOutputPullDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol AVPlayerItemOutputPullDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)outputMediaDataWillChange:(id)change;
- (void)outputSequenceWasFlushed:(id)flushed;

@end

#endif /* AVPlayerItemOutputPullDelegate_Protocol_h */
