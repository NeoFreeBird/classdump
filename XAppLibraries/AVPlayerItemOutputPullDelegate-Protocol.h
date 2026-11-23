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
