//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13ChatTransport14XChatWebSocket_h
#define _TtC13ChatTransport14XChatWebSocket_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatSyncState.ChatSessionScribing, ChatTransport.XChatAuthTokenProvider, ChatTransport.XChatThriftCodec, ChatTransport.XChatWebSocketTaskMaking, ChatTransport.XChatWebSocketTasking ?, Swift.Bool, _$sScS -> ChatTransport.XChatWebSocketEvent, _$sScS12ContinuationVMn ChatTransport.XChatWebSocketEvent _$s_ ->, _$sScTyyt _$ss5NeverOMn ?, _$sSiSg, _TtCs12_SwiftObject;

@interface ChatTransport.XChatWebSocket : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    Swift.AsyncStream -> ChatTransport.XChatWebSocketEvent events;
    nominal type descriptor for Swift.AsyncStream.Continuation ChatTransport.XChatWebSocketEvent  first-element-marker  -> eventsContinuation;
    ChatTransport.XChatAuthTokenProvider authTokenProvider;
    ChatSyncState.ChatSessionScribing scriber;
    ChatTransport.XChatWebSocketTaskMaking taskFactory;
    ChatTransport.XChatThriftCodec codec;
    Swift.Int? reconnectCount;
    Swift.Bool isStarted;
    Swift.Bool isForeground;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? connectionTask;
    ChatTransport.XChatWebSocketTasking ? webSocketTask;
}

@end

#endif /* _TtC13ChatTransport14XChatWebSocket_h */
