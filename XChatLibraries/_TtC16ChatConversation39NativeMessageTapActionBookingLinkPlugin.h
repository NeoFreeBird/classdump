//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation39NativeMessageTapActionBookingLinkPlugin_h
#define _TtC16ChatConversation39NativeMessageTapActionBookingLinkPlugin_h
@import Foundation;

@class ChatConversation.MessageBookingLinkMoreTimesTrayBuilder, ChatConversation.MessageBookingLinkResolving, ChatConversation.MessageBookingLinkSelectionStream, ChatConversation.MessageEntityTapHandler, ChatConversation.MessageTapActionPluginContext, ChatConversationServices.ConversationNavigation, ChatSyncState.ChatActionStream, _TtCs12_SwiftObject;

@interface ChatConversation.NativeMessageTapActionBookingLinkPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatConversation.MessageBookingLinkMoreTimesTrayBuilder bookingLinkMoreTimesTrayBuilder;
    ChatConversation.MessageBookingLinkResolving bookingLinkResolver;
    ChatConversation.MessageBookingLinkSelectionStream bookingLinkSelectionStream;
    ChatConversation.MessageTapActionPluginContext context;
    ChatConversationServices.ConversationNavigation conversationNavigation;
    ChatConversation.MessageEntityTapHandler messageEntityTapHandler;
    ChatSyncState.ChatActionStream actionStream;
}

@end

#endif /* _TtC16ChatConversation39NativeMessageTapActionBookingLinkPlugin_h */
