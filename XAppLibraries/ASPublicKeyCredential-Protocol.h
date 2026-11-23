//
#ifndef ASPublicKeyCredential_Protocol_h
#define ASPublicKeyCredential_Protocol_h
@import Foundation;

#include "ASAuthorizationCredential-Protocol.h"

@class NSData;

@protocol ASPublicKeyCredential <ASAuthorizationCredential>

@required

@property (nonatomic, readonly) NSData *rawClientDataJSON;
@property (nonatomic, readonly) NSData *credentialID;

@optional

@end

#endif /* ASPublicKeyCredential_Protocol_h */
