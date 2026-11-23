//
#ifndef _TtC11ChatSession24ChatDmSettingsSyncWorker_h
#define _TtC11ChatSession24ChatDmSettingsSyncWorker_h
@import Foundation;

@class ChatSync.ChatDmSettingsService, ChatSyncState.ChatDmSettingsStream, ChatSyncState.ChatNetworkReachabilityStream, _$s11XFoundation11AsyncWorkerCN, _$s7Combine18PassthroughSubjectCMn _$sySi _$ss5NeverOMn;

@interface ChatSession.ChatDmSettingsSyncWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSync.ChatDmSettingsService dmSettingsService;
    ChatSyncState.ChatDmSettingsStream dmSettingsStream;
    ChatSyncState.ChatNetworkReachabilityStream networkReachabilityStream;
    nominal type descriptor for Combine.PassthroughSubject  empty-list Swift.Int nominal type descriptor for Swift.Never retrySubject;
}

@end

#endif /* _TtC11ChatSession24ChatDmSettingsSyncWorker_h */
