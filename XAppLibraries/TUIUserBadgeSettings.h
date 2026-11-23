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
