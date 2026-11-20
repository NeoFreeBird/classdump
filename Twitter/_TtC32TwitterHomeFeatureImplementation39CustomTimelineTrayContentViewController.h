//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC32TwitterHomeFeatureImplementation39CustomTimelineTrayContentViewController_h
#define _TtC32TwitterHomeFeatureImplementation39CustomTimelineTrayContentViewController_h
@import Foundation;

#include "TFNPresentationInterceptor-Protocol.h"

@class TwitterHomeFeatureImplementation.ScrollOnlyOverlayView, TwitterHomeFeatureImplementation.TimelineScrollAnchorCorrector ?, _$s10Foundation4DateVMn ?, _$s11TwitterHome22CustomTimelineTagTopicCMn, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$s14T1TwitterSwift17URTViewControllerCMn, _$sSbSic, _$sSi, _$sSo16TIPImagePipelineC, _$sSo22TIPImageFetchOperationCSg, _$sSo7UIImageCSg, _$sySicSg, _$syycSg;

@interface TwitterHomeFeatureImplementation.CustomTimelineTrayContentViewController : type metadata for XDesignSystem.StackTrayContentViewController <TFNPresentationInterceptor> { // (Swift)
    /* instance variables */
    (() -> ())? onShow;
    ((Swift.Int) -> ())? onDismiss;
    nominal type descriptor for TwitterHome.CustomTimelineTagTopic topic;
    nominal type descriptor for T1TwitterSwift.URTViewController timelineViewController;
    __C.TIPImagePipeline imagePipeline;
    TwitterHomeFeatureImplementation.ScrollOnlyOverlayView scrollOnlyOverlay;
    (Swift.Int) -> Swift.Bool onPin;
    __C.UIImage? remoteHeaderImage;
    __C.TIPImageFetchOperation? iconFetchOperation;
    nominal type descriptor for Foundation.Date ? appearDate;
    Swift.Int accumulatedDwellMs;
    TwitterHomeFeatureImplementation.TimelineScrollAnchorCorrector ? $__lazy_storage_$_scrollAnchorCorrector;
}

/* instance methods */
- (id)viewController:(id)controller willPresentWithPresentationInfo:(id)info;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (id)tfn_customizeLayoutMetrics:(id)metrics forChildViewController:(id)controller;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC32TwitterHomeFeatureImplementation39CustomTimelineTrayContentViewController_h */
