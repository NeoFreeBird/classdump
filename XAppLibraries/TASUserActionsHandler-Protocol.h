//
#ifndef TASUserActionsHandler_Protocol_h
#define TASUserActionsHandler_Protocol_h
@import Foundation;

@protocol TASUserActionsHandler

@required

/* required instance methods */
- (void)handleUserActionSwitchToListeningWithUser:(id)user;
- (void)handleUserActionInviteAsAdminWithUser:(id)user;
- (void)handleUserActionCancelAsAdminWithUser:(id)user;
- (void)handleUserActionRemoveAsAdminWithUser:(id)user;
- (void)handleUserActionInviteAsSpeakerWithUser:(id)user;
- (void)handleUserActionAddAsSpeakerWithUser:(id)user;
- (void)handleUserActionRemoveFromSpeakersWithUser:(id)user;
- (void)handleUserActionMuteSpeakerWithUser:(id)user;
- (void)handleUserActionAddToDenylistWithUser:(id)user;
- (void)handleUserActionRemoveFromDenylistWithUser:(id)user;
- (void)handleUserActionBlockWithUser:(id)user withAddToDenylist:(_Bool)denylist;
- (void)handleUserActionUnblockWithUser:(id)user;
- (void)handleUserActionReportWithUser:(id)user withAddToDenylist:(_Bool)denylist;

@optional

@end

#endif /* TASUserActionsHandler_Protocol_h */
