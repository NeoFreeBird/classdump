//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8ChatSync19ChatMediaDownloader_h
#define _TtC8ChatSync19ChatMediaDownloader_h
@import Foundation;

@class Builtin.DefaultActorStorage, ChatKeys.XChatConversationKeyService, ChatSync.ChatPinnedMediaKeyResolver, ChatSyncState.ChatMediaAutoDownloadPolicy, ChatSyncState.ChatMediaStream, ChatTransport.ChatMediaHTTPClient, Swift.Bool, _$s10Foundation3URLVMn, _$sSDySS ChatSync.ChatMediaDownloader.Download, _$sSi, _$ss5Int64VMn, _TtCs12_SwiftObject;

@interface ChatSync.ChatMediaDownloader : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Builtin.DefaultActorStorage $defaultActor;
    ChatSyncState.ChatMediaAutoDownloadPolicy autoDownloadPolicy;
    ChatKeys.XChatConversationKeyService conversationKeyService;
    nominal type descriptor for Foundation.URL directoryURL;
    Swift.Int downloadAttempts;
    Swift.Bool isMediaHashEnforced;
    nominal type descriptor for Swift.Int64 mediaHashEnforcedFromSequenceNumber;
    ChatTransport.ChatMediaHTTPClient httpClient;
    ChatSyncState.ChatMediaStream mediaStream;
    ChatSync.ChatPinnedMediaKeyResolver pinnedMediaKeyResolver;
    Swift.Dictionary empty-list Swift.String ChatSync.ChatMediaDownloader.Download downloads;
}

@end

#endif /* _TtC8ChatSync19ChatMediaDownloader_h */
