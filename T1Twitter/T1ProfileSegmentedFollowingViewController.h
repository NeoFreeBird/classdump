//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ProfileSegmentedFollowingViewController_h
#define T1ProfileSegmentedFollowingViewController_h
@import Foundation;

#include "T1ProfileSegmentedFollowingViewControllerDataSource.h"
#include "T1ProfileViewControllerUserContextProvider-Protocol.h"
#include "XNAVConfigurationProviding-Protocol.h"
#include "_TtP10TFNUISwift37LegacySegmentedViewControllerDelegate_-Protocol.h"

@class NSArray, NSString, TFNTwitterAccount, TFNTwitterUserDataSource, TFNViewController, TUITwitterUserContext, UIScrollView, XNAVConfiguration, _TtC10TFNUISwift29LegacySegmentedViewController;

@interface T1ProfileSegmentedFollowingViewController : TFNViewController <XNAVConfigurationProviding, TFNUISwift.LegacySegmentedViewControllerDelegate, T1ProfileViewControllerUserContextProvider> {
    /* instance variables */
    _Bool _shouldShowPeopleButton;
    TFNTwitterUserDataSource *_userDataSource;
    long long _initialSelectedIndex;
}

@property (readonly, nonatomic) XNAVConfiguration *xnav_navigationConfiguration;
@property (readonly, nonatomic) UIScrollView *xnav_contentScrollView;
@property (readonly, nonatomic) _Bool xnav_isScrollContentExhausted;
@property (readonly, copy, nonatomic) NSArray *xnav_navigationBarAccessoryViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) TFNUISwift.LegacySegmentedViewController *contentViewController;
@property (readonly, nonatomic) T1ProfileSegmentedFollowingViewControllerDataSource *retainedDataSource;
@property (readonly, nonatomic) TUITwitterUserContext *profileViewControllerUserContext;

/* instance methods */
- (id)initWithTab:(long long)tab userDataSource:(id)source account:(id)account showFollowersYouKnow:(_Bool)know shouldShowPeopleButton:(_Bool)button shouldHideCreatorSubscriptions:(_Bool)subscriptions;
- (id)init;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (_Bool)tfn_prefersNavigationBarShadowHidden;
- (_Bool)tfn_supportsNavigationBarCollapsing;
- (_Bool)tfn_prefersNavigationBarExpandedWhenScrolledToBottom;
- (_Bool)tfn_isContentScrolledToBottom;
- (_Bool)t1_showsPeopleAction;
- (long long)dashContentItemType;
- (_Bool)switchToDashContentItemType:(long long)type;
- (void)segmentedViewController:(id)controller didSelectViewController:(id)controller atIndex:(long long)index previousIndex:(long long)index trigger:(long long)trigger;
- (_Bool)_t1_shouldShowFollowerCountTitle;
- (void)_t1_updateFollowerCountTitle;

@end

#endif /* T1ProfileSegmentedFollowingViewController_h */
