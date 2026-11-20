//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10TFNUISwift20TFNHostingController_h
#define _TtC10TFNUISwift20TFNHostingController_h
@import Foundation;

#include "TFNLayoutMetricsEnvironment-Protocol.h"
#include "TFNProgrammaticScrollViewDelegate-Protocol.h"
#include "TFNViewController.h"
#include "UIScrollViewDelegate-Protocol.h"

@class NSString, Swift.Bool, TFNUISwift.HostingEnvironmentViewModel, TFNUISwift.TFNHostingControllerNavigationItem ?, UINavigationItem, UIScrollView, _$sSo12UIScrollViewCSgXw, _$sSo16UIViewControllerC, _$sSo32TFNScrollViewDelegateBroadcasterCSg;

@interface TFNUISwift.TFNHostingController : TFNViewController <TFNProgrammaticScrollViewDelegate, UIScrollViewDelegate, TFNLayoutMetricsEnvironment> { // (Swift)
    /* instance variables */
    TFNUISwift.HostingEnvironmentViewModel hostingViewModel;
    __C.UIViewController hostingController;
    TFNUISwift.TFNHostingControllerNavigationItem ? hostingNavigationItem;
    Swift.Bool viewHasAppeared;
    Swift.Bool prefersNavigationBarHidden;
    weak __C.UIScrollView? discoveredContentScrollView;
    __C.TFNScrollViewDelegateBroadcaster? contentScrollViewDelegateBroadcaster;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) UINavigationItem *navigationItem;
@property (nonatomic, readonly) _Bool tfn_prefersNavigationBarHidden;
@property (nonatomic, readonly) UIScrollView *tfn_contentScrollView;
@property (nonatomic) _Bool tfn_sendContentScrollEventsToParentViewController;

/* instance methods */
- (void)scrollViewWillScrollProgrammatically:(id)programmatically animated:(_Bool)animated;
- (void)scrollViewDidScrollProgrammatically:(id)programmatically animated:(_Bool)animated;
- (void)scrollViewWillProgrammaticallyScrollToTop:(id)top;
- (_Bool)scrollViewShouldProgrammaticallyScrollToTop:(id)top;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(struct CGPoint { double x0; double x1; } *)offset;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(_Bool)decelerate;
- (void)scrollViewWillBeginDecelerating:(id)decelerating;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (void)scrollViewDidEndScrollingAnimation:(id)animation;
- (_Bool)scrollViewShouldScrollToTop:(id)top;
- (void)scrollViewDidScrollToTop:(id)top;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)container;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewSafeAreaInsetsDidChange;
- (void)dynamicColorsDidReloadWithNotification:(id)notification;
- (void)appWillEnterForeground;
- (void)keyboardWillShowWithNotification:(id)notification;
- (void)keyboardDidShowWithNotification:(id)notification;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC10TFNUISwift20TFNHostingController_h */
