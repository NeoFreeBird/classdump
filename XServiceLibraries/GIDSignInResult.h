//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GIDSignInResult_h
#define GIDSignInResult_h
@import Foundation;

#include "GIDGoogleUser.h"

@class NSObject, NSString;

@interface GIDSignInResult : NSObject

@property (readonly, nonatomic) GIDGoogleUser *user;
@property (readonly, nonatomic) NSString *serverAuthCode;

/* instance methods */
- (id)initWithGoogleUser:(id)user serverAuthCode:(id)code;

@end

#endif /* GIDSignInResult_h */
