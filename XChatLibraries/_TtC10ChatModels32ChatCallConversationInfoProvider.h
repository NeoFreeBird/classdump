//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10ChatModels32ChatCallConversationInfoProvider_h
#define _TtC10ChatModels32ChatCallConversationInfoProvider_h
@import Foundation;

@class ChatModels.ComplatPlanNameProviding, _$sSbyc, _$sSo014Subsystem_ios_B29Arm64_mainDmPermissionFetcher_p, _$sSo014Subsystem_ios_B33Arm64_mainOngoingGroupCallManager_p, _$sSo014Subsystem_ios_B34Arm64_mainConversationMetadataRepo_p, _TtCs12_SwiftObject;

@interface ChatModels.ChatCallConversationInfoProvider : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatModels.ComplatPlanNameProviding complatPlanNames;
    __C.Subsystem_ios_iosArm64_mainConversationMetadataRepo conversationMetadataRepo;
    () -> Swift.Bool isSubscriptionsVerifiedToPremiumEnabled;
    __C.Subsystem_ios_iosArm64_mainOngoingGroupCallManager ongoingGroupCallManager;
    __C.Subsystem_ios_iosArm64_mainDmPermissionFetcher permissionFetcher;
}

@end

#endif /* _TtC10ChatModels32ChatCallConversationInfoProvider_h */
