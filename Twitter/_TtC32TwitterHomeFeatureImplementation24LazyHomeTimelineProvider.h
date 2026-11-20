//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC32TwitterHomeFeatureImplementation24LazyHomeTimelineProvider_h
#define _TtC32TwitterHomeFeatureImplementation24LazyHomeTimelineProvider_h
@import Foundation;

@class TwitterHomeFeatureImplementation.TopicsUpsellProvider, _$s11TwitterHome0B27TimelineFilterStateProviderCMn, _$s11TwitterHome0B8FeaturesCMn ?, _$sSD -> TwitterHomeFeatureImplementation.TimelineSlot _$sSo22TFNTwitterHomeTimelineC, _$sSD -> TwitterHomeFeatureImplementation.TimelineSlot _$sSo42THMHomeTimelineItemsViewControllerProtocol_So012TFNItemsDatadE0CXc, _$sSDySS26TwitterHomePinnedTimelines0C30TimelineViewControllerProtocol_So07TFNViewG0CXcG, _$sSa -> _$s26TwitterHomePinnedTimelines0C17TimelineDataModelCMn, _$sSo16TIPImagePipelineCSg, _$sSo16UIViewControllerCSg, _$sSo17TFNTwitterAccountC, _$sSo42THMHomeTimelineItemsViewControllerProtocol_So012TFNItemsDatadE0CXc, _TtCs12_SwiftObject;

@interface TwitterHomeFeatureImplementation.LazyHomeTimelineProvider : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    nominal type descriptor for TwitterHome.HomeFeatures ? homeFeatures;
    nominal type descriptor for TwitterHome.HomeTimelineFilterStateProvider filterStateProvider;
    __C.TFNItemsDataViewController & __C.THMHomeTimelineItemsViewControllerProtocol homeTimelineViewController;
    Swift.Dictionary -> TwitterHomeFeatureImplementation.TimelineSlot __C.TFNTwitterHomeTimeline timelines;
    Swift.Dictionary -> TwitterHomeFeatureImplementation.TimelineSlot __C.TFNItemsDataViewController & __C.THMHomeTimelineItemsViewControllerProtocol cachedVCs;
    [Swift.String : __C.TFNViewController & TwitterHomePinnedTimelines.PinnedTimelineViewControllerProtocol] pinnedTimelineViewControllersByID;
    Swift.Array -> nominal type descriptor for TwitterHomePinnedTimelines.PinnedTimelineDataModel pinnedTimelineModels;
    __C.TIPImagePipeline? $__lazy_storage_$_tabIconImagePipeline;
    TwitterHomeFeatureImplementation.TopicsUpsellProvider topicsUpsellProvider;
    __C.UIViewController? selectedViewController;
}

@end

#endif /* _TtC32TwitterHomeFeatureImplementation24LazyHomeTimelineProvider_h */
