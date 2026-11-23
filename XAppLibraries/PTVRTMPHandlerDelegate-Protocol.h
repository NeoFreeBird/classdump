//
#ifndef PTVRTMPHandlerDelegate_Protocol_h
#define PTVRTMPHandlerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVRTMPHandlerDelegate <NSObject>

@required

/* required instance methods */
- (void)sendData:(id)data isAudio:(_Bool)audio time:(double)time;

@optional

@end

#endif /* PTVRTMPHandlerDelegate_Protocol_h */
