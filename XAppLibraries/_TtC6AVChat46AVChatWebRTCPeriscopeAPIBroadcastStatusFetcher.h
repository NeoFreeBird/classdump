//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6AVChat46AVChatWebRTCPeriscopeAPIBroadcastStatusFetcher_h
#define _TtC6AVChat46AVChatWebRTCPeriscopeAPIBroadcastStatusFetcher_h
@import Foundation;

@class Builtin.DefaultActorStorage, Chat.AVChatPollingRetryPolicy ?, Chat.AVChatWebRTCPeriscopeAPI, Swift.Bool, _$sSS, _$sSbSS6status_SSSg9endReasonAB23loggedInUserSessionUUIDSb9isRunningt_tcSg, _$sSbyYacSg, _$sScTyyt _$ss5NeverOMn ?, _$sSd, _$ss5ErrorMp _$scSg ->, _$sySS_ _$ss5ErrorMp _$stcSg, _$sySScSg, _TtCs12_SwiftObject;

@interface AVChat.AVChatWebRTCPeriscopeAPIBroadcastStatusFetcher : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    oneway _Atomic Chat.AVChatWebRTCPeriscopeAPI api;
    Swift.String broadcastID;
    Swift.Bool backsOffOnRateLimit;
    oneway _Atomic Chat.AVChatPollingRetryPolicy ? retryPolicy;
    Swift.Bool boundsConnectingByDeadline;
    Swift.Double connectingRequestTimeout;
    Swift.Bool isRunning;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? pollingTask;
    (((status: Swift.String, endReason: Swift.String?, loggedInUserSessionUUID: Swift.String?, isRunning: Swift.Bool)) -> Swift.Bool)? messageHandler;
    protocol descriptor for Swift.Error _$scSg -> errorHandler;
     empty-list Swift.String first-element-marker  protocol descriptor for Swift.Error _$stcSg errorLogger;
    ((Swift.String) -> ())? logger;
    (() async -> Swift.Bool)? keepsPollingThroughFailures;
}

@end

#endif /* _TtC6AVChat46AVChatWebRTCPeriscopeAPIBroadcastStatusFetcher_h */
