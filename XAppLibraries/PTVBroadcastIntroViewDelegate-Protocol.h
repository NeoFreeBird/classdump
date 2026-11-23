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
