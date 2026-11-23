//
#ifndef _TtC11ChatSession22ChatLocalKeypairWorker_h
#define _TtC11ChatSession22ChatLocalKeypairWorker_h
@import Foundation;

@class ChatKeys.ChatIdentityKeyService, ChatSession.ChatStorageStream, ChatSync.ChatPinChangedDetector, ChatSyncState.ChatLocalKeypairStream, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSession.ChatLocalKeypairWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatKeys.ChatIdentityKeyService identityKeyService;
    ChatSyncState.ChatLocalKeypairStream localKeypairStream;
    ChatSync.ChatPinChangedDetector pinChangedDetector;
    ChatSession.ChatStorageStream storageStream;
}

@end

#endif /* _TtC11ChatSession22ChatLocalKeypairWorker_h */
