//
#ifndef _TtC11ChatGrokBot30GrokBotMessageForwardPresenter_h
#define _TtC11ChatGrokBot30GrokBotMessageForwardPresenter_h
@import Foundation;

@class ChatGrokBot.GrokBotConversationBuilder, ChatGrokBot.GrokBotConversationListener ?, ChatGrokBot.GrokBotForwardPickerBuilder, ChatModels.ChatToastActionTriggerStream, ChatUI.ChatNavigationStackFactory, GrokBotRelay.SandAgentSummary, _$s10Foundation3URLVMn ?, _$sSo16UIViewControllerCSgXw, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotMessageForwardPresenter : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotConversationBuilder conversationBuilder;
    ChatGrokBot.GrokBotForwardPickerBuilder forwardPickerBuilder;
    ChatUI.ChatNavigationStackFactory navigationStackFactory;
    GrokBotRelay.SandAgentSummary summary;
    ChatModels.ChatToastActionTriggerStream toastActionTriggerStream;
    ChatGrokBot.GrokBotConversationListener ? conversationListener;
    weak __C.UIViewController? presenter;
    nominal type descriptor for Foundation.URL ? forwardingFileURL;
}

@end

#endif /* _TtC11ChatGrokBot30GrokBotMessageForwardPresenter_h */
