//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8ChatSync22ChatBookingLinkService_h
#define _TtC8ChatSync22ChatBookingLinkService_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatSyncState.ChatBookingLinkStream, ChatSyncState.ChatSessionScribing, ChatTransport.XChatGraphQLClient, _$sSDySS ChatSync.ChatBookingLinkService.Entry, _TtCs12_SwiftObject;

@interface ChatSync.ChatBookingLinkService : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    ChatTransport.XChatGraphQLClient graphQLClient;
    ChatSyncState.ChatSessionScribing scriber;
    ChatSyncState.ChatBookingLinkStream stream;
    Swift.Dictionary empty-list Swift.String ChatSync.ChatBookingLinkService.Entry entries;
}

@end

#endif /* _TtC8ChatSync22ChatBookingLinkService_h */
