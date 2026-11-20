//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef Subsystem_ios_iosArm64_mainConversationManager_Protocol_h
#define Subsystem_ios_iosArm64_mainConversationManager_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainConversationManager

@required

/* required instance methods */
- (void)addAsAdminConvId:(id)id userId:(id)id completionHandler:(id /* block */)handler;
- (void)addAsAdminConvId:(id)id userId:(id)id completionHandler:(id /* block */)handler;
- (void)addGroupMembersConvId:(id)id newUserIds:(id)ids why:(id)why completionHandler:(id /* block */)handler;
- (void)addGroupMembersConvId:(id)id newUserIds:(id)ids why:(id)why completionHandler:(id /* block */)handler;
- (void)archiveConversationConvId:(id)id completionHandler:(id /* block */)handler;
- (void)archiveConversationConvId:(id)id completionHandler:(id /* block */)handler;
- (void)canOwnSubscriberChatWithCompletionHandler:(id /* block */)handler;
- (void)canOwnSubscriberChatWithCompletionHandler:(id /* block */)handler;
- (void)clearConversationConvId:(id)id completionHandler:(id /* block */)handler;
- (void)clearConversationConvId:(id)id completionHandler:(id /* block */)handler;
- (void)createGroupMemberIds:(id)ids overrideAdminIds:(id)ids title:(id)title legacyGroupAvatar:(id)avatar isLegacyUpgrade:(_Bool)upgrade forceCreate:(_Bool)create type:(id)type completionHandler:(id /* block */)handler;
- (void)createGroupMemberIds:(id)ids overrideAdminIds:(id)ids title:(id)title legacyGroupAvatar:(id)avatar isLegacyUpgrade:(_Bool)upgrade forceCreate:(_Bool)create type:(id)type completionHandler:(id /* block */)handler;
- (void)createGroupIosMemberIds:(id)ids adminIds:(id)ids title:(id)title type:(id)type completionHandler:(id /* block */)handler;
- (void)createGroupIosMemberIds:(id)ids adminIds:(id)ids title:(id)title type:(id)type completionHandler:(id /* block */)handler;
- (void)deleteConversationConvId:(id)id completionHandler:(id /* block */)handler;
- (void)deleteConversationConvId:(id)id completionHandler:(id /* block */)handler;
- (void)disableGroupInviteConvId:(id)id completionHandler:(id /* block */)handler;
- (void)disableGroupInviteConvId:(id)id completionHandler:(id /* block */)handler;
- (void)dmBlockConversationConvId:(id)id completionHandler:(id /* block */)handler;
- (void)dmBlockConversationConvId:(id)id completionHandler:(id /* block */)handler;
- (void)dmUnblockConversationConvId:(id)id completionHandler:(id /* block */)handler;
- (void)dmUnblockConversationConvId:(id)id completionHandler:(id /* block */)handler;
- (void)enableGroupInviteConvId:(id)id validityDuration:(id)duration affiliateUserId:(id)id completionHandler:(id /* block */)handler;
- (void)enableGroupInviteConvId:(id)id validityDuration:(id)duration affiliateUserId:(id)id completionHandler:(id /* block */)handler;
- (void)findSubscriberChatWithCompletionHandler:(id /* block */)handler;
- (void)findSubscriberChatWithCompletionHandler:(id /* block */)handler;
- (void)getInviteDetailsConvId:(id)id token:(id)token completionHandler:(id /* block */)handler;
- (void)getInviteDetailsConvId:(id)id token:(id)token completionHandler:(id /* block */)handler;
- (void)hasMessagesConvId:(id)id completionHandler:(id /* block */)handler;
- (void)hasMessagesConvId:(id)id completionHandler:(id /* block */)handler;
- (void)isCurrentUserInGroupConvId:(id)id completionHandler:(id /* block */)handler;
- (void)isCurrentUserInGroupConvId:(id)id completionHandler:(id /* block */)handler;
- (void)muteConversationConvId:(id)id completionHandler:(id /* block */)handler;
- (void)muteConversationConvId:(id)id completionHandler:(id /* block */)handler;
- (void)rejectJoinGroupConvId:(id)id userId:(id)id completionHandler:(id /* block */)handler;
- (void)rejectJoinGroupConvId:(id)id userId:(id)id completionHandler:(id /* block */)handler;
- (void)removeAsAdminConvId:(id)id userId:(id)id completionHandler:(id /* block */)handler;
- (void)removeAsAdminConvId:(id)id userId:(id)id completionHandler:(id /* block */)handler;
- (void)removeFromGroupConvId:(id)id userId:(id)id completionHandler:(id /* block */)handler;
- (void)removeFromGroupConvId:(id)id userId:(id)id completionHandler:(id /* block */)handler;
- (void)removeFromGroupConvId:(id)id userIds:(id)ids completionHandler:(id /* block */)handler;
- (void)removeFromGroupConvId:(id)id userIds:(id)ids completionHandler:(id /* block */)handler;
- (void)requestToJoinConvId:(id)id token:(id)token completionHandler:(id /* block */)handler;
- (void)requestToJoinConvId:(id)id token:(id)token completionHandler:(id /* block */)handler;
- (void)setConversationMessageTtlConvId:(id)id ttl:(id)ttl completionHandler:(id /* block */)handler;
- (void)setConversationMessageTtlConvId:(id)id ttl:(id)ttl completionHandler:(id /* block */)handler;
- (void)syncCreatorRoster;
- (void)unarchiveConversationConvId:(id)id completionHandler:(id /* block */)handler;
- (void)unarchiveConversationConvId:(id)id completionHandler:(id /* block */)handler;
- (void)unmuteConversationConvId:(id)id completionHandler:(id /* block */)handler;
- (void)unmuteConversationConvId:(id)id completionHandler:(id /* block */)handler;
- (id)updateGroupAdminSettingsConvId:(id)id adminOnlyAddMembers:(_Bool)members adminOnlyEditGroupInfo:(_Bool)info adminOnlySendMessages:(_Bool)messages adminOnlyStartCalls:(_Bool)calls adminOnlyDisappearingMessages:(_Bool)messages adminOnlyBlockScreenshots:(_Bool)screenshots;
- (id)updateGroupAdminSettingsConvId:(id)id adminOnlyAddMembers:(_Bool)members adminOnlyEditGroupInfo:(_Bool)info adminOnlySendMessages:(_Bool)messages adminOnlyStartCalls:(_Bool)calls adminOnlyDisappearingMessages:(_Bool)messages adminOnlyBlockScreenshots:(_Bool)screenshots;
- (id)updateGroupWithOptimisticUpdatesConvId:(id)id avatarOverride:(id)override titleOverride:(id)override descriptionOverride:(id)override error:(id *)error;
- (id)updateGroupWithOptimisticUpdatesConvId:(id)id avatarOverride:(id)override titleOverride:(id)override descriptionOverride:(id)override error:(id *)error;
- (void)updateScreenCaptureBlockingConvId:(id)id isEnabled:(_Bool)enabled completionHandler:(id /* block */)handler;
- (void)updateScreenCaptureBlockingConvId:(id)id isEnabled:(_Bool)enabled completionHandler:(id /* block */)handler;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainConversationManager_Protocol_h */
