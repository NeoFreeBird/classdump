//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef AVPlayerItemOutputPushDelegate_Protocol_h
#define AVPlayerItemOutputPushDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol AVPlayerItemOutputPushDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)outputSequenceWasFlushed:(id)flushed;

@end

#endif /* AVPlayerItemOutputPushDelegate_Protocol_h */
