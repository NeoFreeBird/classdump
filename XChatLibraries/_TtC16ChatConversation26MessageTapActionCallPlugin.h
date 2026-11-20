//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation26MessageTapActionCallPlugin_h
#define _TtC16ChatConversation26MessageTapActionCallPlugin_h
@import Foundation;

@class ChatConversation.MessageTapActionPluginContext, ChatModels.CallNavigation, ChatModels.ConversationCallActionTriggerStream, ChatModels.ConversationChatItemsStream, ChatModels.ConversationMetadataStream, ChatModelsCore.ConversationID, _TtCs12_SwiftObject;

@interface ChatConversation.MessageTapActionCallPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatModels.ConversationCallActionTriggerStream conversationCallActionTriggerStream;
    ChatModels.CallNavigation callNavigation;
    ChatConversation.MessageTapActionPluginContext context;
    ChatModels.ConversationChatItemsStream conversationChatItemsStream;
    ChatModelsCore.ConversationID conversationID;
    ChatModels.ConversationMetadataStream conversationMetadataStream;
}

@end

#endif /* _TtC16ChatConversation26MessageTapActionCallPlugin_h */
