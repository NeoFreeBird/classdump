//
#ifndef _TtC16ChatConversation37KMPMessageListStarterSuggestionWorker_h
#define _TtC16ChatConversation37KMPMessageListStarterSuggestionWorker_h
@import Foundation;

@class ChatModels.ConversationChatItemsStream, ChatModels.ConversationMetadataStream, ChatModels.ConversationQuickReplyStream, ChatModels.ConversationSendInitiatedStream, ChatModelsCore.ConversationID, _$s11XFoundation11AsyncWorkerCN, _$s7Combine19CurrentValueSubjectCMn _$sySb _$ss5NeverOMn, _$sSo014Subsystem_ios_B30Arm64_mainXChatFeatureSwitches_p, _$sSo014Subsystem_ios_B33Arm64_mainColdInboxSuggestionRepo_p;

@interface ChatConversation.KMPMessageListStarterSuggestionWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    __C.Subsystem_ios_iosArm64_mainColdInboxSuggestionRepo coldInboxSuggestionRepo;
    ChatModels.ConversationChatItemsStream conversationChatItemsStream;
    ChatModelsCore.ConversationID conversationID;
    ChatModels.ConversationMetadataStream conversationMetadataStream;
    ChatModels.ConversationQuickReplyStream conversationQuickReplyStream;
    ChatModels.ConversationSendInitiatedStream conversationSendInitiatedStream;
    __C.Subsystem_ios_iosArm64_mainXChatFeatureSwitches featureSwitches;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Bool nominal type descriptor for Swift.Never isOpenedFromSuggestionSubject;
}

@end

#endif /* _TtC16ChatConversation37KMPMessageListStarterSuggestionWorker_h */
