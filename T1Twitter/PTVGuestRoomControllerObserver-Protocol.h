//
#ifndef PTVGuestRoomControllerObserver_Protocol_h
#define PTVGuestRoomControllerObserver_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVGuestRoomControllerObserver <NSObject>

@required

@optional

/* optional instance methods */
- (void)guestRoomController:(id)controller didCreateRoomWithSuccessWithRoomID:(id)id;
- (void)guestRoomController:(id)controller didFailToCreateRoomWithError:(id)error;
- (void)guestRoomControllerDidStartRoomWithSuccess:(id)success mediaKey:(id)key;
- (void)guestRoomControllerDidStartRoomWithSuccess:(id)success mediaKey:(id)key;
- (void)guestRoomController:(id)controller didFailToStartRoomWithError:(id)error;
- (void)guestRoomControllerDidJoinRoomWithSuccess:(id)success asSpeaker:(_Bool)speaker;
- (void)guestRoomControllerDidJoinRoomWithSuccess:(id)success asSpeaker:(_Bool)speaker;
- (void)guestRoomController:(id)controller didFailToJoinRoomWithError:(id)error;
- (void)guestRoomController:(id)controller didFailToPublishScheduledRoomWithError:(id)error;
- (void)guestRoomControllerDidSwitchWithSuccess:(id)success asSpeaker:(_Bool)speaker;
- (void)guestRoomControllerDidSwitchWithSuccess:(id)success asSpeaker:(_Bool)speaker;
- (void)guestRoomController:(id)controller didUpdateUsers:(id)users totalUsersCount:(unsigned long long)count;
- (void)guestRoomController:(id)controller didUpdateUsers:(id)users totalUsersCount:(unsigned long long)count;
- (void)guestRoomControllerDidUpdateAudioLevels:(id)levels;
- (void)guestRoomController:(id)controller didReceiveEmoji:(id)emoji privately:(_Bool)privately fromUser:(id)user;
- (void)guestRoomController:(id)controller didReceiveEmoji:(id)emoji privately:(_Bool)privately fromUser:(id)user;
- (void)guestRoomController:(id)controller didReceiveText:(id)text language:(id)language fromUser:(id)user;
- (void)guestRoomController:(id)controller didReceiveText:(id)text language:(id)language fromUser:(id)user;
- (void)guestRoomController:(id)controller didReceiveTranscription:(id)transcription isTranscriptionFinal:(_Bool)final language:(id)language fromUser:(id)user;
- (void)guestRoomController:(id)controller didReceiveTranscription:(id)transcription isTranscriptionFinal:(_Bool)final language:(id)language fromUser:(id)user;
- (void)guestRoomController:(id)controller didReceiveFinalTranscriptions:(id)transcriptions;
- (void)guestRoomController:(id)controller didReceiveSharingEventString:(id)string fromUser:(id)user;
- (void)guestRoomController:(id)controller didReceiveSharingEventString:(id)string fromUser:(id)user;
- (void)guestRoomController:(id)controller didReceiveInvitationToSpeakFromUser:(id)user;
- (void)guestRoomController:(id)controller didReceiveInvitationToSpeakFromUser:(id)user;
- (void)guestRoomController:(id)controller didReceiveAdminInvitationFromUser:(id)user;
- (void)guestRoomController:(id)controller didReceiveAdminInvitationFromUser:(id)user;
- (void)guestRoomController:(id)controller didReceiveAdminAcceptanceFromUser:(id)user;
- (void)guestRoomController:(id)controller didReceiveAdminAcceptanceFromUser:(id)user;
- (void)guestRoomController:(id)controller didReceiveAdminDeclinationFromUser:(id)user;
- (void)guestRoomController:(id)controller didReceiveAdminDeclinationFromUser:(id)user;
- (void)guestRoomController:(id)controller didReceiveAdminCancellationFromUser:(id)user;
- (void)guestRoomController:(id)controller didReceiveAdminCancellationFromUser:(id)user;
- (void)guestRoomController:(id)controller didReceiveAdminRemovalFromUser:(id)user;
- (void)guestRoomController:(id)controller didReceiveAdminRemovalFromUser:(id)user;
- (void)guestRoomControllerDidDetectRoomDestroyed:(id)destroyed;
- (void)guestRoomControllerDidDetectUserRemovedByAdmin:(id)admin;
- (void)guestRoomControllerDidDetectUserRemovedByAdmin:(id)admin;
- (void)guestRoomControllerDidDetectUserCancelledRequestToCallIn:(id)in;
- (void)guestRoomControllerDidDetectUserCancelledRequestToCallIn:(id)in;
- (void)guestRoomControllerDidDetectUserTransitionedToAdmin:(id)admin withSuccess:(_Bool)success;
- (void)guestRoomControllerDidDetectUserTransitionedToAdmin:(id)admin withSuccess:(_Bool)success;
- (void)guestRoomControllerDidDetectUserMutedByAdmin:(id)admin;
- (void)guestRoomControllerDidDetectUserMutedByAdmin:(id)admin;
- (void)guestRoomControllerDidDetectRoomMutedByAdmin:(id)admin muted:(_Bool)muted;
- (void)guestRoomControllerDidDetectRoomMutedByAdmin:(id)admin muted:(_Bool)muted;
- (void)guestRoomController:(id)controller didObserveAuthError:(id)error;
- (void)guestRoomControllerDidDetectUserAudioSessionDeviceRemoved:(id)removed;
- (void)guestRoomController:(id)controller didUpdatePlayback:(id)playback;
- (void)guestRoomController:(id)controller didUpdatePlayback:(id)playback;
- (void)guestRoomControllerDidUpdateLiveVideoView:(id)view;
- (void)guestRoomController:(id)controller didReceiveConferenceJoinRequestFromUser:(id)user;
- (void)guestRoomController:(id)controller didReceiveConferenceJoinRequestFromUser:(id)user;

@end

#endif /* PTVGuestRoomControllerObserver_Protocol_h */
