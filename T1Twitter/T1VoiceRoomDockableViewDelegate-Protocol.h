//
#ifndef T1VoiceRoomDockableViewDelegate_Protocol_h
#define T1VoiceRoomDockableViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1VoiceRoomDockableViewDelegate <NSObject>

@required

/* required instance methods */
- (void)voiceRoomDockableViewWasTapped:(id)tapped;
- (void)voiceRoomDockableViewCloseButtonWasTapped:(id)tapped;
- (void)voiceRoomDockableViewMuteButtonWasTapped:(id)tapped;
- (void)voiceRoomDockableViewPauseButtonWasTapped:(id)tapped;
- (void)voiceRoomDockableViewPlayButtonWasTapped:(id)tapped;
- (void)voiceRoomDockableViewSkipAheadButtonWasTapped:(id)tapped;

@optional

@end

#endif /* T1VoiceRoomDockableViewDelegate_Protocol_h */
