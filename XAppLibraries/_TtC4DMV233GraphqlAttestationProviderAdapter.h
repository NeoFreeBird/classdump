//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4DMV233GraphqlAttestationProviderAdapter_h
#define _TtC4DMV233GraphqlAttestationProviderAdapter_h
@import Foundation;

#include "Subsystem_ios_iosArm64_mainGraphqlAttestationProvider-Protocol.h"

@class NSData, NSString, Subsystem_ios_iosArm64_mainAttestationHttpMethod, _$sSS, _$sSo20TFSAPIHeaderProvider_p, _TtCs12_SwiftObject;

@interface DMV2.GraphqlAttestationProviderAdapter : Swift._SwiftObject <Subsystem_ios_iosArm64_mainGraphqlAttestationProvider> { // (Swift)
    /* instance variables */
    __C.TFSAPIHeaderProvider apiHeaderProvider;
    Swift.String accountID;
}

/* instance methods */
- (void)attestationHeadersUrl:(NSString *)url method:(Subsystem_ios_iosArm64_mainAttestationHttpMethod *)method body:(NSData *)body completionHandler:(id /* block */)handler;

@end

#endif /* _TtC4DMV233GraphqlAttestationProviderAdapter_h */
