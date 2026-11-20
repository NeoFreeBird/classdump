//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation30MessageGrokAnalyzeActionPlugin_h
#define _TtC16ChatConversation30MessageGrokAnalyzeActionPlugin_h
@import Foundation;

@class ChatConversation.MessageActionIdentifier, ChatConversation.MessageActionPluginContext, ChatConversation.MessageActionSection, ChatConversationServices.ConversationNavigation, ChatModelsCore.ConversationID, ChatUtilities.ChatAccountUserDefaulting, _$s6XIcons5XIconOMn ?, _$sSS, _TtCs12_SwiftObject;

@interface ChatConversation.MessageGrokAnalyzeActionPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatUtilities.ChatAccountUserDefaulting chatAccountDefaults;
    ChatConversation.MessageActionPluginContext context;
    ChatModelsCore.ConversationID conversationID;
    ChatConversationServices.ConversationNavigation conversationNavigation;
    ChatConversation.MessageActionIdentifier identifier;
    ChatConversation.MessageActionSection section;
    Swift.String title;
    nominal type descriptor for XIcons.XIcon ? icon;
}

@end

#endif /* _TtC16ChatConversation30MessageGrokAnalyzeActionPlugin_h */
