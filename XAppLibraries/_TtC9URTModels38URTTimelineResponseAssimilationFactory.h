//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC9URTModels38URTTimelineResponseAssimilationFactory_h
#define _TtC9URTModels38URTTimelineResponseAssimilationFactory_h
@import Foundation;

@class URTModels.URTEntryIDVisibilityProvider ?, URTModels.URTTimelineEncodingPolicyResolving ?, _$s10TFSURTCore17URTTimelineCursorVMn ?, _$s10TFSURTCore21URTTimelineIdentifierOMn, _$s14TFSTwitterCore11URTTimelineC14EncodingPolicyOMn ?, _$s14TFSTwitterCore22URTSeenTweetIDProviderMp ?, _$sSSSg, _$sSh -> URTModels.URTTimelineResponseAssimilation.AssimilationOption, _$sSh -> _$ss5Int64VMn ?, _$sSo23TFSTwitterScribeContextCSg, _$sSo32TFSTwitterLegacyScribeLogMethods_pSg, _TtCs12_SwiftObject;

@interface URTModels.URTTimelineResponseAssimilationFactory : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for TFSURTCore.URTTimelineIdentifier urtTimelineIdentifier;
    nominal type descriptor for TFSURTCore.URTTimelineCursor ? requestCursor;
    Swift.Set -> URTModels.URTTimelineResponseAssimilation.AssimilationOption assimilationOptions;
    nominal type descriptor for TFSTwitterCore.URTTimeline.EncodingPolicy ? timelineEncodingPolicy;
    URTModels.URTTimelineEncodingPolicyResolving ? encodingPolicyResolver;
    Swift.String? encodingPolicyAccountID;
    __C.TFSTwitterLegacyScribeLogMethods? scribe;
    __C.TFSTwitterScribeContext? scribeContext;
    protocol descriptor for TFSTwitterCore.URTSeenTweetIDProvider ? seenTweetIDProvider;
    URTModels.URTEntryIDVisibilityProvider ? entryIDVisibilityProvider;
    Swift.Set -> nominal type descriptor for Swift.Int64 ? excludedFromSeenDedupTweetIDs;
}

@end

#endif /* _TtC9URTModels38URTTimelineResponseAssimilationFactory_h */
