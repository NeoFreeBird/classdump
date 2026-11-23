//
#ifndef T1VoiceRoomCohostInviteViewControllerDelegate_Protocol_h
#define T1VoiceRoomCohostInviteViewControllerDelegate_Protocol_h
@import Foundation;

@protocol T1VoiceRoomCohostInviteViewControllerDelegate

@required

/* required instance methods */
- (void)cohostInviteViewController:(id)controller didConfirmInviteForUsers:(id)users;
- (void)cohostInviteViewController:(id)controller didCancelInviteForUsers:(id)users;

@optional

@end

#endif /* T1VoiceRoomCohostInviteViewControllerDelegate_Protocol_h */
