//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6AVChat19AVChatChatmanClient_h
#define _TtC6AVChat19AVChatChatmanClient_h
@import Foundation;

#include "PTVBroadcastWatcherObserver-Protocol.h"
#include "PTVChatControllerObserver-Protocol.h"

@class NSObject, _$s14TFSTwitterCore17TwitterAudiospaceCMn, _$s7Combine9PublishedVMn _$sSSSg, _$s7Combine9PublishedVMn _$sySD -> _$ss5Int64VMn AVChat.AVChatInteractiveUserInfoItems, _$sSo12PTVBroadcastC, _$sSo17TFNTwitterAccountC, _$sSo19PTVBroadcastWatcherCSg, _$sSo23PTVLoggedInUserProtocol_p;

@interface AVChat.AVChatChatmanClient : NSObject <PTVChatControllerObserver, PTVBroadcastWatcherObserver> { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount _account;
    nominal type descriptor for TFSTwitterCore.TwitterAudiospace _space;
    __C.PTVBroadcast _ptvBroadcast;
    __C.PTVLoggedInUserProtocol _periscopeAccount;
    __C.PTVBroadcastWatcher? _watcher;
    nominal type descriptor for Combine.Published Swift.String? _chatToken;
    nominal type descriptor for Combine.Published  empty-list Swift.Dictionary -> nominal type descriptor for Swift.Int64 AVChat.AVChatInteractiveUserInfoItems _chatmanInfo;
}

/* instance methods */
- (void)chatController:(id)controller didChangeChatState:(unsigned long long)state error:(id)error;
- (void)chatControllerDidChangeChatRoomAccess:(id)access;
- (void)chatController:(id)controller didReceiveQueuedMessage:(id)message deliveryQueueSize:(unsigned long long)size;
- (void)chatController:(id)controller didSendMessage:(id)message;
- (void)chatControllerDidJoinChatRoom:(id)room;
- (void)chatController:(id)controller didSubscribeWithSuccess:(_Bool)success;
- (void)broadcastWatcher:(id)watcher didUpdateVideoAccess:(id)access previousVideoAccess:(id)access;
- (void)dealloc;
- (id)init;

@end

#endif /* _TtC6AVChat19AVChatChatmanClient_h */
