//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13ChatSyncState15ChatInboxStream_h
#define _TtC13ChatSyncState15ChatInboxStream_h
@import Foundation;

@class _$s7Combine19CurrentValueSubjectCMn _$sySD -> ChatModelsCore.ConversationID _$sSiG _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn _$sySa -> ChatSyncState.XChatConversationSummary _$sG _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn _$sySb _$ss5NeverOMn, _TtCs12_SwiftObject;

@interface ChatSyncState.ChatInboxStream : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Array -> ChatSyncState.XChatConversationSummary _$sG nominal type descriptor for Swift.Never summariesSubject;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Array -> ChatSyncState.XChatConversationSummary _$sG nominal type descriptor for Swift.Never archivedSummariesSubject;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Bool nominal type descriptor for Swift.Never isProcessedSubject;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Dictionary -> ChatModelsCore.ConversationID _$sSiG nominal type descriptor for Swift.Never unreadCountsSubject;
}

@end

#endif /* _TtC13ChatSyncState15ChatInboxStream_h */
