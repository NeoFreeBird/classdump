//
#ifndef _TtC12GrokBotRelay14BotRelayClient_h
#define _TtC12GrokBotRelay14BotRelayClient_h
@import Foundation;

@class Builtin.DefaultActorStorage, GrokBotRelay.BotRelayClientConfiguration, GrokBotRelay.BotRelayClock.Instant ?, GrokBotRelay.BotRelayConnectionDiagnostic.Kind ?, GrokBotRelay.BotRelayRefusal ?, GrokBotRelay.BotRelayTransport ?, GrokBotRelay.BotRelayTransportFactory, Swift.Bool, _$sSD -> _$s10Foundation4UUIDVMn _$sScCyyt _$ss5ErrorMp _$sG, _$sSD -> _$s10Foundation4UUIDVMn _$sScS12ContinuationVMn GrokBotRelay.BotRelayClientEvent _$s_G ->, _$sSD -> _$ss5Int64VMn _$sScC -> GrokBotRelay.BotRelayJSONValue _$ss5ErrorMp _$sG, _$sSD -> _$ss5Int64VMn _$sScTyyt _$ss5NeverOMn, _$sSDySSSiG, _$sSSSg, _$sScTyyt _$ss5NeverOMn ?, _$sShySSG, _$sSi, _$ss5Int64VMn, _TtCs12_SwiftObject;

@interface GrokBotRelay.BotRelayClient : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    GrokBotRelay.BotRelayClientConfiguration configuration;
    GrokBotRelay.BotRelayTransportFactory transportFactory;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? runTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? reconnectSleep;
    Swift.Bool isBackoffResetRequested;
    GrokBotRelay.BotRelayTransport ? activeTransport;
    Swift.Bool isConnected;
    Swift.Bool isAwaitingHeartbeatReply;
    GrokBotRelay.BotRelayRefusal ? standingRefusal;
    Swift.Bool isStopped;
    GrokBotRelay.BotRelayConnectionDiagnostic.Kind ? recycleReason;
    Swift.Int reconnectAttempt;
    Swift.Bool hasConnectedBefore;
    GrokBotRelay.BotRelayClock.Instant ? attemptStartedAt;
    GrokBotRelay.BotRelayClock.Instant ? connectedAt;
    nominal type descriptor for Swift.Int64 nextRequestId;
    Swift.Dictionary -> nominal type descriptor for Swift.Int64 Swift.CheckedContinuation -> GrokBotRelay.BotRelayJSONValue protocol descriptor for Swift.Error _$sG pendingRequests;
    Swift.Dictionary -> nominal type descriptor for Swift.Int64 Swift.Task empty-list () nominal type descriptor for Swift.Never requestTimeouts;
    Swift.Dictionary -> nominal type descriptor for Foundation.UUID Swift.CheckedContinuation empty-list () protocol descriptor for Swift.Error _$sG connectionWaiters;
    [Swift.String : Swift.Int] subscriptionRefCounts;
    Swift.Set<Swift.String> ackedSubscriptions;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? reconcileTask;
    Swift.Int reconcileGeneration;
    Swift.String? desiredViewedAgentId;
    Swift.String? reportedViewedAgentId;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? presenceSync;
    Swift.Dictionary -> nominal type descriptor for Foundation.UUID nominal type descriptor for Swift.AsyncStream.Continuation GrokBotRelay.BotRelayClientEvent _$s_G -> eventContinuations;
}

@end

#endif /* _TtC12GrokBotRelay14BotRelayClient_h */
