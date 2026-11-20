//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVRTPStatusDelegate_Protocol_h
#define PTVRTPStatusDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVRTPStatusDelegate <NSObject>

@required

/* required instance methods */
- (void)broadcastingStarted;
- (void)onSocketClosed;
- (void)onProxyError;

@optional

@end

#endif /* PTVRTPStatusDelegate_Protocol_h */
