//
#ifndef _TtC16ChatConversation29KMPMessageBookingLinkResolver_h
#define _TtC16ChatConversation29KMPMessageBookingLinkResolver_h
@import Foundation;

@class ChatConversation.MessageBookingLinkSelectionStream, ChatKotlin.ObjectGraphProvider, ChatTransport.ChatBookingLinkMutationClient, ChatUtilities.UnfairLock, Swift.Bool, _$sSDyS2SG, _$sShySSG, _$sSo014Subsystem_ios_B33Arm64_mainSimpleUserEventReporter_p, _TtCs12_SwiftObject;

@interface ChatConversation.KMPMessageBookingLinkResolver : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Set<Swift.String> activeMutationBookingLinkIDs;
    Swift.Set<Swift.String> bookingLinkIDsWithOpenedBookingPage;
    ChatConversation.MessageBookingLinkSelectionStream bookingLinkSelectionStream;
    Swift.Bool isPINEntryEnabled;
    ChatUtilities.UnfairLock lock;
    ChatTransport.ChatBookingLinkMutationClient mutationClient;
    ChatKotlin.ObjectGraphProvider objectGraphProvider;
    [Swift.String : Swift.String] submittedPINsByBookingLinkID;
    __C.Subsystem_ios_iosArm64_mainSimpleUserEventReporter userEventReporter;
}

@end

#endif /* _TtC16ChatConversation29KMPMessageBookingLinkResolver_h */
