//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12ChatSettings28ArchivedChatsListStateWorker_h
#define _TtC12ChatSettings28ArchivedChatsListStateWorker_h
@import Foundation;

@class ChatConversationList.ConversationListStateStream, ChatSettings.ArchivedChatsActionTriggerStream, ChatSettings.ArchivedChatsBotActionTriggerStream, ChatSettings.ArchivedChatsItemsStream, _$s11XFoundation13CombineWorkerCN;

@interface ChatSettings.ArchivedChatsListStateWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatSettings.ArchivedChatsActionTriggerStream actionTriggerStream;
    ChatSettings.ArchivedChatsBotActionTriggerStream botActionTriggerStream;
    ChatSettings.ArchivedChatsItemsStream itemsStream;
    ChatConversationList.ConversationListStateStream listStateStream;
}

@end

#endif /* _TtC12ChatSettings28ArchivedChatsListStateWorker_h */
