//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation30MessageTapActionReactionPlugin_h
#define _TtC16ChatConversation30MessageTapActionReactionPlugin_h
@import Foundation;

@class ChatConversation.ConversationActionTriggerStreamV2, ChatConversation.MessageReactionSending, ChatConversation.MessageTapActionPluginContext, ChatKotlin.ObjectGraphProvider, ChatModels.ConversationMetadataStream, _TtCs12_SwiftObject;

@interface ChatConversation.MessageTapActionReactionPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatConversation.MessageTapActionPluginContext context;
    ChatModels.ConversationMetadataStream conversationMetadataStream;
    ChatConversation.ConversationActionTriggerStreamV2 conversationActionTriggerStreamV2;
    ChatConversation.MessageReactionSending messageReactionSender;
    ChatKotlin.ObjectGraphProvider objectGraphProvider;
}

@end

#endif /* _TtC16ChatConversation30MessageTapActionReactionPlugin_h */
