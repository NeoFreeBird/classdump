//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12ChatSettings29ChatSettingsPasscodeRowWorker_h
#define _TtC12ChatSettings29ChatSettingsPasscodeRowWorker_h
@import Foundation;

@class ChatKotlin.ObjectGraphProvider, ChatSettings.ChatSettingsPasscodeRowStore, ChatSettings.ChatSettingsPasscodeRowStream, ChatSyncState.ChatAccountProviding, Swift.Bool, _$s11XFoundation11AsyncWorkerCN;

@interface ChatSettings.ChatSettingsPasscodeRowWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    ChatSyncState.ChatAccountProviding accountProvider;
    Swift.Bool isNativeRewrite;
    ChatKotlin.ObjectGraphProvider objectGraphProvider;
    ChatSettings.ChatSettingsPasscodeRowStore passcodeRowStore;
    ChatSettings.ChatSettingsPasscodeRowStream passcodeRowStream;
}

@end

#endif /* _TtC12ChatSettings29ChatSettingsPasscodeRowWorker_h */
