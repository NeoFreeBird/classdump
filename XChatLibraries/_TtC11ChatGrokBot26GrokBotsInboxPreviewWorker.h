//
#ifndef _TtC11ChatGrokBot26GrokBotsInboxPreviewWorker_h
#define _TtC11ChatGrokBot26GrokBotsInboxPreviewWorker_h
@import Foundation;

@class ChatFeatureSwitches.ChatFeatures, ChatGrokBot.GrokBotAvailabilityStream, ChatGrokBot.GrokBotSession, ChatGrokBot.GrokBotsInboxPreviewStream, ChatGrokBot.GrokBotsInboxPromptShownStore, _$s11XFoundation13CombineWorkerCN;

@interface ChatGrokBot.GrokBotsInboxPreviewWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatFeatureSwitches.ChatFeatures chatFeatures;
    ChatGrokBot.GrokBotAvailabilityStream grokBotAvailabilityStream;
    ChatGrokBot.GrokBotSession grokBotSession;
    ChatGrokBot.GrokBotsInboxPreviewStream grokBotsInboxPreviewStream;
    ChatGrokBot.GrokBotsInboxPromptShownStore grokBotsInboxPromptShownStore;
}

@end

#endif /* _TtC11ChatGrokBot26GrokBotsInboxPreviewWorker_h */
