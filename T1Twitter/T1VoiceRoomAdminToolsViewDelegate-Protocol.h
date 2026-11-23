//
#ifndef T1VoiceRoomAdminToolsViewDelegate_Protocol_h
#define T1VoiceRoomAdminToolsViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1VoiceRoomAdminToolsViewDelegate <NSObject>

@required

/* required instance methods */
- (void)voiceRoomAdminToolsView:(id)view didTapOnRequestsButton:(id)button;
- (void)voiceRoomAdminToolsView:(id)view didTapOnMuteEveryoneButton:(id)button;
- (void)voiceRoomAdminToolsView:(id)view didTapOnAdminInvitedButton:(id)button;
- (void)voiceRoomAdminToolsView:(id)view didTapOnMusicPlayPause:(id)pause;

@optional

@end

#endif /* T1VoiceRoomAdminToolsViewDelegate_Protocol_h */
