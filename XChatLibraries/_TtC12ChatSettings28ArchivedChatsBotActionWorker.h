//
#ifndef _TtC12ChatSettings28ArchivedChatsBotActionWorker_h
#define _TtC12ChatSettings28ArchivedChatsBotActionWorker_h
@import Foundation;

@class ChatGrokBot.GrokBotAvailabilityStream, ChatGrokBot.GrokBotSession, ChatModels.ChatToastActionTriggerStream, ChatSettings.ArchivedChatsBotActionTriggerStream, ChatSettings.ArchivedChatsWorkerPluginContext, ChatSettings.ChatSettingsNavigation, _$s11XFoundation13CombineWorkerCN;

@interface ChatSettings.ArchivedChatsBotActionWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatSettings.ArchivedChatsBotActionTriggerStream actionTriggerStream;
    ChatSettings.ChatSettingsNavigation chatSettingsNavigation;
    ChatSettings.ArchivedChatsWorkerPluginContext context;
    ChatGrokBot.GrokBotAvailabilityStream grokBotAvailabilityStream;
    ChatGrokBot.GrokBotSession grokBotSession;
    ChatModels.ChatToastActionTriggerStream toastActionTriggerStream;
}

@end

#endif /* _TtC12ChatSettings28ArchivedChatsBotActionWorker_h */
