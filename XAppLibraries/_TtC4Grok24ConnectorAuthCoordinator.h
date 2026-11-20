//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4Grok24ConnectorAuthCoordinator_h
#define _TtC4Grok24ConnectorAuthCoordinator_h
@import Foundation;

@class Builtin.DefaultActorStorage, Grok.ConnectorAuthLedger, Grok.GatewayUnfairLock _$sShySSG, _$sSDySS Grok.GatewayClientToolResultSending, _$sShySSG, _TtCs12_SwiftObject;

@interface Grok.ConnectorAuthCoordinator : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    Grok.ConnectorAuthLedger ledger;
    Swift.Dictionary empty-list Swift.String Grok.GatewayClientToolResultSending parkedSessions;
    Swift.Set<Swift.String> resolvingReservations;
    Grok.GatewayUnfairLock Swift.Set<Swift.String> outstandingReservations;
}

@end

#endif /* _TtC4Grok24ConnectorAuthCoordinator_h */
