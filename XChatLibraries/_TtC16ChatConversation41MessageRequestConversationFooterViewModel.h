//
#ifndef _TtC16ChatConversation41MessageRequestConversationFooterViewModel_h
#define _TtC16ChatConversation41MessageRequestConversationFooterViewModel_h
@import Foundation;

@class ChatConversation.MessageRequestActing, ChatConversation.MessageRequestConversationFooterViewModelListener ?, ChatConversationServices.ConversationNavigation, ChatKotlin.ObjectGraphProvider, ChatModels.ChatToastActionTriggerStream, ChatModels.ConversationMetadataStream, ChatModelsCore.ConversationID, _$s7Combine9PublishedVMn ChatModelsCore.ChatConversationMetadata ?, _$s7Combine9PublishedVMn Swift.Bool, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo16UIViewControllerCSgXw, _TtCs12_SwiftObject;

@interface ChatConversation.MessageRequestConversationFooterViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatConversation.MessageRequestConversationFooterViewModelListener ? listener;
    weak __C.UIViewController? presenter;
    nominal type descriptor for Combine.Published ChatModelsCore.ChatConversationMetadata ? _conversationMetadata;
    nominal type descriptor for Combine.Published Swift.Bool _isLoading;
    ChatModelsCore.ConversationID conversationID;
    ChatModels.ConversationMetadataStream conversationMetadataStream;
    ChatConversationServices.ConversationNavigation conversationNavigation;
    ChatConversation.MessageRequestActing messageRequestActionSender;
    ChatKotlin.ObjectGraphProvider objectGraphProvider;
    ChatModels.ChatToastActionTriggerStream toastActionTriggerStream;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

@end

#endif /* _TtC16ChatConversation41MessageRequestConversationFooterViewModel_h */
