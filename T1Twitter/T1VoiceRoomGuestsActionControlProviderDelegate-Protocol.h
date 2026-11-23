//
#ifndef T1VoiceRoomGuestsActionControlProviderDelegate_Protocol_h
#define T1VoiceRoomGuestsActionControlProviderDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1VoiceRoomGuestsActionControlProviderDelegate <NSObject>

@required

/* required instance methods */
- (void)voiceRoomGuestsActionControlProvider:(id)provider didTapOnUserWithUserReference:(id)reference onActionControl:(id)control withAction:(long long)action;
- (_Bool)voiceRoomGuestsActionControlProviderCanAddUserAsSpeaker:(id)speaker;

@optional

@end

#endif /* T1VoiceRoomGuestsActionControlProviderDelegate_Protocol_h */
