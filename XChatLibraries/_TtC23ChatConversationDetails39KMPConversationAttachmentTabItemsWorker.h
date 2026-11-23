//
#ifndef _TtC23ChatConversationDetails39KMPConversationAttachmentTabItemsWorker_h
#define _TtC23ChatConversationDetails39KMPConversationAttachmentTabItemsWorker_h
@import Foundation;

@class ChatConversationDetails.ConversationAttachmentListItemsBuilder, ChatConversationDetails.ConversationAttachmentListMediaStream, ChatUtilities.AttachmentMediaRegistry, _$s11XFoundation11AsyncWorkerCN, _$sSo014Subsystem_ios_B36Arm64_mainAttachmentsPaginatedLoader_p, _$sSo014Subsystem_ios_B38Arm64_mainConvDetailAttachmentCategoryC;

@interface ChatConversationDetails.KMPConversationAttachmentTabItemsWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatUtilities.AttachmentMediaRegistry attachmentMediaRegistry;
    __C.Subsystem_ios_iosArm64_mainAttachmentsPaginatedLoader attachmentsPaginatedLoader;
    __C.Subsystem_ios_iosArm64_mainConvDetailAttachmentCategory category;
    ChatConversationDetails.ConversationAttachmentListItemsBuilder itemsBuilder;
    ChatConversationDetails.ConversationAttachmentListMediaStream itemsStream;
}

@end

#endif /* _TtC23ChatConversationDetails39KMPConversationAttachmentTabItemsWorker_h */
