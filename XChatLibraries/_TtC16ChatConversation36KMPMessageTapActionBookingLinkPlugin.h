//
#ifndef _TtC16ChatConversation36KMPMessageTapActionBookingLinkPlugin_h
#define _TtC16ChatConversation36KMPMessageTapActionBookingLinkPlugin_h
@import Foundation;

@class ChatConversation.KMPMessageBookingLinkResolver, ChatConversation.MessageBookingLinkMoreTimesTrayBuilder, ChatConversation.MessageBookingLinkSelectionStream, ChatConversation.MessageEntityTapHandler, ChatConversation.MessageTapActionPluginContext, ChatConversationServices.ConversationNavigation, ChatKotlin.ObjectGraphProvider, _TtCs12_SwiftObject;

@interface ChatConversation.KMPMessageTapActionBookingLinkPlugin : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatConversation.MessageBookingLinkMoreTimesTrayBuilder bookingLinkMoreTimesTrayBuilder;
    ChatConversation.MessageBookingLinkSelectionStream bookingLinkSelectionStream;
    ChatConversation.MessageTapActionPluginContext context;
    ChatConversationServices.ConversationNavigation conversationNavigation;
    ChatConversation.KMPMessageBookingLinkResolver kmpBookingLinkResolver;
    ChatConversation.MessageEntityTapHandler messageEntityTapHandler;
    ChatKotlin.ObjectGraphProvider objectGraphProvider;
}

@end

#endif /* _TtC16ChatConversation36KMPMessageTapActionBookingLinkPlugin_h */
