//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
