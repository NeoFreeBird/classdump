//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC9ChatInbox25GrokBotsInboxPromptWorker_h
#define _TtC9ChatInbox25GrokBotsInboxPromptWorker_h
@import Foundation;

@class ChatFeatureSwitches.ChatFeatures, ChatGrokBot.GrokBotsInboxPreviewStream, ChatGrokBot.GrokBotsInboxPromptShownStore, ChatInbox.InboxPromptTriggerStream, _$s11XFoundation11AsyncWorkerCN;

@interface ChatInbox.GrokBotsInboxPromptWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatFeatureSwitches.ChatFeatures chatFeatures;
    ChatGrokBot.GrokBotsInboxPreviewStream grokBotsInboxPreviewStream;
    ChatGrokBot.GrokBotsInboxPromptShownStore grokBotsInboxPromptShownStore;
    ChatInbox.InboxPromptTriggerStream inboxPromptTriggerStream;
}

@end

#endif /* _TtC9ChatInbox25GrokBotsInboxPromptWorker_h */
