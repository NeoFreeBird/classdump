//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11TwitterHome28URTHomeTimelineUpdateContext_h
#define _TtC11TwitterHome28URTHomeTimelineUpdateContext_h
@import Foundation;

@class Swift.Bool, TwitterHome.LoadSourceOrExplicitRequestContext, TwitterHome.URTHomeTimelineUpdateContext.URTHomeTimelineDisplaySize _$syc, TwitterHome.ZipkinTraceIDLogger ?, _$s10TwitterURT24URTTimelineUpdateContextCN, _$s14TFSTwitterCore11URTTimelineC8ItemPathVMn ?, _$s14TFSTwitterCore22URTSeenTweetIDProviderMp ?, _$s9URTModels28URTEntryIDVisibilityProviderMp ?, _$sSSSg, _$sSh -> _$s9URTModels31URTTimelineResponseAssimilationC0D6OptionOMn, _$sSo13InjectedTweetCSg, _$sSo23TFSTwitterScribeContextCSg, _$sySb_SbtcSg;

@interface TwitterHome.URTHomeTimelineUpdateContext : type metadata for TwitterURT.URTTimelineUpdateContext { // (Swift)
    /* instance variables */
    TwitterHome.LoadSourceOrExplicitRequestContext loadSource;
    ((Swift.Bool, Swift.Bool) -> ())? completion;
    Swift.Set -> nominal type descriptor for URTModels.URTTimelineResponseAssimilation.AssimilationOption assimilationOptions;
    __C.TFSTwitterScribeContext? scribeContext;
    nominal type descriptor for TFSTwitterCore.URTTimeline.ItemPath ? itemPath;
    __C.InjectedTweet? injectedTweet;
    Swift.String? countryFilterID;
    Swift.String? topicFilterID;
    TwitterHome.URTHomeTimelineUpdateContext.URTHomeTimelineDisplaySize _$syc displaySizeProvider;
    protocol descriptor for TFSTwitterCore.URTSeenTweetIDProvider ? seenTweetIDProvider;
    Swift.Bool enableHomeTimelineRequestWithSeenIDs;
    protocol descriptor for URTModels.URTEntryIDVisibilityProvider ? entryIDVisibilityProvider;
    TwitterHome.ZipkinTraceIDLogger ? zipkinTraceIDLogger;
}

@end

#endif /* _TtC11TwitterHome28URTHomeTimelineUpdateContext_h */
