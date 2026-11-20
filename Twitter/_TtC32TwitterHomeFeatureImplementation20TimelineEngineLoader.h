//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC32TwitterHomeFeatureImplementation20TimelineEngineLoader_h
#define _TtC32TwitterHomeFeatureImplementation20TimelineEngineLoader_h
@import Foundation;

@class TwitterHomeFeatureImplementation.TimelineEngineLoader.LaunchPrefetch, TwitterHomeFeatureImplementation.TimelineEngineLoader.Record _$s_SbtcSg ->, TwitterHomeFeatureImplementation.TimelineEngineUpdateContextBuilder, _$s10TwitterURT18URTTimelineUpdaterCMn, _$s11TwitterHome15TimelineVariantOMn, _$s14T1TwitterSwift22URTHomeTimelineScriberCMn, _$s22TwitterHomePerformance26URTHomeTimelineStreamTraceCMn, _$s8TFSModel12ModelContextCMn, _$s8TFSModel22AssimilationIdentifierVMn _$s10TwitterURT24URTTimelineUpdateContextC8IdentityVMn, _$sSD -> _$s10Foundation4UUIDVMn TwitterHomeFeatureImplementation.TimelineEngineLoader.Record, _$sSS, _$ss6UInt64VMn _$s_ -> TwitterHomeFeatureImplementation.TimelineEngineLoader.Outcome _$stcSg, _$syycSg, _TtCs12_SwiftObject;

@interface TwitterHomeFeatureImplementation.TimelineEngineLoader : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Swift.UInt64  first-element-marker  -> TwitterHomeFeatureImplementation.TimelineEngineLoader.Outcome _$stcSg onFinished;
    TwitterHomeFeatureImplementation.TimelineEngineLoader.Record _$s_SbtcSg -> onContextCompleted;
    (() -> ())? onPagedCarouselTransition;
    nominal type descriptor for TFSModel.AssimilationIdentifier nominal type descriptor for TwitterURT.URTTimelineUpdateContext.Identity assimilationIdentifier;
    Swift.String accountID;
    Swift.String urtTimelineUID;
    nominal type descriptor for TwitterHome.TimelineVariant timelineVariant;
    nominal type descriptor for TFSModel.ModelContext modelContext;
    nominal type descriptor for TwitterURT.URTTimelineUpdater updater;
    nominal type descriptor for T1TwitterSwift.URTHomeTimelineScriber scriber;
    TwitterHomeFeatureImplementation.TimelineEngineUpdateContextBuilder contexts;
    nominal type descriptor for TwitterHomePerformance.URTHomeTimelineStreamTrace trace;
    TwitterHomeFeatureImplementation.TimelineEngineLoader.LaunchPrefetch launchPrefetch;
    Swift.Dictionary -> nominal type descriptor for Foundation.UUID TwitterHomeFeatureImplementation.TimelineEngineLoader.Record records;
}

@end

#endif /* _TtC32TwitterHomeFeatureImplementation20TimelineEngineLoader_h */
