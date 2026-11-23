//
#ifndef Subsystem_ios_iosArm64_mainXChatConnectionManager_Protocol_h
#define Subsystem_ios_iosArm64_mainXChatConnectionManager_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainXChatConnectionManager

@required

/* required instance methods */
- (void)connectIfNotAlready;
- (_Bool)isSocketConnected;
- (id)observeConnectionStateIndicator;
- (void)onMeTypingConversationId:(id)id;
- (void)onMeTypingConversationId:(id)id;
- (void)retryFailedInboxPull;
- (void)userClickedOnClosedConnectionState;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainXChatConnectionManager_Protocol_h */
