//
#ifndef _TtC23ChatConversationDetails41KMPConversationAttachmentListWorkerPlugin_h
#define _TtC23ChatConversationDetails41KMPConversationAttachmentListWorkerPlugin_h
@import Foundation;

@class ChatConversationDetails.ConversationAttachmentListMediaStream, ChatModelsCore.UserID, ChatUtilities.AttachmentMediaRegistry, Swift.Bool, _$s11XFoundation11AsyncWorkerCN, _$sSo014Subsystem_ios_B22Arm64_mainPostResolver_p, _$sSo014Subsystem_ios_B24Arm64_mainAttachmentRepo_p;

@interface ChatConversationDetails.KMPConversationAttachmentListWorkerPlugin : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    __C.Subsystem_ios_iosArm64_mainAttachmentRepo attachmentRepo;
    __C.Subsystem_ios_iosArm64_mainPostResolver postResolver;
    ChatConversationDetails.ConversationAttachmentListMediaStream mediaStream;
    ChatUtilities.AttachmentMediaRegistry attachmentMediaRegistry;
    ChatModelsCore.UserID owner;
    Swift.Bool isGroup;
}

@end

#endif /* _TtC23ChatConversationDetails41KMPConversationAttachmentListWorkerPlugin_h */
