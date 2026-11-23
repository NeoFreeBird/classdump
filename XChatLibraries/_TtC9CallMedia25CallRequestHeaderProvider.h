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
