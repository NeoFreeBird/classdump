//
#ifndef _TtC16ChatConversation26MessageBookingLinkResolver_h
#define _TtC16ChatConversation26MessageBookingLinkResolver_h
@import Foundation;

@class ChatSyncState.ChatActionStream, ChatUtilities.UnfairLock, _$sShySSG, _TtCs12_SwiftObject;

@interface ChatConversation.MessageBookingLinkResolver : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Set<Swift.String> bookingLinkIDsWithOpenedBookingPage;
    ChatUtilities.UnfairLock lock;
    ChatSyncState.ChatActionStream actionStream;
}

@end

#endif /* _TtC16ChatConversation26MessageBookingLinkResolver_h */
