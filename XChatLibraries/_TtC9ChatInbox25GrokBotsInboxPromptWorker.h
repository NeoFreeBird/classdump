//
#ifndef _TtC9ChatInbox25GrokBotsInboxPromptWorker_h
#define _TtC9ChatInbox25GrokBotsInboxPromptWorker_h
@import Foundation;

@class ChatFeatureSwitches.ChatFeatures, ChatGrokBot.GrokBotAvailabilityStream, ChatGrokBot.GrokBotsInboxPreviewStream, ChatGrokBot.GrokBotsInboxPromptShownStore, ChatInbox.InboxPromptTriggerStream, _$s11XFoundation11AsyncWorkerCN;

@interface ChatInbox.GrokBotsInboxPromptWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatFeatureSwitches.ChatFeatures chatFeatures;
    ChatGrokBot.GrokBotAvailabilityStream grokBotAvailabilityStream;
    ChatGrokBot.GrokBotsInboxPreviewStream grokBotsInboxPreviewStream;
    ChatGrokBot.GrokBotsInboxPromptShownStore grokBotsInboxPromptShownStore;
    ChatInbox.InboxPromptTriggerStream inboxPromptTriggerStream;
}

@end

#endif /* _TtC9ChatInbox25GrokBotsInboxPromptWorker_h */
