//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14DMConversation24ConversationUpsellWorker_h
#define _TtC14DMConversation24ConversationUpsellWorker_h
@import Foundation;

@class DMConversation.ConversationUpsellStorage, DMConversation.ConversationWorkerPluginContext, DMUI.RootNavigation, _$s10ChatModels26ConversationMetadataStreamCMn, _$s11XFoundation13CombineWorkerCN, _$s23ChatConversationDetails0B23EncryptionUpsellBuilderCMn;

@interface DMConversation.ConversationUpsellWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    DMConversation.ConversationWorkerPluginContext context;
    nominal type descriptor for ChatConversationDetails.ConversationEncryptionUpsellBuilder conversationEncryptionUpsellBuilder;
    DMConversation.ConversationUpsellStorage conversationUpsellStorage;
    nominal type descriptor for ChatModels.ConversationMetadataStream conversationMetadataStream;
    DMUI.RootNavigation rootNavigation;
}

@end

#endif /* _TtC14DMConversation24ConversationUpsellWorker_h */
