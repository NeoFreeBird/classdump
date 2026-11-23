//
#ifndef _TtC10ChatKotlin17ChatIntentDonator_h
#define _TtC10ChatKotlin17ChatIntentDonator_h
@import Foundation;

#include "Subsystem_ios_iosArm64_mainIosIntentDonator-Protocol.h"

@class ChatKotlin.ChatINInteractionBuilder, ChatModelsCore.UserID, _TtCs12_SwiftObject;

@interface ChatKotlin.ChatIntentDonator : Swift._SwiftObject <Subsystem_ios_iosArm64_mainIosIntentDonator> { // (Swift)
    /* instance variables */
    ChatModelsCore.UserID owner;
    ChatKotlin.ChatINInteractionBuilder inInteractionBuilder;
}

/* instance methods */
- (void)donateMessageSentRequest:(id)request completionHandler:(id /* block */)handler;
- (void)deleteDonationsConversationId:(id)id completionHandler:(id /* block */)handler;
- (void)deleteAllDonationsWithCompletionHandler:(id /* block */)handler;

@end

#endif /* _TtC10ChatKotlin17ChatIntentDonator_h */
