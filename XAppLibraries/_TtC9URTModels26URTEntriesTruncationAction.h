//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC9URTModels26URTEntriesTruncationAction_h
#define _TtC9URTModels26URTEntriesTruncationAction_h
@import Foundation;

@class Swift.Bool, TFSTwitterCore18URTImpressionCache_pSg, URTModels.URTEntriesTruncationAction.EntryIDVisibilityContext, _$s10Foundation4UUIDVMn ?, _$s14TFSTwitterCore11URTTimelineC14TruncationTypeOMn, _$sSS, _$sSi, _TtCs12_SwiftObject;

@interface URTModels.URTEntriesTruncationAction : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Int maxEntryCountTruncationTarget;
    URTModels.URTEntriesTruncationAction.EntryIDVisibilityContext visibleEntryIDContext;
    nominal type descriptor for Foundation.UUID ? sideChannelUUID;
    Swift.Bool emitColdStartCacheTruncationNavigationInstruction;
    Swift.String urtTimelineUID;
    nominal type descriptor for TFSTwitterCore.URTTimeline.TruncationType truncationType;
    Swift.Bool protectsVisibleEntriesNearSeam;
    TFSTwitterCore18URTImpressionCache_pSg impressionCache;
}

@end

#endif /* _TtC9URTModels26URTEntriesTruncationAction_h */
