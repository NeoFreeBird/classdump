//
#ifndef _TtC11ChatGrokBot30GrokBotReactionsSheetViewModel_h
#define _TtC11ChatGrokBot30GrokBotReactionsSheetViewModel_h
@import Foundation;

@class ChatGrokBot.GrokBotConversationViewModel, ChatGrokBot.GrokBotScribing, ChatGrokBot.GrokBotViewerLoading, _$s7Combine9PublishedVMn ChatModelsCore.ChatUser ?, _$s7Combine9PublishedVMn _$sySa -> ChatGrokBot.GrokBotReactor, _$sSS, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo25UIImpactFeedbackGeneratorC, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotReactionsSheetViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> ChatGrokBot.GrokBotReactor _reactors;
    nominal type descriptor for Combine.Published ChatModelsCore.ChatUser ? _viewer;
    ChatGrokBot.GrokBotConversationViewModel conversationViewModel;
    __C.UIImpactFeedbackGenerator feedbackGenerator;
    Swift.String messageID;
    ChatGrokBot.GrokBotScribing scriber;
    ChatGrokBot.GrokBotViewerLoading viewerLoader;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

@end

#endif /* _TtC11ChatGrokBot30GrokBotReactionsSheetViewModel_h */
