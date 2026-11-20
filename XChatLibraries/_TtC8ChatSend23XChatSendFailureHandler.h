//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8ChatSend23XChatSendFailureHandler_h
#define _TtC8ChatSend23XChatSendFailureHandler_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatSend.ChatSendRetryStream, ChatSync.XChatProjection, ChatSyncState.ChatConnectionStream, ChatSyncState.ChatSendNoticeStream, ChatSyncState.ChatSessionScribing, Swift.Bool, _$sSDySS _$s10Foundation4UUIDVMn, _$sSDySSSiG, _TtCs12_SwiftObject;

@interface ChatSend.XChatSendFailureHandler : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    ChatSync.XChatProjection projection;
    ChatSyncState.ChatConnectionStream connectionStream;
    ChatSyncState.ChatSendNoticeStream sendNoticeStream;
    ChatSyncState.ChatSessionScribing scriber;
    ChatSend.ChatSendRetryStream sendRetryStream;
    Swift.Bool isStopped;
    [Swift.String : Swift.Int] retryNumbers;
    Swift.Dictionary empty-list Swift.String nominal type descriptor for Foundation.UUID scheduledRetryTokens;
}

@end

#endif /* _TtC8ChatSend23XChatSendFailureHandler_h */
