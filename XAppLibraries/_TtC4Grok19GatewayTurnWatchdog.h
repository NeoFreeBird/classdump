//
#ifndef _TtC4Grok19GatewayTurnWatchdog_h
#define _TtC4Grok19GatewayTurnWatchdog_h
@import Foundation;

@class Grok.GatewayTurnWatchdog.Wait _$sYbc ->, Grok.GatewayUnfairLock _$sSi, Grok.GatewayUnfairLock _$syScTyyt _$ss5NeverOMn ?, _$sSS, _$sSbyYaYbc, _TtCs12_SwiftObject;

@interface Grok.GatewayTurnWatchdog : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String conversationId;
    @Sendable () async -> Swift.Bool isDeliveringSends;
    @Sendable () async -> Swift.Bool awaitsClientToolResult;
    Grok.GatewayTurnWatchdog.Wait _$sYbc -> onTimeout;
    Grok.GatewayUnfairLock  empty-list Swift.Task empty-list () nominal type descriptor for Swift.Never ? armedTask;
    Grok.GatewayUnfairLock Swift.Int progressCount;
}

@end

#endif /* _TtC4Grok19GatewayTurnWatchdog_h */
