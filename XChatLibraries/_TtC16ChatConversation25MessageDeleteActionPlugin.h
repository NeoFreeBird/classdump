//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation25MessageDeleteActionPlugin_h
#define _TtC16ChatConversation25MessageDeleteActionPlugin_h
@import Foundation;

@class ChatConversation.MessageActionIdentifier, ChatConversation.MessageActionPluginContext, ChatConversation.MessageActionSection, ChatConversation.MessageActionSending, ChatKotlin.ObjectGraphProvider, ChatModels.ConversationMetadataStream, Swift.Bool, _$s6XIcons5XIconOMn ?, _TtCs12_SwiftObject;

@interface ChatConversation.MessageDeleteActionPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatConversation.MessageActionPluginContext context;
    ChatConversation.MessageActionSending messageActionSender;
    ChatModels.ConversationMetadataStream conversationMetadataStream;
    ChatConversation.MessageActionIdentifier identifier;
    ChatKotlin.ObjectGraphProvider objectGraphProvider;
    ChatConversation.MessageActionSection section;
    nominal type descriptor for XIcons.XIcon ? icon;
    Swift.Bool isDestructive;
}

@end

#endif /* _TtC16ChatConversation25MessageDeleteActionPlugin_h */
