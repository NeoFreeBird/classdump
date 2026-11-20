//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBroadcastControlsDelegate_Protocol_h
#define PTVBroadcastControlsDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVBroadcastControlsDelegate <NSObject>

@required

/* required instance methods */
- (void)broadcastControlsLeave:(id)leave;
- (void)broadcastControlsStop:(id)stop;
- (void)broadcastControlsFlipCamera:(id)camera;
- (void)broadcastControlsMute:(id)mute;
- (void)broadcastControlsAudioScope:(id)scope;

@optional

@end

#endif /* PTVBroadcastControlsDelegate_Protocol_h */
