//
#ifndef T1VoiceRoomSelectUsersViewControllerDelegate_Protocol_h
#define T1VoiceRoomSelectUsersViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1VoiceRoomSelectUsersViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)voiceRoomSelectUsersViewController:(id)controller didSelectUsers:(id)users;
- (_Bool)voiceRoomSelectUsersViewController:(id)controller canSelectUser:(id)user;
- (unsigned long long)voiceRoomSelectUsersViewControllerOpenSpots:(id)spots;

@optional

@end

#endif /* T1VoiceRoomSelectUsersViewControllerDelegate_Protocol_h */
