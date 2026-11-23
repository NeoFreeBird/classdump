//
#ifndef _TtC23TwitterProfileModulesUI42MobileAppModuleConfigurationViewController_h
#define _TtC23TwitterProfileModulesUI42MobileAppModuleConfigurationViewController_h
@import Foundation;

@class Swift.Bool, TFNItemsDataViewController, TwitterProfileModules.MobileAppModule ?, TwitterProfileModules.MobileAppModuleDataSource, TwitterProfileModules.ProfileModulesContext, TwitterProfileModules.ProfileScribingCapability ?, TwitterProfileModulesUI.MobileAppModuleConfigurationViewController.State, TwitterProfileModulesUI.MobileAppModuleConfigurationViewController.ViewModel, _$sSo15UIBarButtonItemCSg, _$sSo23TFSTwitterScribeContextCSg;

@interface TwitterProfileModulesUI.MobileAppModuleConfigurationViewController : TFNItemsDataViewController { // (Swift)
    /* instance variables */
    TwitterProfileModules.MobileAppModule ? mobileAppModule;
    TwitterProfileModulesUI.MobileAppModuleConfigurationViewController.ViewModel initialViewModel;
    TwitterProfileModules.ProfileScribingCapability ? $__lazy_storage_$_scribeCapability;
    TwitterProfileModules.MobileAppModuleDataSource mobileAppModulesDataSource;
    Swift.Bool visibleOnCreation;
    Swift.Bool shouldShowPromptToPublishOnSave;
    __C.TFSTwitterScribeContext? $__lazy_storage_$_scribeContext;
    TwitterProfileModulesUI.MobileAppModuleConfigurationViewController.ViewModel editedViewModel;
    __C.UIBarButtonItem? $__lazy_storage_$_leftBarButtonItem;
    __C.UIBarButtonItem? $__lazy_storage_$_rightBarButtonItem;
    TwitterProfileModules.ProfileModulesContext profileModulesContext;
    TwitterProfileModulesUI.MobileAppModuleConfigurationViewController.State state;
}

/* instance methods */
- (void)viewDidLoad;
- (void)update:(_Bool)update;
- (void)cancelButtonPressed;
- (void)saveButtonPressed;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC23TwitterProfileModulesUI42MobileAppModuleConfigurationViewController_h */
