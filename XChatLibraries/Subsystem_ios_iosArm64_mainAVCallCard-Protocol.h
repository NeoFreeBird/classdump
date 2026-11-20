//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef Subsystem_ios_iosArm64_mainAVCallCard_Protocol_h
#define Subsystem_ios_iosArm64_mainAVCallCard_Protocol_h
@import Foundation;

@class NSString, Subsystem_ios_iosArm64_mainKmpDuration;

@protocol Subsystem_ios_iosArm64_mainAVCallCard

@required

@property (nonatomic, readonly) NSString *broadcastId;
@property (nonatomic, readonly) Subsystem_ios_iosArm64_mainKmpDuration *duration;
@property (nonatomic, readonly) _Bool isAudioOnly;
@property (nonatomic, readonly) _Bool isGroupCall;
@property (nonatomic, readonly) _Bool isReceived;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainAVCallCard_Protocol_h */
