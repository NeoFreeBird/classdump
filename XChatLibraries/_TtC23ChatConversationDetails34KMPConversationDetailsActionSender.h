//
#ifndef _TtC23ChatConversationDetails34KMPConversationDetailsActionSender_h
#define _TtC23ChatConversationDetails34KMPConversationDetailsActionSender_h
@import Foundation;

@class _$sSD -> ChatModelsCore.UserID _$sSo014Subsystem_ios_B21Arm64_mainParticipantC, _$sSo014Subsystem_ios_B27Arm64_mainBaseDmObjectGraph_p, _$sSo6NSLockC, _TtCs12_SwiftObject;

@interface ChatConversationDetails.KMPConversationDetailsActionSender : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.Subsystem_ios_iosArm64_mainBaseDmObjectGraph objectGraph;
    __C.NSLock pendingParticipantsLock;
    Swift.Dictionary -> ChatModelsCore.UserID __C.Subsystem_ios_iosArm64_mainParticipant pendingParticipants;
}

@end

#endif /* _TtC23ChatConversationDetails34KMPConversationDetailsActionSender_h */
