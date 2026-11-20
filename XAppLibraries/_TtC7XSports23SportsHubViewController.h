//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports23SportsHubViewController_h
#define _TtC7XSports23SportsHubViewController_h
@import Foundation;

@class UIViewController, XSports.SportsColumnsView, XSports.SportsComposeAction ?, XSports.SportsFavoriteTeamsBannerPresentation ?, XSports.SportsHubBranding ?, XSports.SportsHubChromeScroll, XSports.SportsHubGrok ?, XSports.SportsHubHeaderPresentation ?, XSports.SportsHubRouter, XSports.SportsHubScheduleColumnView ?, XSports.SportsHubState.Header ?, XSports.SportsHubStore, XSports.SportsHubTitleControl ?, XSports.SportsHubView ?, XSports.SportsHubViewController.TabBarAccessoryKey ?, XSports.SportsImageLoader, XSports.SportsSegmentBarView, XSports.SportsSegmentPagerViewController XSports.SportsHubSegment ?, _$sSD -> XSports.SportsHubSegment XSports.SportsHubTab, _$sSD -> XSports.SportsHubSegment _$sSo16UIViewControllerC, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo11UIImageViewCSg, _$sSo15UIBarButtonItemCSg, _$sSo8UIActionCSg, _$syycSg;

@interface XSports.SportsHubViewController : UIViewController { // (Swift)
    /* instance variables */
    (() -> ())? onUserInterfaceStyleChange;
    XSports.SportsComposeAction ? composeAction;
    Swift.Dictionary -> XSports.SportsHubSegment XSports.SportsHubTab tabsByID;
    XSports.SportsHubStore store;
    XSports.SportsHubRouter router;
    XSports.SportsHubHeaderPresentation ? headerPresentation;
    XSports.SportsHubBranding ? branding;
    XSports.SportsFavoriteTeamsBannerPresentation ? bannerPresentation;
    XSports.SportsHubGrok ? grok;
    XSports.SportsImageLoader headerLogoLoader;
    __C.UIImageView? $__lazy_storage_$_headerLogoView;
    XSports.SportsSegmentBarView segmentBarView;
    XSports.SportsHubView ? $__lazy_storage_$_hubView;
    XSports.SportsSegmentPagerViewController XSports.SportsHubSegment ? $__lazy_storage_$_pager;
    XSports.SportsColumnsView columnsView;
    XSports.SportsHubScheduleColumnView ? scheduleColumn;
    XSports.SportsHubState.Header ? renderedHeader;
    XSports.SportsHubTitleControl ? headerTitleControl;
    __C.UIAction? $__lazy_storage_$_backAction;
    __C.UIBarButtonItem? $__lazy_storage_$_splitBackItem;
    XSports.SportsHubChromeScroll chromeScroll;
    Swift.Dictionary -> XSports.SportsHubSegment __C.UIViewController contentViewControllers;
    XSports.SportsHubViewController.TabBarAccessoryKey ? tabBarAccessoryKey;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;
@property (nonatomic, readonly) _Bool tfn_shouldCaptureNavigationControllerStatusBarStyle;
@property (nonatomic, readonly) _Bool tfn_prefersNavigationBarHidden;
@property (nonatomic, readonly) unsigned long long tfn_supportedInterfaceOrientations;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (void)loadView;
- (void)viewIsAppearing:(_Bool)appearing;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewDidDisappear:(_Bool)disappear;
- (id)scribePage;
- (id)scribeSection;
- (void)dismissHub;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC7XSports23SportsHubViewController_h */
