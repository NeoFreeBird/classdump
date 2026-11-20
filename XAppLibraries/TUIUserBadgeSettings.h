//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUIUserBadgeSettings_h
#define TUIUserBadgeSettings_h
@import Foundation;

@class NSObject;

@interface TUIUserBadgeSettings : NSObject

/* class methods */
+ (_Bool)forceVerified;
+ (long long)forceIdentityType;
+ (_Bool)forceProtected;
+ (_Bool)forceUsernameless;

@end

#endif /* TUIUserBadgeSettings_h */
