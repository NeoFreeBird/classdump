//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
