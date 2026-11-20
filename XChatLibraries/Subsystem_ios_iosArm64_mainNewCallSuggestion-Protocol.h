//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef Subsystem_ios_iosArm64_mainNewCallSuggestion_Protocol_h
#define Subsystem_ios_iosArm64_mainNewCallSuggestion_Protocol_h
@import Foundation;

@class NSArray, Subsystem_ios_iosArm64_mainAvCallState, Subsystem_ios_iosArm64_mainDmXConversationId;

@protocol Subsystem_ios_iosArm64_mainNewCallSuggestion

@required

@property (nonatomic, readonly) Subsystem_ios_iosArm64_mainAvCallState *callState;
@property (nonatomic, readonly) Subsystem_ios_iosArm64_mainDmXConversationId *conversationId;
@property (nonatomic, readonly) NSArray *participantIds;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainNewCallSuggestion_Protocol_h */
