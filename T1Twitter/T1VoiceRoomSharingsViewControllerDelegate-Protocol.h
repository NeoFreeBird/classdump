//
#ifndef T1VoiceRoomSharingsViewControllerDelegate_Protocol_h
#define T1VoiceRoomSharingsViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1VoiceRoomSharingsViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)voiceRoomSharingsViewControllerDidAddSharingContent:(id)content;
- (void)voiceRoomSharingsViewController:(id)controller didTapTweet:(id)tweet;
- (void)voiceRoomSharingsViewControllerDidTapSummaryLabel:(id)label;

@end

#endif /* T1VoiceRoomSharingsViewControllerDelegate_Protocol_h */
