//
#ifndef T1NotificationsViewController_h
#define T1NotificationsViewController_h
@import Foundation;

#include "T1URTNotificationTimelineRefresherDelegate-Protocol.h"
#include "TFNTooltipDelegate-Protocol.h"
#include "_TtP10TFNUISwift39LegacySegmentedViewControllerDataSource_-Protocol.h"

@class TFNTwitterAccount, TFNViewController, UIView;

@interface T1NotificationsViewController : TFNViewController <TFNTooltipDelegate, TFNUISwift.LegacySegmentedViewControllerDataSource, T1URTNotificationTimelineRefresherDelegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *urtViewControllers;
    NSNumber"16@0:8 *urtTimelineRefreshers;
    NSNumber"16@0:8 *$__lazy_storage_$_segmentedController;
    NSNumber"16@0:8 *settingsButton;
    NSNumber"16@0:8 *pushNotificationPermissionsAuthorizationStatus;
    NSNumber"16@0:8 *$__lazy_storage_$_notificationPermissionsBanner;
    NSNumber"16@0:8 *$__lazy_storage_$_navigationAccessoryStackView;
    NSNumber"16@0:8 *claimsObserver;
    NSNumber"16@0:8 *spaceCreationGate;
    NSNumber"16@0:8 *keepsTabStripInSafeArea;
}

@property (nonatomic, readonly) TFNTwitterAccount *account;
@property (nonatomic, readonly) unsigned long long tfn_supportedInterfaceOrientations;
@property (nonatomic, readonly) _Bool canBecomeFirstResponder;
@property (nonatomic, readonly) UIView *tfn_navigationBarAccessoryView;
@property (nonatomic, readonly) _Bool tfn_prefersNavigationBarShadowHidden;

/* class methods */
+ (id)muteKeywordV2TooltipEvent;
+ (id)advancedFiltersTooltipEvent;
+ (id)showGenericNotificationCaretTooltipEvent;

/* instance methods */
- (id)initWithAccount:(id)account interactionsTimelineBridge:(id)bridge;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (_Bool)becomeFirstResponder;
- (void)viewDidLayoutSubviews;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (void)applicationDidBecomeActive:(id)active;
- (_Bool)t1_showsDashAction;
- (void)tfn_navigationControllerDidLayoutBarItems;
- (_Bool)tui_showsActionButton;
- (_Bool)tooltipShouldPresent:(id)present;
- (void)tooltipDidTap:(id)tap;
- (id)scribePage;
- (id)scribeSection;
- (void)dismissNotificationsDisabledBanner;
- (void)enableNotificationsFromBanner:(id)banner;
- (void)showSettings;
- (id)tfs_debugStrings;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (_Bool)timelineRefresherShouldLoadTop:(id)top;
- (long long)numberOfTabsIn:(id)in;
- (id)segmentedViewController:(id)controller pageViewControllerAtIndex:(long long)index;
- (id)segmentedViewController:(id)controller descriptorAtIndex:(long long)index;
- (long long)dashContentItemType;
- (void)accountUserDefaultsDidUpdate:(id)update;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* T1NotificationsViewController_h */
