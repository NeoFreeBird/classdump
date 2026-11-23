//
#ifndef Subsystem_ios_iosArm64_mainOngoingGroupCallManager_Protocol_h
#define Subsystem_ios_iosArm64_mainOngoingGroupCallManager_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainOngoingGroupCallManager

@required

/* required instance methods */
- (void)awaitCurrentForConversationConversationId:(id)id maxPullWait:(long long)wait completionHandler:(id /* block */)handler;
- (void)awaitCurrentForConversationConversationId:(id)id maxPullWait:(long long)wait completionHandler:(id /* block */)handler;
- (id)observeForConversationConversationId:(id)id;
- (id)observeForConversationConversationId:(id)id;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainOngoingGroupCallManager_Protocol_h */
