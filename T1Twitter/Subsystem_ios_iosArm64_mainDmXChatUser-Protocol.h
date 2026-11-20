//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef Subsystem_ios_iosArm64_mainDmXChatUser_Protocol_h
#define Subsystem_ios_iosArm64_mainDmXChatUser_Protocol_h
@import Foundation;

#include "Subsystem_ios_iosArm64_mainUserobjXUser-Protocol.h"

@class NSString, Subsystem_ios_iosArm64_mainBoolean, Subsystem_ios_iosArm64_mainDmCannotBeAddedToGroupReason, Subsystem_ios_iosArm64_mainDmCannotMessageReason, Subsystem_ios_iosArm64_mainDmXChatSocialProof, Subsystem_ios_iosArm64_mainKotlinInstant;

@protocol Subsystem_ios_iosArm64_mainDmXChatUser <Subsystem_ios_iosArm64_mainUserobjXUser>

@required

@property (nonatomic, readonly) _Bool canBeAddedToGroup;
@property (nonatomic, readonly) _Bool canBeAddedToLegacyGroup;
@property (nonatomic, readonly) _Bool canCreateOneOnOneCKey;
@property (nonatomic, readonly) _Bool canSendMessage;
@property (nonatomic, readonly) Subsystem_ios_iosArm64_mainBoolean *canXChatDm;
@property (nonatomic, readonly) Subsystem_ios_iosArm64_mainDmCannotBeAddedToGroupReason *cannotBeAddedToGroupReason;
@property (nonatomic, readonly) Subsystem_ios_iosArm64_mainDmCannotBeAddedToGroupReason *cannotBeAddedToLegacyGroupReason;
@property (nonatomic, readonly) Subsystem_ios_iosArm64_mainDmCannotMessageReason *cannotMessageReason;
@property (nonatomic, readonly) _Bool dmBlocking;
@property (nonatomic, readonly) _Bool hasPublicKey;
@property (nonatomic, readonly) _Bool hasWelcomeMessage;
@property (nonatomic, readonly) Subsystem_ios_iosArm64_mainBoolean *isTrusted;
@property (nonatomic, readonly) Subsystem_ios_iosArm64_mainKotlinInstant *lastUsernameChangeAt;
@property (nonatomic, readonly) NSString *nickname;
@property (nonatomic, readonly) _Bool passesPremiumCheck;
@property (nonatomic, readonly) Subsystem_ios_iosArm64_mainDmXChatSocialProof *socialProof;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainDmXChatUser_Protocol_h */
