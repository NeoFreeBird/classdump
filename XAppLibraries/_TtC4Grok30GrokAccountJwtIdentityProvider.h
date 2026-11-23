//
#ifndef _TtC4Grok30GrokAccountJwtIdentityProvider_h
#define _TtC4Grok30GrokAccountJwtIdentityProvider_h
@import Foundation;

@class Builtin.DefaultActorStorage, Grok.GrokAccountJwtFetching, _$s7GrokJWT0A8JWTCacheVMn Grok.GrokGatewayIdentity, _$sScT -> Grok.GrokGatewayIdentity _$ss5NeverOMn ?, _TtCs12_SwiftObject;

@interface Grok.GrokAccountJwtIdentityProvider : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    Grok.GrokAccountJwtFetching fetcher;
    nominal type descriptor for GrokJWT.GrokJWTCache Grok.GrokGatewayIdentity cache;
    Swift.Task -> Grok.GrokGatewayIdentity nominal type descriptor for Swift.Never ? inFlightFetch;
}

@end

#endif /* _TtC4Grok30GrokAccountJwtIdentityProvider_h */
