//
#ifndef T1VoiceRoomDimmingViewDelegate_Protocol_h
#define T1VoiceRoomDimmingViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1VoiceRoomDimmingViewDelegate <NSObject>

@required

/* required instance methods */
- (void)voiceRoomDimmingView:(id)view didTapSuperFollowButton:(id)button;

@optional

@end

#endif /* T1VoiceRoomDimmingViewDelegate_Protocol_h */
