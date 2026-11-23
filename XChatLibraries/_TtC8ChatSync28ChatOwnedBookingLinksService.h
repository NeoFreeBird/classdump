//
#ifndef _TtC8ChatSync28ChatOwnedBookingLinksService_h
#define _TtC8ChatSync28ChatOwnedBookingLinksService_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatSync.ChatBookingLinkService, ChatSyncState.ChatOwnedBookingLinksStream, ChatSyncState.ChatSessionScribing, ChatTransport.ChatGraphQLClient, _$sSDySS CallModels.CallBookingLink, _$sSi, _TtCs12_SwiftObject;

@interface ChatSync.ChatOwnedBookingLinksService : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    ChatSync.ChatBookingLinkService bookingLinkService;
    ChatTransport.ChatGraphQLClient graphQLClient;
    ChatSyncState.ChatSessionScribing scriber;
    ChatSyncState.ChatOwnedBookingLinksStream stream;
    Swift.Dictionary empty-list Swift.String CallModels.CallBookingLink savedBeforeLoad;
    Swift.Int writeGeneration;
}

@end

#endif /* _TtC8ChatSync28ChatOwnedBookingLinksService_h */
