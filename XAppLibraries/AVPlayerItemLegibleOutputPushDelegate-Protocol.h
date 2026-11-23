//
#ifndef AVPlayerItemLegibleOutputPushDelegate_Protocol_h
#define AVPlayerItemLegibleOutputPushDelegate_Protocol_h
@import Foundation;

#include "AVPlayerItemOutputPushDelegate-Protocol.h"

@protocol AVPlayerItemLegibleOutputPushDelegate <AVPlayerItemOutputPushDelegate>

@required

@optional

/* optional instance methods */
- (void)legibleOutput:(id)output didOutputAttributedStrings:(id)strings nativeSampleBuffers:(id)buffers forItemTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time;

@end

#endif /* AVPlayerItemLegibleOutputPushDelegate_Protocol_h */
