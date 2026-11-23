//
#ifndef PTVBroadcastControllerDelegate_Protocol_h
#define PTVBroadcastControllerDelegate_Protocol_h
@import Foundation;

#include "PTVBroadcastControllerObserver-Protocol.h"

@protocol PTVBroadcastControllerDelegate <PTVBroadcastControllerObserver>

@required

/* required instance methods */
- (unsigned long long)broadcastControllerNTPForCurrentFrame:(id)frame;
- (unsigned long long)broadcastControllerNTPForCurrentFrame:(id)frame;
- (unsigned long long)broadcastControllerNTPForNow:(id)now;
- (unsigned long long)broadcastControllerNTPForNow:(id)now;
- (id)broadcastControllerProgramDateTime:(id)time;
- (double)broadcastControllerCurrentReplayTimeInterval:(id)interval;
- (double)broadcastControllerReplayDuration:(id)duration;

@optional

/* optional instance methods */
- (id)broadcastController:(id)controller deliveryDateForMessage:(id)message isForReplay:(_Bool)replay;
- (id)broadcastController:(id)controller deliveryDateForMessage:(id)message isForReplay:(_Bool)replay;
- (_Bool)broadcastController:(id)controller didReceiveMessage:(id)message isForReplay:(_Bool)replay;
- (_Bool)broadcastController:(id)controller didReceiveMessage:(id)message isForReplay:(_Bool)replay;
- (_Bool)broadcastControllerVirtualGiftingEnabled:(id)enabled;
- (_Bool)broadcastControllerShouldFetchBroadcastRegularly:(id)regularly;
- (void)broadcastController:(id)controller didObserveAuthErrorWithInfo:(id)info;
- (void)broadcastController:(id)controller didObserveAuthErrorWithInfo:(id)info;

@end

#endif /* PTVBroadcastControllerDelegate_Protocol_h */
