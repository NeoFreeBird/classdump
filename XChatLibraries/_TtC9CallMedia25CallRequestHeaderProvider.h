//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC9CallMedia25CallRequestHeaderProvider_h
#define _TtC9CallMedia25CallRequestHeaderProvider_h
@import Foundation;

@class Builtin.DefaultActorStorage, _$s11XApiService0A14HeaderProviderMp, _$s11XApiService0A16PayloadAttestingMp ?, _$s11XApiService0A21AuthenticatorProtocolMp, _$sSS, _$sSSSg, _TtCs12_SwiftObject;

@interface CallMedia.CallRequestHeaderProvider : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    Swift.String accountID;
    protocol descriptor for XApiService.XApiHeaderProvider apiHeaderProvider;
    protocol descriptor for XApiService.XApiAuthenticatorProtocol authenticator;
    protocol descriptor for XApiService.XApiPayloadAttesting ? payloadAttester;
    Swift.String? http3Host;
}

@end

#endif /* _TtC9CallMedia25CallRequestHeaderProvider_h */
