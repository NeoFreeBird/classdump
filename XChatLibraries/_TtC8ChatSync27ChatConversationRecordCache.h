//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC8ChatSync27ChatConversationRecordCache_h
#define _TtC8ChatSync27ChatConversationRecordCache_h
@import Foundation;

@class _$s10XUtilities11UnfairQueueCMn, _$sSD -> ChatModelsCore.ConversationID ChatSync.XChatConversationRecord, _$sSi, _TtCs12_SwiftObject;

@interface ChatSync.ChatConversationRecordCache : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for XUtilities.UnfairQueue queue;
    Swift.Dictionary -> ChatModelsCore.ConversationID ChatSync.XChatConversationRecord records;
    Swift.Int generation;
}

@end

#endif /* _TtC8ChatSync27ChatConversationRecordCache_h */
