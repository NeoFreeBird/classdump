//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation29KMPMessageBookingLinkResolver_h
#define _TtC16ChatConversation29KMPMessageBookingLinkResolver_h
@import Foundation;

@class ChatKotlin.ObjectGraphProvider, ChatUtilities.UnfairLock, _$sShySSG, _TtCs12_SwiftObject;

@interface ChatConversation.KMPMessageBookingLinkResolver : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Set<Swift.String> bookingLinkIDsWithOpenedBookingPage;
    ChatUtilities.UnfairLock lock;
    ChatKotlin.ObjectGraphProvider objectGraphProvider;
}

@end

#endif /* _TtC16ChatConversation29KMPMessageBookingLinkResolver_h */
