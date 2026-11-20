//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14DMConversation32KMPConversationPermissionsWorker_h
#define _TtC14DMConversation32KMPConversationPermissionsWorker_h
@import Foundation;

@class _$s11XFoundation13CombineWorkerCN, _$s14ChatModelsCore14ConversationIDOMn, _$s14ChatModelsCore6UserIDVMn, _$sSo014Subsystem_ios_B23Arm64_mainXChatUserRepo_p, _$sSo014Subsystem_ios_B29Arm64_mainDmPermissionFetcher_p;

@interface DMConversation.KMPConversationPermissionsWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    nominal type descriptor for ChatModelsCore.ConversationID conversationID;
    __C.Subsystem_ios_iosArm64_mainDmPermissionFetcher dmPermissionFetcher;
    nominal type descriptor for ChatModelsCore.UserID owner;
    __C.Subsystem_ios_iosArm64_mainXChatUserRepo usersRepo;
}

@end

#endif /* _TtC14DMConversation32KMPConversationPermissionsWorker_h */
