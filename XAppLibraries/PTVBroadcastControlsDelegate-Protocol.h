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
