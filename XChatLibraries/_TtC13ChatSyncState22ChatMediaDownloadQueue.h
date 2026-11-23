//
#ifndef _TtC13ChatSyncState22ChatMediaDownloadQueue_h
#define _TtC13ChatSyncState22ChatMediaDownloadQueue_h
@import Foundation;

@class ChatSyncState.ChatMediaDownloading, _$sSDySS _$s10Foundation4UUIDVMn id_ScTyyt _$ss5NeverOMn _$sG4taskt, _$sSa -> ChatSyncState.ChatMediaDownloadRequest, _$sScP, _$sShySSG, _$sSi, _TtCs12_SwiftObject;

@interface ChatSyncState.ChatMediaDownloadQueue : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Int maxConcurrentDownloads;
    Swift.TaskPriority priority;
    ChatSyncState.ChatMediaDownloading mediaDownloader;
    Swift.Dictionary empty-list Swift.String nominal type descriptor for Foundation.UUID id_ScTyyt nominal type descriptor for Swift.Never _$sG4taskt downloads;
    Swift.Set<Swift.String> finishedKeys;
    Swift.Array -> ChatSyncState.ChatMediaDownloadRequest requests;
}

@end

#endif /* _TtC13ChatSyncState22ChatMediaDownloadQueue_h */
