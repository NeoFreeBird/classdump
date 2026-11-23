//
#ifndef TASVoiceRoomPromptViewDelegate_Protocol_h
#define TASVoiceRoomPromptViewDelegate_Protocol_h
@import Foundation;

@protocol TASVoiceRoomPromptViewDelegate

@required

/* required instance methods */
- (void)voiceRoomPromptView:(id)view didFollowUser:(id)user;
- (void)voiceRoomPromptView:(id)view didInitiateJoinCommunityFromButton:(id)button;

@optional

@end

#endif /* TASVoiceRoomPromptViewDelegate_Protocol_h */
