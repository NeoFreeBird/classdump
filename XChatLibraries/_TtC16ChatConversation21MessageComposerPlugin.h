//
#ifndef _TtC16ChatConversation21MessageComposerPlugin_h
#define _TtC16ChatConversation21MessageComposerPlugin_h
@import Foundation;

@class ChatConversation.ConversationFooterPluginContext, ChatConversationServices.ConversationConfiguration, ChatMessageComposer.MessageComposerBuilder, ChatMessageComposer.MessageComposerSendCoordinating, _TtCs12_SwiftObject;

@interface ChatConversation.MessageComposerPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatConversationServices.ConversationConfiguration configuration;
    ChatConversation.ConversationFooterPluginContext context;
    ChatMessageComposer.MessageComposerBuilder messageComposerBuilder;
    ChatMessageComposer.MessageComposerSendCoordinating messageComposerSendCoordinator;
}

@end

#endif /* _TtC16ChatConversation21MessageComposerPlugin_h */
