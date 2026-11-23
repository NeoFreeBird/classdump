//
#ifndef Subsystem_ios_iosArm64_mainConversationMetadataRepo_Protocol_h
#define Subsystem_ios_iosArm64_mainConversationMetadataRepo_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainConversationMetadataRepo

@required

/* required instance methods */
- (void)generateConversationHeaderItemConvId:(id)id participantsByIdAllTime:(id)time attributes:(id)attributes completionHandler:(id /* block */)handler;
- (void)generateConversationHeaderItemConvId:(id)id participantsByIdAllTime:(id)time attributes:(id)attributes completionHandler:(id /* block */)handler;
- (id)observeAllConversationMetadatasWithKeyData;
- (id)observeConversationAttributesId:(id)id;
- (id)observeConversationAttributesId:(id)id;
- (id)observeConversationMetadataId:(id)id;
- (id)observeConversationMetadataId:(id)id;
- (id)observeConversationMetadataWithKeyDataConvId:(id)id;
- (id)observeConversationMetadataWithKeyDataConvId:(id)id;
- (id)observeConversationMetadatasIds:(id)ids;
- (id)observeConversationMetadatasIds:(id)ids;
- (id)observeConversationMetadatasWithKeyDataIds:(id)ids;
- (id)observeConversationMetadatasWithKeyDataIds:(id)ids;
- (id)observeConversationParticipantsId:(id)id;
- (id)observeConversationParticipantsId:(id)id;
- (void)resolveCustomAvatarNeedsResolving:(id)resolving;
- (void)resolveCustomAvatarNeedsResolving:(id)resolving;
- (void)retryCustomAvatarConvId:(id)id failedState:(id)state;
- (void)retryCustomAvatarConvId:(id)id failedState:(id)state;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainConversationMetadataRepo_Protocol_h */
