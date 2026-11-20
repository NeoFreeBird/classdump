//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVChatReplayModelDelegate_Protocol_h
#define PTVChatReplayModelDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVChatReplayModelDelegate <NSObject>

@required

/* required instance methods */
- (void)replayModelDidReceiveAuthenticationError:(id)error;
- (id)deliveryDateForMessage:(id)message;

@optional

/* optional instance methods */
- (void)chatReplayModelMessageDeliveryTimerDidFire:(id)fire;
- (void)chatReplayModelDidReceiveFinalTranscriptions:(id)transcriptions;

@end

#endif /* PTVChatReplayModelDelegate_Protocol_h */
