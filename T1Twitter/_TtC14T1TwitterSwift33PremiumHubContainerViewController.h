//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift33PremiumHubContainerViewController_h
#define _TtC14T1TwitterSwift33PremiumHubContainerViewController_h
@import Foundation;

@class Swift.Bool, TFNViewController, _$s10PremiumHub0aB14ViewControllerCMn ?, _$sSo17TFNTwitterAccountC, _$sSo6UIViewCSg, _$sypSg;

@interface T1TwitterSwift.PremiumHubContainerViewController : TFNViewController { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    nominal type descriptor for PremiumHub.PremiumHubViewController ? hub;
    Swift.Bool hubShowsUpgradeCard;
    Swift.Bool claimsRefreshed;
    Any? notificationObserver;
    Any? complatSwitchesObserver;
    __C.UIView? barTitleView;
    Swift.Bool usesVerticalColumn;
    __C.UIView? $__lazy_storage_$_hiddenTitleView;
    Swift.Bool afterPurchase;
}

/* instance methods */
- (id)scribePage;
- (id)scribeSection;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (_Bool)t1_showsDashAction;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14T1TwitterSwift33PremiumHubContainerViewController_h */
