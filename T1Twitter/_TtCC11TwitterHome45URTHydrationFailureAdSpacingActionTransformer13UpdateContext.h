//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCC11TwitterHome45URTHydrationFailureAdSpacingActionTransformer13UpdateContext_h
#define _TtCC11TwitterHome45URTHydrationFailureAdSpacingActionTransformer13UpdateContext_h
@import Foundation;

@class Swift.Bool, _$s10TwitterURT24URTTimelineUpdateContextCN, _$sShySSG, _$sSi, _$sSo23TFSTwitterScribeContextCSg, _$sSo32TFSTwitterLegacyScribeLogMethods_pSg;

@interface TwitterHome.URTHydrationFailureAdSpacingActionTransformer.UpdateContext : type metadata for TwitterURT.URTTimelineUpdateContext { // (Swift)
    /* instance variables */
    Swift.Set<Swift.String> failedEntryIDs;
    Swift.Int minimumAdSpacing;
    Swift.Bool useTopDownSpacing;
    Swift.Bool isFirstPositionAdPreventionEnabled;
    __C.TFSTwitterLegacyScribeLogMethods? scribe;
    __C.TFSTwitterScribeContext? scribeContext;
}

@end

#endif /* _TtCC11TwitterHome45URTHydrationFailureAdSpacingActionTransformer13UpdateContext_h */
