//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10ChatKotlin30ChatGraphqlAttestationProvider_h
#define _TtC10ChatKotlin30ChatGraphqlAttestationProvider_h
@import Foundation;

#include "Subsystem_ios_iosArm64_mainGraphqlAttestationProvider-Protocol.h"

@class NSData, NSString, Subsystem_ios_iosArm64_mainAttestationHttpMethod, _$sSS, _$ss5Int64VMn, _TtCs12_SwiftObject;

@interface ChatKotlin.ChatGraphqlAttestationProvider : Swift._SwiftObject <Subsystem_ios_iosArm64_mainGraphqlAttestationProvider> { // (Swift)
    /* instance variables */
    Swift.String accountID;
    nominal type descriptor for Swift.Int64 userID;
}

/* instance methods */
- (void)attestationHeadersUrl:(NSString *)url method:(Subsystem_ios_iosArm64_mainAttestationHttpMethod *)method body:(NSData *)body completionHandler:(id /* block */)handler;

@end

#endif /* _TtC10ChatKotlin30ChatGraphqlAttestationProvider_h */
