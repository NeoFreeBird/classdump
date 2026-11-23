//
#ifndef _TtC23ChatConversationDetails36ConversationParticipantListViewModel_h
#define _TtC23ChatConversationDetails36ConversationParticipantListViewModel_h
@import Foundation;

@class ChatConversationDetails.ConversationInfoStream, ChatConversationDetails.ConversationParticipantActionPluginPoint, ChatConversationDetails.ParticipantSheetBuilder, ChatModels.ConversationMetadataStream, ChatModelsCore.ConversationID, ChatModelsCore.UserID, _$s7Combine9PublishedVMn ChatModelsCore.ChatConversationMetadata ?, _$s7Combine9PublishedVMn Swift.Bool, _$s7Combine9PublishedVMn _$sSS, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo16UIViewControllerCSgXw, _TtCs12_SwiftObject;

@interface ChatConversationDetails.ConversationParticipantListViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatModelsCore.ConversationID conversationID;
    ChatModelsCore.UserID owner;
    weak __C.UIViewController? presenter;
    ChatConversationDetails.ConversationInfoStream conversationInfoStream;
    ChatModels.ConversationMetadataStream conversationMetadataStream;
    ChatConversationDetails.ConversationParticipantActionPluginPoint participantGroupActionPluginPoint;
    ChatConversationDetails.ParticipantSheetBuilder participantSheetBuilder;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
    nominal type descriptor for Combine.Published ChatModelsCore.ChatConversationMetadata ? _conversationMetadata;
    nominal type descriptor for Combine.Published Swift.Bool _isLegacyByConversationKey;
    nominal type descriptor for Combine.Published Swift.String _searchText;
}

@end

#endif /* _TtC23ChatConversationDetails36ConversationParticipantListViewModel_h */
