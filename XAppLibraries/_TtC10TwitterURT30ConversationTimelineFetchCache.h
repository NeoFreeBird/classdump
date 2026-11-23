//
#ifndef _TtC10TwitterURT30ConversationTimelineFetchCache_h
#define _TtC10TwitterURT30ConversationTimelineFetchCache_h
@import Foundation;

@class DispatchQueue, _$s10XUtilities11UnfairQueueCMn, _$sSDySS TwitterURT.ConversationTimelineFetchCache.Entry, _$sSDySS _$s8Dispatch0A8WorkItemCMn, _TtCs12_SwiftObject;

@interface TwitterURT.ConversationTimelineFetchCache : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Dictionary empty-list Swift.String TwitterURT.ConversationTimelineFetchCache.Entry entries;
    Swift.Dictionary empty-list Swift.String nominal type descriptor for Dispatch.DispatchWorkItem expirationItems;
    nominal type descriptor for XUtilities.UnfairQueue access;
    DispatchQueue expirationQueue;
}

@end

#endif /* _TtC10TwitterURT30ConversationTimelineFetchCache_h */
