//
#ifndef _TtC19ChatMessageRequests30KMPMessageRequestsActionWorker_h
#define _TtC19ChatMessageRequests30KMPMessageRequestsActionWorker_h
@import Foundation;

@class ChatConversationList.ConversationListStateStream, ChatMessageRequests.MessageRequestsListActionTriggerStream, _$s11XFoundation13CombineWorkerCN, _$sSo014Subsystem_ios_B32Arm64_mainXChatExceptionObserver_p, _$sSo014Subsystem_ios_B35Arm64_mainMessageRequestPreviewRepo_p, _$sSo16UIViewControllerCSgXw;

@interface ChatMessageRequests.KMPMessageRequestsActionWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatMessageRequests.MessageRequestsListActionTriggerStream actionTriggerStream;
    __C.Subsystem_ios_iosArm64_mainXChatExceptionObserver exceptionObserver;
    ChatConversationList.ConversationListStateStream listStateStream;
    __C.Subsystem_ios_iosArm64_mainMessageRequestPreviewRepo messageRequestsPreviewRepo;
    weak __C.UIViewController? presenter;
}

@end

#endif /* _TtC19ChatMessageRequests30KMPMessageRequestsActionWorker_h */
