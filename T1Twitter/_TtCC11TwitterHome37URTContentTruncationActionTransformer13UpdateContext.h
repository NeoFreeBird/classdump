//
#ifndef _TtCC11TwitterHome37URTContentTruncationActionTransformer13UpdateContext_h
#define _TtCC11TwitterHome37URTContentTruncationActionTransformer13UpdateContext_h
@import Foundation;

@class Swift.Bool, TFSTwitterCore18URTImpressionCache_pSg, _$s10Foundation4UUIDVMn ?, _$s10TwitterURT24URTTimelineUpdateContextCN, _$s14TFSTwitterCore11URTTimelineC14TruncationTypeOMn, _$s9URTModels28URTEntryIDVisibilityProviderMp, _$sSi;

@interface TwitterHome.URTContentTruncationActionTransformer.UpdateContext : type metadata for TwitterURT.URTTimelineUpdateContext { // (Swift)
    /* instance variables */
    Swift.Int truncationTargetCount;
    protocol descriptor for URTModels.URTEntryIDVisibilityProvider visibleEntryIDProvider;
    nominal type descriptor for Foundation.UUID ? sideChannelUUID;
    Swift.Bool emitColdStartCacheTruncationNavigationInstruction;
    nominal type descriptor for TFSTwitterCore.URTTimeline.TruncationType truncationType;
    Swift.Bool protectsVisibleEntriesNearSeam;
    TFSTwitterCore18URTImpressionCache_pSg impressionCache;
}

@end

#endif /* _TtCC11TwitterHome37URTContentTruncationActionTransformer13UpdateContext_h */
