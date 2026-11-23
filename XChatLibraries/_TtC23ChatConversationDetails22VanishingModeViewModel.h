//
#ifndef _TtC23ChatConversationDetails22VanishingModeViewModel_h
#define _TtC23ChatConversationDetails22VanishingModeViewModel_h
@import Foundation;

@class ChatConversationDetails.ConversationDetailsActionSending, ChatModels.ChatToastActionTriggerStream, ChatModels.ConversationMetadataStream, ChatModelsCore.ConversationID, Swift.Bool, _$s7Combine9PublishedVMn ChatModelsCore.ChatConversationMetadata ?, _$s7Combine9PublishedVMn ChatModelsCore.VanishingMode, _$s7Combine9PublishedVMn Swift.Bool, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo16UIViewControllerCSgXw, _TtCs12_SwiftObject;

@interface ChatConversationDetails.VanishingModeViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    weak __C.UIViewController? presenter;
    nominal type descriptor for Combine.Published Swift.Bool _showError;
    nominal type descriptor for Combine.Published ChatModelsCore.ChatConversationMetadata ? _conversationMetadata;
    nominal type descriptor for Combine.Published ChatModelsCore.VanishingMode _selectedMode;
    ChatModelsCore.ConversationID conversationID;
    ChatConversationDetails.ConversationDetailsActionSending actionSender;
    ChatModels.ConversationMetadataStream conversationMetadataStream;
    ChatModels.ChatToastActionTriggerStream toastActionTriggerStream;
    Swift.Bool isVisible;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

@end

#endif /* _TtC23ChatConversationDetails22VanishingModeViewModel_h */
