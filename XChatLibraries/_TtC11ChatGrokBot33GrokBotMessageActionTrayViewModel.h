//
#ifndef _TtC11ChatGrokBot33GrokBotMessageActionTrayViewModel_h
#define _TtC11ChatGrokBot33GrokBotMessageActionTrayViewModel_h
@import Foundation;

@class ChatGrokBot.GrokBotConversationViewModel, ChatGrokBot.GrokBotMessageActionSheetViewModel, ChatGrokBot.GrokBotMessageActionSource, ChatGrokBot.GrokBotMessageViewModel, ChatGrokBot.GrokBotScribing, _$sSa -> ChatMessageActionTray.MessageActionTrayAction, _$sSo25UIImpactFeedbackGeneratorC, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotMessageActionTrayViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> ChatMessageActionTray.MessageActionTrayAction trayActions;
    ChatGrokBot.GrokBotConversationViewModel conversationViewModel;
    ChatGrokBot.GrokBotMessageViewModel message;
    ChatGrokBot.GrokBotMessageActionSheetViewModel quickReactionsViewModel;
    ChatGrokBot.GrokBotScribing scriber;
    ChatGrokBot.GrokBotMessageActionSource source;
    __C.UIImpactFeedbackGenerator feedbackGenerator;
}

@end

#endif /* _TtC11ChatGrokBot33GrokBotMessageActionTrayViewModel_h */
