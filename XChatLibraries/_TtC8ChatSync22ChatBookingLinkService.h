//
#ifndef _TtC8ChatSync22ChatBookingLinkService_h
#define _TtC8ChatSync22ChatBookingLinkService_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatSyncState.ChatBookingLinkStream, ChatSyncState.ChatSessionScribing, ChatTransport.ChatGraphQLClient, Swift.Bool, _$sSDySS ChatSync.ChatBookingLinkService.Entry, _TtCs12_SwiftObject;

@interface ChatSync.ChatBookingLinkService : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    ChatTransport.ChatGraphQLClient graphQLClient;
    Swift.Bool isPINEntryEnabled;
    ChatSyncState.ChatSessionScribing scriber;
    ChatSyncState.ChatBookingLinkStream stream;
    Swift.Dictionary empty-list Swift.String ChatSync.ChatBookingLinkService.Entry entries;
}

@end

#endif /* _TtC8ChatSync22ChatBookingLinkService_h */
