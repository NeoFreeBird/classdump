//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC9URTModels31URTTimelineResponseAssimilation_h
#define _TtC9URTModels31URTTimelineResponseAssimilation_h
@import Foundation;

@class URTModels.URTEntryIDVisibilityProvider ?, URTModels.URTTimelineEncodingPolicyResolving ?, URTModels.URTTimelineEntryIntegrityAnalyzer ?, URTModels.URTTimelineSortIndexCorrectionAssimilation ?, _$s10TFSURTCore17URTTimelineCursorVMn ?, _$s14TFSTwitterCore11URTTimelineC14EncodingPolicyOMn ?, _$s14TFSTwitterCore19URTTimelineResponseVMn, _$s14TFSTwitterCore22URTSeenTweetIDProviderMp ?, _$s8TFSModel20TypedModelIdentifierCMn _$s14TFSTwitterCore11URTTimelineCMn, _$sSS, _$sSSSg, _$sSh -> URTModels.URTTimelineResponseAssimilation.AssimilationOption, _$sSh -> _$ss5Int64VMn ?, _$sSo23TFSTwitterScribeContextCSg, _$sSo32TFSTwitterLegacyScribeLogMethods_pSg, _TtCs12_SwiftObject;

@interface URTModels.URTTimelineResponseAssimilation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for TFSModel.TypedModelIdentifier nominal type descriptor for TFSTwitterCore.URTTimeline identifier;
    Swift.String urtTimelineUID;
    nominal type descriptor for TFSURTCore.URTTimelineCursor ? requestCursor;
    nominal type descriptor for TFSTwitterCore.URTTimelineResponse response;
    nominal type descriptor for TFSTwitterCore.URTTimeline.EncodingPolicy ? timelineEncodingPolicy;
    URTModels.URTTimelineEncodingPolicyResolving ? encodingPolicyResolver;
    Swift.String? encodingPolicyAccountID;
    __C.TFSTwitterLegacyScribeLogMethods? scribe;
    __C.TFSTwitterScribeContext? scribeContext;
    protocol descriptor for TFSTwitterCore.URTSeenTweetIDProvider ? seenTweetIDProvider;
    Swift.Set -> URTModels.URTTimelineResponseAssimilation.AssimilationOption assimilationOptions;
    URTModels.URTTimelineEntryIntegrityAnalyzer ? responseIntegrityAnalyzer;
    URTModels.URTTimelineSortIndexCorrectionAssimilation ? sortIndexCorrectionAssimilation;
    URTModels.URTEntryIDVisibilityProvider ? entryIDVisibilityProvider;
    Swift.Set -> nominal type descriptor for Swift.Int64 ? excludedFromSeenDedupTweetIDs;
}

@end

#endif /* _TtC9URTModels31URTTimelineResponseAssimilation_h */
