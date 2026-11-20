//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC23ChatConversationDetails21SafetyNumberViewModel_h
#define _TtC23ChatConversationDetails21SafetyNumberViewModel_h
@import Foundation;

@class ChatConversationDetails.ConversationDetailsActionSending, ChatModels.ChatToastActionTriggerStream, ChatModels.ConversationMetadataStream, ChatModelsCore.UserID, _$s7Combine9PublishedVMn ChatConversationDetails.SafetyNumberCardState, _$s7Combine9PublishedVMn Swift.Bool, _$s7Combine9PublishedVMn _$sSSSg, _$s7Combine9PublishedVMn _$sSbSg, _$sSSSg, _$sSh -> _$s7Combine14AnyCancellableCMn, _TtCs12_SwiftObject;

@interface ChatConversationDetails.SafetyNumberViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published ChatConversationDetails.SafetyNumberCardState _cardState;
    nominal type descriptor for Combine.Published Swift.String? _otherUserDisplayName;
    nominal type descriptor for Combine.Published Swift.Bool? _isVerified;
    nominal type descriptor for Combine.Published Swift.Bool _isUpdatingVerified;
    ChatConversationDetails.ConversationDetailsActionSending actionSender;
    ChatModels.ConversationMetadataStream conversationMetadataStream;
    ChatModelsCore.UserID userIdentifier;
    ChatModels.ChatToastActionTriggerStream toastActionTriggerStream;
    Swift.String? previousCapturedString;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

@end

#endif /* _TtC23ChatConversationDetails21SafetyNumberViewModel_h */
