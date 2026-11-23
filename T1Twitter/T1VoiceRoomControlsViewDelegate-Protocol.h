//
#ifndef T1VoiceRoomControlsViewDelegate_Protocol_h
#define T1VoiceRoomControlsViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1VoiceRoomControlsViewDelegate <NSObject>

@required

/* required instance methods */
- (void)voiceRoomControlsViewDidTapMuteButton:(id)button;
- (void)voiceRoomControlsViewDidTapSpeakButton:(id)button;
- (void)voiceRoomControlsViewDidTapCameraButton:(id)button;
- (void)voiceRoomControlsView:(id)view didTapOnPlaySpaceButton:(id)button;
- (void)voiceRoomControlsView:(id)view dismissPlayspaceIfNeeded:(id)needed;
- (void)voiceRoomControlsView:(id)view didTapOnGuestsButton:(id)button;
- (void)voiceRoomControlsView:(id)view didTapOnEmojiButton:(id)button;
- (void)voiceRoomControlsView:(id)view didTapOnShareButton:(id)button overridingScribeContext:(id)context;
- (void)voiceRoomControlsView:(id)view didTapOnTweetButton:(id)button;
- (void)voiceRoomControlsView:(id)view didTapOnClosedCaptionsButton:(id)button;
- (void)voiceRoomControlsView:(id)view didTapOnJoinButton:(id)button;
- (void)voiceRoomControlsView:(id)view didTapOnClippingButton:(id)button;
- (void)voiceRoomControlsView:(id)view didSetReplayStartTime:(double)time;
- (void)voiceRoomControlsView:(id)view didTapLearnMoreWithPageURL:(id)url;
- (void)voiceRoomControlsViewDidChangePreferredHeight:(id)height;
- (void)voiceRoomControlsViewDidTapIncognitoBanner:(id)banner;

@optional

@end

#endif /* T1VoiceRoomControlsViewDelegate_Protocol_h */
