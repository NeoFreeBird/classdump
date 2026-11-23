//
#ifndef Subsystem_ios_iosArm64_mainApiAppConfigBuildType_Protocol_h
#define Subsystem_ios_iosArm64_mainApiAppConfigBuildType_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainApiAppConfigBuildType

@required

/* required instance methods */
- (_Bool)isAlpha;
- (_Bool)isBeta;
- (_Bool)isDebug;
- (_Bool)isDogfood;
- (_Bool)isRelease;
- (_Bool)notRelease;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainApiAppConfigBuildType_Protocol_h */
