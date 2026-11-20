//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation28MessageTapActionExpandPlugin_h
#define _TtC16ChatConversation28MessageTapActionExpandPlugin_h
@import Foundation;

@class ChatConversation.MessageTapActionPluginContext, ChatConversation.MessageTextRegistry, ChatConversationServices.ChatLinkWarningPresenter, ChatMessageViewer.MessageViewerBuilder, ChatUI.ChatNavigationStackFactory, _TtCs12_SwiftObject;

@interface ChatConversation.MessageTapActionExpandPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatConversation.MessageTapActionPluginContext context;
    ChatConversationServices.ChatLinkWarningPresenter linkWarningPresenter;
    ChatConversation.MessageTextRegistry messageTextRegistry;
    ChatMessageViewer.MessageViewerBuilder messageViewerBuilder;
    ChatUI.ChatNavigationStackFactory navigationStackFactory;
}

@end

#endif /* _TtC16ChatConversation28MessageTapActionExpandPlugin_h */
