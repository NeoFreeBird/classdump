//
#ifndef _TtC17GrokVoiceRealtime21StreamingEventManager_h
#define _TtC17GrokVoiceRealtime21StreamingEventManager_h
@import Foundation;

@class DispatchQueue, GrokVoiceRealtime.NetworkPathMonitoring ?, GrokVoiceRealtime.StreamingEventManager.WebsocketState.ConnectionQuality, GrokVoiceRealtime.VoiceTransportDelegate ?, GrokVoiceRealtime.WebSocketConnection, GrokVoiceRealtime.WebSocketPingMonitoring, Swift.Bool, _$s10Foundation11JSONDecoderCMn, _$s7Combine14AnyCancellableCMn ?, _$s7Combine18PassthroughSubjectCMn GrokVoiceRealtime.StreamingEventManager.Event _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn GrokVoiceRealtime.StreamingEventManager.WebsocketState _$ss5NeverOMn, _$s8Dispatch0A8WorkItemCMn ?, _$sSDyS2SGycSg, _$sSSSg, _$sSbyc, _$sSd, _$sSi, _$sSo6NSLockC, _TtCs12_SwiftObject;

@interface GrokVoiceRealtime.StreamingEventManager : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GrokVoiceRealtime.VoiceTransportDelegate ? delegate;
    (() -> [Swift.String : Swift.String])? authorizationHeadersProvider;
    nominal type descriptor for Combine.CurrentValueSubject GrokVoiceRealtime.StreamingEventManager.WebsocketState nominal type descriptor for Swift.Never websocketState;
    nominal type descriptor for Combine.PassthroughSubject GrokVoiceRealtime.StreamingEventManager.Event nominal type descriptor for Swift.Never eventSubject;
    nominal type descriptor for Foundation.JSONDecoder jsonDecoder;
    GrokVoiceRealtime.WebSocketConnection connection;
    GrokVoiceRealtime.NetworkPathMonitoring ? networkPathMonitor;
    Swift.Bool isOpusEnabled;
    Swift.Int retriesAtConnection;
    nominal type descriptor for Combine.AnyCancellable ? connectionEventCancellable;
    nominal type descriptor for Dispatch.DispatchWorkItem ? reconnectSuggestedGraceTimer;
    Swift.Bool isBetterPathAvailable;
    GrokVoiceRealtime.StreamingEventManager.WebsocketState.ConnectionQuality qualityBeforeInterruption;
    DispatchQueue websocketQueue;
    Swift.String? lastConversationId;
    Swift.String? lastCompanionId;
    GrokVoiceRealtime.WebSocketPingMonitoring pingMonitor;
    Swift.Double poorConnectionThresholdMs;
    __C.NSLock pongMissLock;
    Swift.Bool isTransportInterrupted;
    Swift.Int consecutivePongMisses;
    Swift.Bool ignoreNextRTTSample;
    Swift.Bool isCongested;
    Swift.Bool isDebugCongestionActive;
    () -> Swift.Bool isFastReconnectDisabled;
}

@end

#endif /* _TtC17GrokVoiceRealtime21StreamingEventManager_h */
