//
#ifndef _TtC23ChatConversationDetails39KMPConversationAttachmentPageLoadWorker_h
#define _TtC23ChatConversationDetails39KMPConversationAttachmentPageLoadWorker_h
@import Foundation;

@class ChatConversationDetails.ConversationAttachmentPaginationStream, _$s11XFoundation11AsyncWorkerCN, _$s7Combine12AnyPublisherVMn _$syyt _$ss5NeverOMn, _$sSd, _$sSo014Subsystem_ios_B36Arm64_mainAttachmentsPaginatedLoader_p, _$sSo014Subsystem_ios_B38Arm64_mainConvDetailAttachmentCategoryC;

@interface ChatConversationDetails.KMPConversationAttachmentPageLoadWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    __C.Subsystem_ios_iosArm64_mainAttachmentsPaginatedLoader attachmentsPaginatedLoader;
    __C.Subsystem_ios_iosArm64_mainConvDetailAttachmentCategory category;
    nominal type descriptor for Combine.AnyPublisher  empty-list () nominal type descriptor for Swift.Never loadMoreRequests;
    ChatConversationDetails.ConversationAttachmentPaginationStream paginationStream;
    Swift.Double retryDelay;
}

@end

#endif /* _TtC23ChatConversationDetails39KMPConversationAttachmentPageLoadWorker_h */
