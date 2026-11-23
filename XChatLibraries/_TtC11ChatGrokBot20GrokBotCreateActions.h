//
#ifndef _TtC11ChatGrokBot20GrokBotCreateActions_h
#define _TtC11ChatGrokBot20GrokBotCreateActions_h
@import Foundation;

@class ChatFeatureSwitches.ChatFeatures, ChatGrokBot.GrokBotCreateActionsListener ?, ChatGrokBot.GrokBotRowActionSurface, ChatGrokBot.GrokBotScribing, ChatGrokBot.GrokBotSession, ChatGrokBot.GrokBotsInboxPreviewStream, ChatGrokBot.GrokBotsInboxPromptGate, ChatUI.ChatNavigationStackFactory, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo16UIViewControllerCSgXw, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotCreateActions : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotCreateActionsListener ? listener;
    ChatFeatureSwitches.ChatFeatures chatFeatures;
    ChatGrokBot.GrokBotsInboxPreviewStream grokBotsInboxPreviewStream;
    ChatGrokBot.GrokBotsInboxPromptGate grokBotsInboxPromptGate;
    ChatUI.ChatNavigationStackFactory navigationStackFactory;
    ChatGrokBot.GrokBotScribing scriber;
    ChatGrokBot.GrokBotSession session;
    ChatGrokBot.GrokBotRowActionSurface surface;
    weak __C.UIViewController? presenter;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

@end

#endif /* _TtC11ChatGrokBot20GrokBotCreateActions_h */
