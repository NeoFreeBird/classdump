//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ASAuthorizationPublicKeyCredentialAssertion_Protocol_h
#define ASAuthorizationPublicKeyCredentialAssertion_Protocol_h
@import Foundation;

#include "ASPublicKeyCredential-Protocol.h"

@class NSData;

@protocol ASAuthorizationPublicKeyCredentialAssertion <ASPublicKeyCredential>

@required

@property (nonatomic, readonly) NSData *rawAuthenticatorData;
@property (nonatomic, readonly) NSData *userID;
@property (nonatomic, readonly) NSData *signature;

@optional

@end

#endif /* ASAuthorizationPublicKeyCredentialAssertion_Protocol_h */
