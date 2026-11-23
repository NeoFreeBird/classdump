//
#ifndef T1VoiceRoomReplayingControlsViewDelegate_Protocol_h
#define T1VoiceRoomReplayingControlsViewDelegate_Protocol_h
@import Foundation;

@protocol T1VoiceRoomReplayingControlsViewDelegate

@required

/* required instance methods */
- (void)voiceRoomReplayingControlsView:(id)view didTapOnClosedCaptionsButton:(id)button;
- (void)voiceRoomReplayingControlsView:(id)view didSetReplayStartTime:(double)time;
- (void)voiceRoomReplayingControlsView:(id)view didTapOnClippingButton:(id)button;

@optional

@end

#endif /* T1VoiceRoomReplayingControlsViewDelegate_Protocol_h */
