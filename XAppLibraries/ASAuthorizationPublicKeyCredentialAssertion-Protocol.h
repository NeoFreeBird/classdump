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
