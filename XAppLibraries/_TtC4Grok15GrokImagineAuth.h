//
#ifndef _TtC4Grok15GrokImagineAuth_h
#define _TtC4Grok15GrokImagineAuth_h
@import Foundation;

@class Builtin.DefaultActorStorage, Grok0A13Authenticable_p, _$s10Foundation3URLVMn, _$s7GrokJWT0A8JWTCacheVMn _$sSS, _$sSSSg, _$sSSSgyYaYbKcSg, _TtCs12_SwiftObject;

@interface Grok.GrokImagineAuth : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    Grok0A13Authenticable_p account;
    (@Sendable () async throws -> Swift.String?)? gatewayTokenProvider;
    nominal type descriptor for Foundation.URL endpointURL;
    nominal type descriptor for GrokJWT.GrokJWTCache Swift.String cache;
    Swift.String? lastIssuedGatewayJWT;
}

@end

#endif /* _TtC4Grok15GrokImagineAuth_h */
