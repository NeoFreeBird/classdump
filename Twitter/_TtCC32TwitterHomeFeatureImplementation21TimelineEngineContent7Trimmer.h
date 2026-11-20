//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCC32TwitterHomeFeatureImplementation21TimelineEngineContent7Trimmer_h
#define _TtCC32TwitterHomeFeatureImplementation21TimelineEngineContent7Trimmer_h
@import Foundation;

@class Swift.Bool, TFSTwitterCore18URTImpressionCache_p, TwitterHomeFeatureImplementation.TimelineEngineContent.TrimRun _$scSg ->, TwitterHomeFeatureImplementation.TimelineEngineContent.Trimmer.FirstPageTrim, _$s10TwitterURT25URTTimelineUpdatePipelineMp, _$s11TwitterHome29TimelineItemVisibilityTrackerCMn, _$s13TFSObservable8ObserverCMn _$s9URTModels26URTEntriesTruncationActionC11SideChannelVMn ?, _$s14TFSTwitterCore11URTTimelineCMn _$sSgyc, _$s8TFSModel12ModelContextCMn, _TtCs12_SwiftObject;

@interface TwitterHomeFeatureImplementation.TimelineEngineContent.Trimmer : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TwitterHomeFeatureImplementation.TimelineEngineContent.TrimRun _$scSg -> onFinished;
    nominal type descriptor for TFSModel.ModelContext modelContext;
    protocol descriptor for TwitterURT.URTTimelineUpdatePipeline pipeline;
    TFSTwitterCore18URTImpressionCache_p impressionCache;
    nominal type descriptor for TwitterHome.TimelineItemVisibilityTracker visibilityTracker;
    Swift.Bool protectsTruncationSeam;
    nominal type descriptor for TFSTwitterCore.URTTimeline _$sSgyc latestTimeline;
    TwitterHomeFeatureImplementation.TimelineEngineContent.Trimmer.FirstPageTrim firstPageTrim;
    nominal type descriptor for TFSObservable.Observer nominal type descriptor for URTModels.URTEntriesTruncationAction.SideChannel ? sideChannelObserver;
}

@end

#endif /* _TtCC32TwitterHomeFeatureImplementation21TimelineEngineContent7Trimmer_h */
