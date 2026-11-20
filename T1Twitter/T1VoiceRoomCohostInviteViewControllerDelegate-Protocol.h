//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
