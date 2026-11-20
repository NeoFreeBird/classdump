//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
