//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1TabBarViewController_h
#define T1TabBarViewController_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "T1TabBarViewControllerContainerDelegate-Protocol.h"
#include "T1TabBarViewControllerDelegate-Protocol.h"
#include "TFNCustomTabBarDelegate-Protocol.h"
#include "TFNLayoutMetricsEnvironment-Protocol.h"
#include "TFNTabBarIntegration-Protocol.h"
#include "TFNTabBarViewController-Protocol.h"
#include "TFSProgressCenterObserver-Protocol.h"

@class NSArray, NSString, TFNBarProgressView, TFNCustomTabBar, TFNNavigationChromeHandler, UIView, UIViewController;

@interface T1TabBarViewController : UIViewController <TFNTabBarViewController, TFNCustomTabBarDelegate, TFNLayoutMetricsEnvironment, TFSProgressCenterObserver, TFNTabBarIntegration>

@property (readonly, nonatomic) UIView *tabBarBackgroundView;
@property (readonly, nonatomic) TFNNavigationChromeHandler *chromeHandler;
@property (readonly, nonatomic) UIView *tabBarDivider;
@property (nonatomic) unsigned long long progressViewHideAnimationCount;
@property (readonly, nonatomic) TFNBarProgressView *progressView;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleTabBarFrame;
@property (weak, nonatomic) id <T1TabBarViewControllerDelegate> delegate;
@property (copy, nonatomic) NSArray *tabViews;
@property (nonatomic) long long selectedTabIndex;
@property (nonatomic) _Bool autoHideTabBarWithoutMultipleTabs;
@property (nonatomic) _Bool ignoreMaximumTabWidth;
@property (weak, nonatomic) id <T1TabBarViewControllerContainerDelegate> containerDelegate;
@property (readonly, nonatomic) TFNCustomTabBar *tabBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id <NSCopying> uniqueID;
@property (nonatomic) double tabBarCollapseRatio;
@property (nonatomic) long long tabBarState;
@property (nonatomic) _Bool tabBarShadowHidden;
@property (nonatomic) _Bool useOnlyOpacityForVisibility;

/* class methods */
+ (struct CGSize { double x0; double x1; })preferredContentSizeForTabCount:(long long)count;

/* instance methods */
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (void)selectTabAtIndex:(long long)index;
- (void)_t1_updateTabViews;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)loadView;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)_t1_layoutTabBar;
- (_Bool)isTabBarTransitioning;
- (_Bool)hasVisibleDockedBars;
- (_Bool)isBottomSegmentActive;
- (void)_t1_updateVisibleTabBarFrame;
- (void)_t1_updateBackground;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tabBarFrameInView:(id)view;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tabBarButtonFrameForIndex:(long long)index inView:(id)view;
- (_Bool)isTabBarHidden;
- (_Bool)arePointerEventsEnabled;
- (void)setTabBarScrolling:(_Bool)scrolling;
- (void)setTabBarHidden:(_Bool)hidden withDuration:(double)duration completion:(id /* block */)completion;
- (void)setTabBarHidden:(_Bool)hidden withDuration:(double)duration;
- (void)setTabBarOpacity:(double)opacity;
- (void)_t1_updateTabBarHidden;
- (id)provideTabBar;
- (_Bool)customTabBar:(id)bar selectTabRequiresLongPressFailureForTabAtIndex:(long long)index withView:(id)view;
- (void)customTabBar:(id)bar selectTabAtIndex:(long long)index withView:(id)view;
- (void)customTabBar:(id)bar longPressOnTabAtIndex:(long long)index withView:(id)view;
- (void)customTabBarHighlightedTabIndexChanged:(id)changed;
- (struct CGSize { double x0; double x1; })customTabBar:(id)bar sizeForTabAtIndex:(long long)index withView:(id)view;
- (long long)customTabBar:(id)bar contentModeForTabAtIndex:(long long)index withView:(id)view;
- (_Bool)customTabBar:(id)bar gestureRecognizer:(id)recognizer shouldRequireFailureOfGestureRecognizer:(id)recognizer;
- (void)progressCenter:(id)center didStartProgress:(id)progress;
- (void)progressCenter:(id)center didUpdateProgress:(id)progress;
- (void)progressCenter:(id)center didCompleteProgress:(id)progress;
- (void)_t1_setProgressViewHidden:(_Bool)hidden animated:(_Bool)animated;
- (void)_t1_setProgressViewProgress:(float)progress animated:(_Bool)animated completion:(id /* block */)completion;
- (void)_tfn_appWillEnterForeground;
- (void)_tfn_accessibilityReduceTransparencyDidChange;
- (void)_tfn_dynamicColorsDidReload:(id)reload;
- (_Bool)isTabBarShadowHidden;

@end

#endif /* T1TabBarViewController_h */
