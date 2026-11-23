//
#ifndef _TtC16ChatConversation19MessageTextRegistry_h
#define _TtC16ChatConversation19MessageTextRegistry_h
@import Foundation;

@class ChatUtilities.UnfairLock, _$sSD -> ChatConversation.MessageFullTextKey _$sSS, _TtCs12_SwiftObject;

@interface ChatConversation.MessageTextRegistry : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatUtilities.UnfairLock lock;
    Swift.Dictionary -> ChatConversation.MessageFullTextKey Swift.String textsByKey;
}

@end

#endif /* _TtC16ChatConversation19MessageTextRegistry_h */
