//
#ifndef _TtC10ChatKotlin20JwtEs512VerifierImpl_h
#define _TtC10ChatKotlin20JwtEs512VerifierImpl_h
@import Foundation;

#include "Subsystem_ios_iosArm64_mainJwtEs512Verifier-Protocol.h"

@class NSString, _TtCs12_SwiftObject;

@interface ChatKotlin.JwtEs512VerifierImpl : Swift._SwiftObject <Subsystem_ios_iosArm64_mainJwtEs512Verifier> // (Swift)

/* instance methods */
- (void)verifyToken:(NSString *)token jwksJson:(NSString *)json completionHandler:(id /* block */)handler;

@end

#endif /* _TtC10ChatKotlin20JwtEs512VerifierImpl_h */
