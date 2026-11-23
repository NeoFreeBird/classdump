//
#ifndef Subsystem_ios_iosArm64_mainMessageSendHandler_Protocol_h
#define Subsystem_ios_iosArm64_mainMessageSendHandler_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainMessageSendHandler

@required

/* required instance methods */
- (void)canShowNotificationActionsWithCompletionHandler:(id /* block */)handler;
- (void)canShowNotificationActionsWithCompletionHandler:(id /* block */)handler;
- (void)isAdminOnlySendBlockedConvId:(id)id completionHandler:(id /* block */)handler;
- (void)isAdminOnlySendBlockedConvId:(id)id completionHandler:(id /* block */)handler;
- (void)retrySendingFailedMessageConvId:(id)id messageId:(id)id;
- (void)retrySendingFailedMessageConvId:(id)id messageId:(id)id;
- (void)retrySendingFailedMessagesEntries:(id)entries;
- (void)retrySendingFailedMessagesEntries:(id)entries;
- (void)sendParams:(id)params completionHandler:(id /* block */)handler;
- (void)sendParams:(id)params completionHandler:(id /* block */)handler;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainMessageSendHandler_Protocol_h */
