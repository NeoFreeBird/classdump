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
