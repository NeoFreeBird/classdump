//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6AVChat33AVChatWebRTCPeriscopeAPISignaling_h
#define _TtC6AVChat33AVChatWebRTCPeriscopeAPISignaling_h
@import Foundation;

@class Builtin.DefaultActorStorage, Chat.AVChatPollingRetryPolicy ?, Chat.AVChatWebRTCPeriscopeAPI, Swift.Bool, _$sSS, _$sSbyYacSg, _$sScTyyt _$ss5NeverOMn ?, _$sSi, _$sSo8NSNumberCSg, _$ss5ErrorMp _$scSg ->, _$sySS_ _$ss5ErrorMp _$stcSg, _$sySScSg, _$sySaySo25PTVAVChatSignalingMessageCGcSg, _TtCs12_SwiftObject;

@interface AVChat.AVChatWebRTCPeriscopeAPISignaling : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    oneway _Atomic Chat.AVChatWebRTCPeriscopeAPI api;
    Swift.String broadcastID;
    Swift.Bool keepsOnlyNewestSessionDescriptions;
    oneway _Atomic Chat.AVChatPollingRetryPolicy ? retryPolicy;
    Swift.Bool boundsConnectingByDeadline;
    __C.NSNumber? cursor;
    Swift.Bool isRunning;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? pollingTask;
    Swift.Int generation;
    (([__C.PTVAVChatSignalingMessage]) -> ())? messageHandler;
    protocol descriptor for Swift.Error _$scSg -> errorHandler;
     empty-list Swift.String first-element-marker  protocol descriptor for Swift.Error _$stcSg errorLogger;
    ((Swift.String) -> ())? logger;
    (() async -> Swift.Bool)? keepsPollingThroughFailures;
}

@end

#endif /* _TtC6AVChat33AVChatWebRTCPeriscopeAPISignaling_h */
