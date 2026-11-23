//
#ifndef _TtC16ChatConversation33MessageTapActionBookingLinkPlugin_h
#define _TtC16ChatConversation33MessageTapActionBookingLinkPlugin_h
@import Foundation;

@class ChatConversation.MessageBookingLinkMoreTimesTrayBuilder, ChatConversation.MessageBookingLinkResolving, ChatConversation.MessageBookingLinkSelectionStream, ChatConversation.MessageEntityTapHandler, ChatConversation.MessageTapActionPluginContext, ChatConversationServices.ConversationNavigation, ChatSyncState.ChatActionStream, _TtCs12_SwiftObject;

@interface ChatConversation.MessageTapActionBookingLinkPlugin : Swift._SwiftObject { // (Swift)
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

#endif /* _TtC16ChatConversation33MessageTapActionBookingLinkPlugin_h */
