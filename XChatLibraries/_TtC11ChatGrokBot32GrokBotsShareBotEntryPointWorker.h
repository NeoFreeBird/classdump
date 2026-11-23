//
#ifndef _TtC11ChatGrokBot32GrokBotsShareBotEntryPointWorker_h
#define _TtC11ChatGrokBot32GrokBotsShareBotEntryPointWorker_h
@import Foundation;

@class ChatFeatureSwitches.ChatFeatures, ChatGrokBot.GrokBotAvailabilityStream, ChatGrokBot.GrokBotSessionProvider, ChatGrokBot.GrokBotsInboxPromptShownStore, _$s11XFoundation11AsyncWorkerCN;

@interface ChatGrokBot.GrokBotsShareBotEntryPointWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatFeatureSwitches.ChatFeatures chatFeatures;
    ChatGrokBot.GrokBotAvailabilityStream grokBotAvailabilityStream;
    ChatGrokBot.GrokBotSessionProvider grokBotSessionProvider;
    ChatGrokBot.GrokBotsInboxPromptShownStore grokBotsInboxPromptShownStore;
}

@end

#endif /* _TtC11ChatGrokBot32GrokBotsShareBotEntryPointWorker_h */
