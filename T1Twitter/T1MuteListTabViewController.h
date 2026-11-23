//
#ifndef T1MuteListTabViewController_h
#define T1MuteListTabViewController_h
@import Foundation;

#include "XNAVConfigurationProviding-Protocol.h"
#include "_TtP10TFNUISwift39LegacySegmentedViewControllerDataSource_-Protocol.h"

@class NSArray, NSString, TFNTwitterAccount, TFNViewController, UIScrollView, XNAVConfiguration, _TtC10TFNUISwift29LegacySegmentedViewController;

@interface T1MuteListTabViewController : TFNViewController <XNAVConfigurationProviding, TFNUISwift.LegacySegmentedViewControllerDataSource>

@property (readonly, nonatomic) XNAVConfiguration *xnav_navigationConfiguration;
@property (readonly, nonatomic) UIScrollView *xnav_contentScrollView;
@property (readonly, nonatomic) _Bool xnav_isScrollContentExhausted;
@property (readonly, copy, nonatomic) NSArray *xnav_navigationBarAccessoryViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) NSArray *viewControllers;
@property (readonly, nonatomic) TFNUISwift.LegacySegmentedViewController *contentViewController;

/* instance methods */
- (id)initWithAccount:(id)account sourceIdentifier:(id)identifier;
- (id)init;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (void)viewDidLoad;
- (_Bool)tfn_prefersNavigationBarShadowHidden;
- (_Bool)tfn_supportsNavigationBarCollapsing;
- (_Bool)tfn_prefersNavigationBarExpandedWhenScrolledToBottom;
- (_Bool)tfn_isContentScrolledToBottom;
- (long long)numberOfTabsIn:(id)in;
- (id)segmentedViewController:(id)controller pageViewControllerAtIndex:(long long)index;
- (id)segmentedViewController:(id)controller descriptorAtIndex:(long long)index;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;

@end

#endif /* T1MuteListTabViewController_h */
