//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBroadcastIntroViewDelegate_Protocol_h
#define PTVBroadcastIntroViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVBroadcastIntroViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)broadcastIntroViewDidReceiveTap:(id)tap;
- (void)broadcastIntroViewDidTapBroadcaster:(id)broadcaster;

@end

#endif /* PTVBroadcastIntroViewDelegate_Protocol_h */
