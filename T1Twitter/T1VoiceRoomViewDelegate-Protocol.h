//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1VoiceRoomViewDelegate_Protocol_h
#define T1VoiceRoomViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1VoiceRoomViewDelegate <NSObject>

@required

/* required instance methods */
- (void)voiceRoomView:(id)view didSelectUserModel:(id)model sourceView:(id)view;
- (void)voiceRoomView:(id)view didLongPressUserModel:(id)model sourceView:(id)view;
- (void)voiceRoomViewDidBeginEditingTitle:(id)title;
- (void)voiceRoomViewDidEndEditingTitle:(id)title;
- (void)voiceRoomView:(id)view didTapTitleActiveTextRange:(id)range;
- (void)voiceRoomViewDidTapMuteButton:(id)button;
- (void)voiceRoomViewDidTapSpeakButton:(id)button;
- (void)voiceRoomViewDidTapCameraButton:(id)button;
- (void)voiceRoomViewDidTapRecordingView:(id)view;
- (void)voiceRoomViewDidTapParticipantsFooterView:(id)view;
- (void)voiceRoomViewDidTapPivotView:(id)view;
- (void)voiceRoomView:(id)view didPresentPromptWithType:(long long)type;
- (void)voiceRoomView:(id)view didFollowUser:(id)user;
- (void)voiceRoomViewDidTapMusicPlayPauseButton:(id)button;
- (void)voiceRoomView:(id)view didTapOnPlaySpaceButton:(id)button;
- (void)voiceRoomView:(id)view dismissPlayspaceIfNeeded:(id)needed;
- (void)voiceRoomView:(id)view didTapOnGuestsButton:(id)button;
- (void)voiceRoomView:(id)view didTapOnGuestsAccessibilityView:(id)view;
- (void)voiceRoomView:(id)view didTapOnEmojiButton:(id)button;
- (void)voiceRoomView:(id)view didTapOnShareButton:(id)button overridingScribeContext:(id)context;
- (void)voiceRoomView:(id)view didTapOnTweetButton:(id)button;
- (void)voiceRoomView:(id)view didTapOnClosedCaptionsButton:(id)button;
- (void)voiceRoomView:(id)view didTapOnClippingButton:(id)button;
- (void)voiceRoomView:(id)view didTapOnJoinButton:(id)button;
- (void)voiceRoomView:(id)view didTapOnRequestsButton:(id)button;
- (void)voiceRoomView:(id)view didTapOnMuteEveryoneButton:(id)button;
- (void)voiceRoomView:(id)view didTapOnAdminInvitedButton:(id)button;
- (void)voiceRoomView:(id)view didSetReplayStartTime:(double)time;
- (void)voiceRoomView:(id)view didChangeContentsHeaderViewPullPercentage:(double)percentage;
- (void)voiceRoomView:(id)view didTapSuperFollowButton:(id)button;
- (void)voiceRoomView:(id)view didTapExclusiveSpaceDisclaimerWithProposedModal:(id)modal;
- (void)voiceRoomView:(id)view didTapLearnMoreWithPageURL:(id)url;
- (void)voiceRoomViewDidTapIncognitoBanner:(id)banner;

@optional

@end

#endif /* T1VoiceRoomViewDelegate_Protocol_h */
