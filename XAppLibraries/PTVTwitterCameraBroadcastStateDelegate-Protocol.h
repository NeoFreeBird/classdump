//
#ifndef PTVTwitterCameraBroadcastStateDelegate_Protocol_h
#define PTVTwitterCameraBroadcastStateDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVTwitterCameraBroadcastStateDelegate <NSObject>

@required

/* required instance methods */
- (void)preBroadcastStateDidChange:(unsigned long long)change;
- (void)broadcastCameraDidStart;
- (void)broadcastStateDidChange:(id)change;

@optional

@end

#endif /* PTVTwitterCameraBroadcastStateDelegate_Protocol_h */
