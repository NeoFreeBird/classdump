//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot26GrokBotsInboxPreviewWorker_h
#define _TtC11ChatGrokBot26GrokBotsInboxPreviewWorker_h
@import Foundation;

@class ChatFeatureSwitches.ChatFeatures, ChatGrokBot.GrokBotSession, ChatGrokBot.GrokBotsInboxPreviewStream, ChatGrokBot.GrokBotsInboxPromptShownStore, _$s11XFoundation13CombineWorkerCN;

@interface ChatGrokBot.GrokBotsInboxPreviewWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatFeatureSwitches.ChatFeatures chatFeatures;
    ChatGrokBot.GrokBotSession grokBotSession;
    ChatGrokBot.GrokBotsInboxPreviewStream grokBotsInboxPreviewStream;
    ChatGrokBot.GrokBotsInboxPromptShownStore grokBotsInboxPromptShownStore;
}

@end

#endif /* _TtC11ChatGrokBot26GrokBotsInboxPreviewWorker_h */
