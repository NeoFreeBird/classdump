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
