//
#ifndef Subsystem_ios_iosArm64_mainIosIntentDonator_Protocol_h
#define Subsystem_ios_iosArm64_mainIosIntentDonator_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainIosIntentDonator

@required

/* required instance methods */
- (void)deleteAllDonationsWithCompletionHandler:(id /* block */)handler;
- (void)deleteAllDonationsWithCompletionHandler:(id /* block */)handler;
- (void)deleteDonationsConversationId:(id)id completionHandler:(id /* block */)handler;
- (void)deleteDonationsConversationId:(id)id completionHandler:(id /* block */)handler;
- (void)donateMessageSentRequest:(id)request completionHandler:(id /* block */)handler;
- (void)donateMessageSentRequest:(id)request completionHandler:(id /* block */)handler;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainIosIntentDonator_Protocol_h */
