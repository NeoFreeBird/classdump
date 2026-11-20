//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC32TwitterHomeFeatureImplementation28PinnedTimelineViewController_h
#define _TtC32TwitterHomeFeatureImplementation28PinnedTimelineViewController_h
@import Foundation;

#include "T1URTViewControllerLoadingDelegate-Protocol.h"
#include "TFNTwitterCompositionSource-Protocol.h"
#include "_TtP14T1TwitterSwift25QuickPostBarContextSource_-Protocol.h"
#include "_TtP20TwitterCommunitiesUI41UnableToTweetPromptViewControllerDelegate_-Protocol.h"
#include "_TtP26TwitterHomePinnedTimelines36PinnedTimelineViewControllerProtocol_-Protocol.h"

@class TFNViewController, TwitterHomeFeatureImplementation.CachedPinnedTimelinesRepository, TwitterHomeFeatureImplementation.PinnedTimelineViewController.TimelineModel, UIScrollView, _$s11TwitterHome0B8FeaturesCMn, _$s14T1TwitterSwift17URTViewControllerCMn ?, _$s26TwitterHomePinnedTimelines0C17TimelineDataModelCMn, _$sSo11UIImageViewCSg, _$sSo11UIStackViewCSg, _$sSo16TIPImagePipelineC, _$sSo17TFNTwitterAccountC, _$sSo6UIViewCSg, _$sSo9TFNButtonCSg, _$syXlSg, _TtC26TwitterHomePinnedTimelines23PinnedTimelineDataModel;

@interface TwitterHomeFeatureImplementation.PinnedTimelineViewController : TFNViewController <T1URTViewControllerLoadingDelegate, T1TwitterSwift.QuickPostBarContextSource, TwitterHomePinnedTimelines.PinnedTimelineViewControllerProtocol, TFNTwitterCompositionSource, TwitterCommunitiesUI.UnableToTweetPromptViewControllerDelegate> { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    __C.TIPImagePipeline pipeline;
    nominal type descriptor for TwitterHome.HomeFeatures homeFeatures;
    TwitterHomeFeatureImplementation.PinnedTimelineViewController.TimelineModel timelineModel;
    Swift.AnyObject? communityModelObserver;
    nominal type descriptor for T1TwitterSwift.URTViewController ? contentViewController;
    TwitterHomeFeatureImplementation.CachedPinnedTimelinesRepository cachedPinnedTimelinesRepository;
    __C.UIStackView? $__lazy_storage_$_headerStackView;
    __C.TFNButton? $__lazy_storage_$_communityModerationButton;
    __C.TFNButton? $__lazy_storage_$_searchCommunityPostButton;
    __C.TFNButton? $__lazy_storage_$_directToCommunityButton;
    __C.TFNButton? $__lazy_storage_$_sortPostsButton;
    __C.UIStackView? $__lazy_storage_$_actionButtonsStackView;
    __C.UIStackView? $__lazy_storage_$_bannerView;
    __C.UIStackView? $__lazy_storage_$_sortingView;
    __C.UIImageView? $__lazy_storage_$_bannerImageView;
    __C.UIView? $__lazy_storage_$_contentView;
}

@property (nonatomic, readonly) _Bool hasUnreadContent;
@property (nonatomic, retain) TwitterHomePinnedTimelines.PinnedTimelineDataModel *pinnedTimeline;
@property (nonatomic, readonly) _Bool canBecomeFirstResponder;
@property (nonatomic, readonly) UIScrollView *contentScrollView;

/* instance methods */
- (void)urtViewController:(id)controller didLoadTimelineInitially:(_Bool)initially;
- (void)urtViewController:(id)controller didLoadViewModels:(id)models;
- (id)quickComposeComposition;
- (void)unableToTweetPromptViewControllerDidSelectActionWithAction:(long long)action;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (_Bool)becomeFirstResponder;
- (void)loadTop:(id)top;
- (void)beginPullToRefresh;
- (void)reloadTop:(id)top;
- (void)tfn_contentScrollViewDidScroll:(id)scroll animate:(_Bool)animate;
- (_Bool)tfn_isScrolledToTop;
- (id)composition;
- (void)presentSpaceComposer;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC32TwitterHomeFeatureImplementation28PinnedTimelineViewController_h */
