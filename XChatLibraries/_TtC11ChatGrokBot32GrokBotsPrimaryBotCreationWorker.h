//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot32GrokBotsPrimaryBotCreationWorker_h
#define _TtC11ChatGrokBot32GrokBotsPrimaryBotCreationWorker_h
@import Foundation;

@class ChatGrokBot.GrokBotHostSettingsStore, ChatGrokBot.GrokBotScribing, ChatGrokBot.GrokBotSession, ChatGrokBot.GrokBotsDestinationStream, ChatGrokBot.GrokBotsPrimaryBotCreationStream, Swift.Bool, _$s11XFoundation13CombineWorkerCN, _$sSSSg;

@interface ChatGrokBot.GrokBotsPrimaryBotCreationWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotsPrimaryBotCreationStream creationStream;
    ChatGrokBot.GrokBotsDestinationStream destinationStream;
    ChatGrokBot.GrokBotHostSettingsStore hostSettingsStore;
    Swift.Bool isFastOpenEnabled;
    ChatGrokBot.GrokBotScribing scriber;
    ChatGrokBot.GrokBotSession session;
    Swift.String? firstBotAgentID;
    Swift.Bool hasRequestedAutomaticCreation;
}

@end

#endif /* _TtC11ChatGrokBot32GrokBotsPrimaryBotCreationWorker_h */
