//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation31KMPConversationCallActionWorker_h
#define _TtC16ChatConversation31KMPConversationCallActionWorker_h
@import Foundation;

@class ChatFeatureSwitches.ChatFeatures, ChatKotlin.ObjectGraphProvider, ChatModels.CallNavigation, ChatModels.ComplatPlanNameProviding, ChatModels.ConversationCallActionTriggerStream, ChatSyncState.ChatInboxProviding, Swift.Bool, _$s11XFoundation13CombineWorkerCN;

@interface ChatConversation.KMPConversationCallActionWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatModels.CallNavigation callNavigation;
    ChatFeatureSwitches.ChatFeatures chatFeatures;
    ChatModels.ComplatPlanNameProviding complatPlanNames;
    ChatModels.ConversationCallActionTriggerStream conversationCallActionTriggerStream;
    Swift.Bool isNativeRewrite;
    ChatKotlin.ObjectGraphProvider objectGraphProvider;
    ChatSyncState.ChatInboxProviding inboxProvider;
}

@end

#endif /* _TtC16ChatConversation31KMPConversationCallActionWorker_h */
