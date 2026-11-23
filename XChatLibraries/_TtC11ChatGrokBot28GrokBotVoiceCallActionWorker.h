//
#ifndef _TtC11ChatGrokBot28GrokBotVoiceCallActionWorker_h
#define _TtC11ChatGrokBot28GrokBotVoiceCallActionWorker_h
@import Foundation;

@class ChatGrokBot.GrokBotNavigation, ChatGrokBot.GrokBotVoiceCallActionTriggerStream, ChatGrokBot.GrokBotVoiceCallPermissionRequesting, ChatModels.ChatToastActionTriggerStream, Swift.Bool, _$s11XFoundation11AsyncWorkerCN, _$sScTyyt _$ss5NeverOMn ?;

@interface ChatGrokBot.GrokBotVoiceCallActionWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotNavigation grokBotNavigation;
    ChatGrokBot.GrokBotVoiceCallPermissionRequesting permissionRequester;
    ChatModels.ChatToastActionTriggerStream toastActionTriggerStream;
    ChatGrokBot.GrokBotVoiceCallActionTriggerStream voiceCallActionTriggerStream;
    Swift.Bool isStopped;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? startTask;
}

@end

#endif /* _TtC11ChatGrokBot28GrokBotVoiceCallActionWorker_h */
