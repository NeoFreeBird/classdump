//
#ifndef T1VoiceRoomUserPrivateEmojisViewDelegate_Protocol_h
#define T1VoiceRoomUserPrivateEmojisViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1VoiceRoomUserPrivateEmojisViewDelegate <NSObject>

@required

/* required instance methods */
- (void)voiceRoomUserPrivateEmojisView:(id)view didTapEmoji:(id)emoji;

@optional

@end

#endif /* T1VoiceRoomUserPrivateEmojisViewDelegate_Protocol_h */
