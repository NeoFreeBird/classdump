//
#ifndef _TtC23TwitterProfileModulesUI29MobileAppModuleViewController_h
#define _TtC23TwitterProfileModulesUI29MobileAppModuleViewController_h
@import Foundation;

@class TFNViewController, TwitterProfileModules.MobileAppModule.App, TwitterProfileModules.ProfileModulesContext, TwitterProfileModulesUI.MobileAppModuleView ?;

@interface TwitterProfileModulesUI.MobileAppModuleViewController : TFNViewController { // (Swift)
    /* instance variables */
    TwitterProfileModules.MobileAppModule.App viewModel;
    TwitterProfileModules.ProfileModulesContext context;
    TwitterProfileModulesUI.MobileAppModuleView ? $__lazy_storage_$_moduleView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC23TwitterProfileModulesUI29MobileAppModuleViewController_h */
