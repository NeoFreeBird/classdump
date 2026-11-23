//
#ifndef _TtC16ChatConversation45ConversationPushNotificationSuppressionWorker_h
#define _TtC16ChatConversation45ConversationPushNotificationSuppressionWorker_h
@import Foundation;

@class ChatConversation.ConversationViewVisibilityStream, ChatConversationServices.ConversationSource, ChatModels.NotificationSuppressionStream, ChatModelsCore.ConversationID, _$s11XFoundation13CombineWorkerCN;

@interface ChatConversation.ConversationPushNotificationSuppressionWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatModelsCore.ConversationID conversationID;
    ChatConversationServices.ConversationSource conversationSource;
    ChatModels.NotificationSuppressionStream notificationSuppressionStream;
    ChatConversation.ConversationViewVisibilityStream viewVisibilityStream;
}

@end

#endif /* _TtC16ChatConversation45ConversationPushNotificationSuppressionWorker_h */
