//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
