//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC9ChatInbox35ExternalAppIntegrationsPromptWorker_h
#define _TtC9ChatInbox35ExternalAppIntegrationsPromptWorker_h
@import Foundation;

@class ChatInbox.InboxPromptTriggerStream, ChatUtilities.ChatExternalAppIntegrationsProviding, _$s11XFoundation11AsyncWorkerCN;

@interface ChatInbox.ExternalAppIntegrationsPromptWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatUtilities.ChatExternalAppIntegrationsProviding externalAppIntegrationsProvider;
    ChatInbox.InboxPromptTriggerStream inboxPromptTriggerStream;
}

@end

#endif /* _TtC9ChatInbox35ExternalAppIntegrationsPromptWorker_h */
