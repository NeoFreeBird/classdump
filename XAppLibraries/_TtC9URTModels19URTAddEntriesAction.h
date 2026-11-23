//
#ifndef _TtC9URTModels19URTAddEntriesAction_h
#define _TtC9URTModels19URTAddEntriesAction_h
@import Foundation;

@class Swift.Bool, URTModels.URTEntryIDVisibilityProvider ?, _$s14TFSTwitterCore24URTSeenTweetIDCollectionMp ?, _$sSa -> _$s10TFSURTCore16URTTimelineEntryVMn, _$sSh -> _$ss5Int64VMn ?, _$sSo23TFSTwitterScribeContextCSg, _$sSo32TFSTwitterLegacyScribeLogMethods_pSg, _TtCs12_SwiftObject;

@interface URTModels.URTAddEntriesAction : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> nominal type descriptor for TFSURTCore.URTTimelineEntry entries;
    protocol descriptor for TFSTwitterCore.URTSeenTweetIDCollection ? allSeenTweetIDs;
    Swift.Set -> nominal type descriptor for Swift.Int64 ? excludedFromSeenDedupTweetIDs;
    __C.TFSTwitterLegacyScribeLogMethods? scribe;
    __C.TFSTwitterScribeContext? scribeContext;
    Swift.Bool deduplicateStatusIDs;
    Swift.Bool deduplicateSeenIDs;
    Swift.Bool deduplicateEntryIDs;
    Swift.Bool skipDeduplicationAdjacentToAds;
    Swift.Bool removeAdsWithChangedAdjacentPosts;
    Swift.Bool viewportAwareHoistingMatchesPromotedByEntryID;
    Swift.Bool ancestorModuleConstruction;
    URTModels.URTEntryIDVisibilityProvider ? entryIDVisibilityProvider;
}

@end

#endif /* _TtC9URTModels19URTAddEntriesAction_h */
