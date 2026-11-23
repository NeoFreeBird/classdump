//
#ifndef _TtC8ChatSync27ChatConversationRecordCache_h
#define _TtC8ChatSync27ChatConversationRecordCache_h
@import Foundation;

@class _$s10XUtilities11UnfairQueueCMn, _$sSD -> ChatModelsCore.ConversationID ChatSync.ChatConversationRecord, _$sSi, _TtCs12_SwiftObject;

@interface ChatSync.ChatConversationRecordCache : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for XUtilities.UnfairQueue queue;
    Swift.Dictionary -> ChatModelsCore.ConversationID ChatSync.ChatConversationRecord records;
    Swift.Int generation;
}

@end

#endif /* _TtC8ChatSync27ChatConversationRecordCache_h */
