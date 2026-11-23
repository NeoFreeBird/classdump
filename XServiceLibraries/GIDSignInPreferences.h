//
#ifndef GIDSignInPreferences_h
#define GIDSignInPreferences_h
@import Foundation;

@class NSObject;

@interface GIDSignInPreferences : NSObject

/* class methods */
+ (id)googleAuthorizationServer;
+ (id)googleTokenServer;
+ (id)googleUserInfoServer;

@end

#endif /* GIDSignInPreferences_h */
