//
#ifndef _TtC17GrokVoiceRealtime19WebSocketConnection_h
#define _TtC17GrokVoiceRealtime19WebSocketConnection_h
@import Foundation;

@class DispatchQueue, GrokVoiceRealtime.WebSocketConnection.Configuration, GrokVoiceRealtime.WebSocketConnection.State, GrokVoiceRealtime.WebSocketProtocol ?, Swift.Bool, _$s10Foundation10URLRequestVMn ?, _$s10Foundation10URLRequestVMn _$sAAcSg, _$s7Combine18PassthroughSubjectCMn GrokVoiceRealtime.WebSocketConnection.Event _$ss5NeverOMn, _$s8Dispatch0A11SpecificKeyCMn _$syt, _$s8Dispatch0A8WorkItemCMn ?, _$sSi, _TtCs12_SwiftObject;

@interface GrokVoiceRealtime.WebSocketConnection : Swift._SwiftObject { // (Swift)
    /* instance variables */
    GrokVoiceRealtime.WebSocketConnection.State connectionState;
    Swift.Bool poorConnection;
    nominal type descriptor for Combine.PassthroughSubject GrokVoiceRealtime.WebSocketConnection.Event nominal type descriptor for Swift.Never eventSubject;
    GrokVoiceRealtime.WebSocketConnection.Configuration config;
    DispatchQueue queue;
    nominal type descriptor for Dispatch.DispatchSpecificKey () queueKey;
    GrokVoiceRealtime.WebSocketProtocol ? socket;
    Swift.Bool isBotCall;
    nominal type descriptor for Foundation.URLRequest ? request;
    nominal type descriptor for Foundation.URLRequest _$sAAcSg requestMutator;
    GrokVoiceRealtime.WebSocketProtocol _$s_p nominal type descriptor for Foundation.URLRequest function type (escaping) socketFactory;
    Swift.Int reconnectAttempts;
    nominal type descriptor for Dispatch.DispatchWorkItem ? pendingReconnect;
    nominal type descriptor for Dispatch.DispatchWorkItem ? connectionTimeoutWork;
    Swift.Bool isExhausted;
    Swift.Bool isIntentionalDisconnect;
}

@end

#endif /* _TtC17GrokVoiceRealtime19WebSocketConnection_h */
