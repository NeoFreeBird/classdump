//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13ChatSyncState18ChatTimelineStream_h
#define _TtC13ChatSyncState18ChatTimelineStream_h
@import Foundation;

@class _$s7Combine19CurrentValueSubjectCMn _$sySD -> ChatModelsCore.ConversationID _$sSa -> ChatSyncState.XChatTimelineEntry _$sGG _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn _$sySh -> ChatModelsCore.ConversationID _$sG _$ss5NeverOMn, _TtCs12_SwiftObject;

@interface ChatSyncState.ChatTimelineStream : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Dictionary -> ChatModelsCore.ConversationID Swift.Array -> ChatSyncState.XChatTimelineEntry _$sGG nominal type descriptor for Swift.Never timelinesSubject;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Set -> ChatModelsCore.ConversationID _$sG nominal type descriptor for Swift.Never conversationsWithOlderEntriesSubject;
}

@end

#endif /* _TtC13ChatSyncState18ChatTimelineStream_h */
