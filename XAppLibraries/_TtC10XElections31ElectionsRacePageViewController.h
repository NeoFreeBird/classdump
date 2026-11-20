//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10XElections31ElectionsRacePageViewController_h
#define _TtC10XElections31ElectionsRacePageViewController_h
@import Foundation;

#include "_TtP10TFNUISwift37LegacySegmentedViewControllerDelegate_-Protocol.h"
#include "_TtP10TFNUISwift39LegacySegmentedViewControllerDataSource_-Protocol.h"

@class UIViewController, XElections.ElectionsAd ?, XElections.ElectionsChatContent _$sSgSSScMYcc, XElections.ElectionsColumnView view_ _$s10TFNUISwift29LegacySegmentedViewControllerCMn controllertSg, XElections.ElectionsOverflowMenu, XElections.ElectionsRacePageRouter, XElections.ElectionsRacePageState ?, XElections.ElectionsRacePageStore, XElections.ElectionsRacePageTab, XElections.ElectionsRacePageTab ?, XElections.ElectionsRaceView, XElections.ElectionsRaceViewController ?, XElections.ElectionsScribe, XElections.ElectionsViewerBeat, _$s10TFNUISwift29LegacySegmentedViewControllerCMn ?, _$s12CoreGraphics7CGFloatVMn, _$s13XDesignSystem6ButtonCMn, _$s13XDesignSystem6ButtonCMn ?, _$s20TwitterActionService0bC0CMn, _$sSD -> XElections.ElectionsRacePageTab _$sSo16UIViewControllerC, _$sSS, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo16TIPImagePipelineCSg, _$sSo16UIViewControllerCSS_ XElections.ElectionsFeedKind XElections.ElectionsFeedSurface _$sSo0A0CSgtScMYcc, _$sSo7UILabelC;

@interface XElections.ElectionsRacePageViewController : UIViewController <TFNUISwift.LegacySegmentedViewControllerDelegate, TFNUISwift.LegacySegmentedViewControllerDataSource> { // (Swift)
    /* instance variables */
    Swift.String electionID;
    XElections.ElectionsRacePageStore store;
    XElections.ElectionsRacePageRouter router;
    XElections.ElectionsOverflowMenu overflowMenu;
    XElections.ElectionsViewerBeat viewerBeat;
    nominal type descriptor for TwitterActionService.ActionService actionService;
    __C.TIPImagePipeline? imagePipeline;
    __C.UIViewControllerSwift.String first-element-marker  XElections.ElectionsFeedKind XElections.ElectionsFeedSurface _$sSo0A0CSgtScMYcc makeFeed;
    XElections.ElectionsChatContent _$sSgSSScMYcc makeChat;
    XElections.ElectionsScribe scribe;
    XElections.ElectionsRaceView raceView;
    Swift.Dictionary -> XElections.ElectionsRacePageTab __C.UIViewController pages;
    XElections.ElectionsRacePageState ? renderedState;
    XElections.ElectionsAd ? ad;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    XElections.ElectionsRacePageTab selectedTab;
    XElections.ElectionsRacePageTab ? lastSelectedTab;
    XElections.ElectionsColumnView view_ nominal type descriptor for TFNUISwift.LegacySegmentedViewController controllertSg sideColumn;
    nominal type descriptor for TFNUISwift.LegacySegmentedViewController ? $__lazy_storage_$_segmentedController;
    XElections.ElectionsRaceViewController ? $__lazy_storage_$_resultsViewController;
    nominal type descriptor for CoreGraphics.CGFloat appliedNavigationBandInset;
    __C.UILabel titleLabel;
    nominal type descriptor for XDesignSystem.Button backButton;
    nominal type descriptor for XDesignSystem.Button ? $__lazy_storage_$_overflowButton;
}

@property (nonatomic, readonly) _Bool tfn_prefersNavigationBarHidden;
@property (nonatomic, readonly) unsigned long long tfn_supportedInterfaceOrientations;

/* instance methods */
- (void)segmentedViewController:(id)controller willSelectViewController:(id)controller atIndex:(long long)index indexChanged:(_Bool)changed;
- (void)segmentedViewController:(id)controller didSelectViewController:(id)controller atIndex:(long long)index previousIndex:(long long)index trigger:(long long)trigger;
- (long long)numberOfTabsIn:(id)in;
- (id)segmentedViewController:(id)controller pageViewControllerAtIndex:(long long)index;
- (id)segmentedViewController:(id)controller descriptorAtIndex:(long long)index;
- (_Bool)segmentedViewController:(id)controller isPrewarmableTabAtIndex:(long long)index;
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (void)loadView;
- (void)viewIsAppearing:(_Bool)appearing;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)goBack;
- (void)keyboardWillShow;
- (void)keyboardWillHide;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC10XElections31ElectionsRacePageViewController_h */
