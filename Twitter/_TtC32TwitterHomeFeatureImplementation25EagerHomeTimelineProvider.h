//
#ifndef _TtC32TwitterHomeFeatureImplementation25EagerHomeTimelineProvider_h
#define _TtC32TwitterHomeFeatureImplementation25EagerHomeTimelineProvider_h
@import Foundation;

@class TwitterHomeFeatureImplementation.TopicsUpsellProvider, _$s11TwitterHome0B27TimelineFilterStateProviderCMn, _$s11TwitterHome0B8FeaturesCMn ?, _$sSDySS26TwitterHomePinnedTimelines0C30TimelineViewControllerProtocol_So07TFNViewG0CXcG, _$sSa -> _$s26TwitterHomePinnedTimelines0C17TimelineDataModelCMn, _$sSo16TIPImagePipelineCSg, _$sSo16UIViewControllerCSg, _$sSo17TFNTwitterAccountC, _$sSo42THMHomeTimelineItemsViewControllerProtocol_So012TFNItemsDatadE0CXc, _$sSo42THMHomeTimelineItemsViewControllerProtocol_So012TFNItemsDatadE0CXcSg, _TtCs12_SwiftObject;

@interface TwitterHomeFeatureImplementation.EagerHomeTimelineProvider : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    nominal type descriptor for TwitterHome.HomeFeatures ? homeFeatures;
    nominal type descriptor for TwitterHome.HomeTimelineFilterStateProvider filterStateProvider;
    __C.TFNItemsDataViewController & __C.THMHomeTimelineItemsViewControllerProtocol homeTimelineViewController;
    (__C.TFNItemsDataViewController & __C.THMHomeTimelineItemsViewControllerProtocol)? countryFilteredTimelineViewController;
    (__C.TFNItemsDataViewController & __C.THMHomeTimelineItemsViewControllerProtocol)? topicFilteredTimelineViewController;
    __C.TFNItemsDataViewController & __C.THMHomeTimelineItemsViewControllerProtocol latestTimelineViewController;
    (__C.TFNItemsDataViewController & __C.THMHomeTimelineItemsViewControllerProtocol)? rankedFollowingTimelineViewController;
    (__C.TFNItemsDataViewController & __C.THMHomeTimelineItemsViewControllerProtocol)? creatorSubscriptionsTimelineViewController;
    [Swift.String : __C.TFNViewController & TwitterHomePinnedTimelines.PinnedTimelineViewControllerProtocol] pinnedTimelineViewControllersByID;
    Swift.Array -> nominal type descriptor for TwitterHomePinnedTimelines.PinnedTimelineDataModel pinnedTimelineModels;
    __C.TIPImagePipeline? $__lazy_storage_$_tabIconImagePipeline;
    TwitterHomeFeatureImplementation.TopicsUpsellProvider topicsUpsellProvider;
    __C.UIViewController? selectedViewController;
}

@end

#endif /* _TtC32TwitterHomeFeatureImplementation25EagerHomeTimelineProvider_h */
