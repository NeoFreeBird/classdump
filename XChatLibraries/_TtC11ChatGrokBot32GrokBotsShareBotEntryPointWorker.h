//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot32GrokBotsShareBotEntryPointWorker_h
#define _TtC11ChatGrokBot32GrokBotsShareBotEntryPointWorker_h
@import Foundation;

@class ChatFeatureSwitches.ChatFeatures, ChatGrokBot.GrokBotSessionProvider, ChatGrokBot.GrokBotsInboxPromptShownStore, _$s11XFoundation11AsyncWorkerCN;

@interface ChatGrokBot.GrokBotsShareBotEntryPointWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatFeatureSwitches.ChatFeatures chatFeatures;
    ChatGrokBot.GrokBotSessionProvider grokBotSessionProvider;
    ChatGrokBot.GrokBotsInboxPromptShownStore grokBotsInboxPromptShownStore;
}

@end

#endif /* _TtC11ChatGrokBot32GrokBotsShareBotEntryPointWorker_h */
