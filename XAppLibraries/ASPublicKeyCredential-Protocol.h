//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
