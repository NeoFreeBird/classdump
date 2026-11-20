//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC9ChatInbox27KMPUnreadMessageCountWorker_h
#define _TtC9ChatInbox27KMPUnreadMessageCountWorker_h
@import Foundation;

@class ChatModels.UnreadMessageCountStream, _$s11XFoundation11AsyncWorkerCN, _$sSo014Subsystem_ios_B36Arm64_mainUnreadMessageCountProvider_p;

@interface ChatInbox.KMPUnreadMessageCountWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    __C.Subsystem_ios_iosArm64_mainUnreadMessageCountProvider unreadMessageCountProvider;
    ChatModels.UnreadMessageCountStream unreadMessageCountStream;
}

@end

#endif /* _TtC9ChatInbox27KMPUnreadMessageCountWorker_h */
