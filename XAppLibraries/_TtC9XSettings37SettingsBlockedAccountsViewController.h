//
#ifndef _TtC9XSettings37SettingsBlockedAccountsViewController_h
#define _TtC9XSettings37SettingsBlockedAccountsViewController_h
@import Foundation;

#include "_TtP10TFNUISwift39LegacySegmentedViewControllerDataSource_-Protocol.h"

@class TFNViewController, _$s10TFNUISwift29LegacySegmentedViewControllerCMn, _$sSaySo16UIViewControllerC04viewB0_ _$s6XIcons5XIconOMn icont;

@interface XSettings.SettingsBlockedAccountsViewController : TFNViewController <TFNUISwift.LegacySegmentedViewControllerDataSource> { // (Swift)
    /* instance variables */
    Swift.Array empty-list __C.UIViewControllerviewController first-element-marker  nominal type descriptor for XIcons.XIcon icont tabs;
    nominal type descriptor for TFNUISwift.LegacySegmentedViewController contentViewController;
}

@property (nonatomic, readonly) _Bool tfn_supportsNavigationBarCollapsing;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (long long)numberOfTabsIn:(id)in;
- (id)segmentedViewController:(id)controller pageViewControllerAtIndex:(long long)index;
- (id)segmentedViewController:(id)controller descriptorAtIndex:(long long)index;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC9XSettings37SettingsBlockedAccountsViewController_h */
