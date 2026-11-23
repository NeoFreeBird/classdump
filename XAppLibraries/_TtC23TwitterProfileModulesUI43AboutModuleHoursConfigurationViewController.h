//
#ifndef _TtC23TwitterProfileModulesUI43AboutModuleHoursConfigurationViewController_h
#define _TtC23TwitterProfileModulesUI43AboutModuleHoursConfigurationViewController_h
@import Foundation;

@class TFNItemsDataViewController, TwitterProfileModules.ProfileModulesContext, TwitterProfileModules.ProfileScribingCapability, TwitterProfileModulesUI.AboutModuleHoursConfigurationViewController.Model, TwitterProfileModulesUI.AboutModuleHoursConfigurationViewControllerDelegate ?, TwitterProfileModulesUI.ProfileModuleConfigurationItem ?, TwitterProfileModulesUI.TimeZoneHelper, _$sSi;

@interface TwitterProfileModulesUI.AboutModuleHoursConfigurationViewController : TFNItemsDataViewController { // (Swift)
    /* instance variables */
    TwitterProfileModulesUI.AboutModuleHoursConfigurationViewController.Model initialModel;
    TwitterProfileModulesUI.AboutModuleHoursConfigurationViewController.Model editedModel;
    TwitterProfileModulesUI.AboutModuleHoursConfigurationViewControllerDelegate ? delegate;
    TwitterProfileModules.ProfileModulesContext profileModulesContext;
    TwitterProfileModules.ProfileScribingCapability scribeCapability;
    TwitterProfileModulesUI.TimeZoneHelper timeZoneHelper;
    TwitterProfileModulesUI.ProfileModuleConfigurationItem ? $__lazy_storage_$_timeZoneItem;
    Swift.Int maxOperatingHours;
}

/* instance methods */
- (void)viewDidLoad;
- (void)update:(_Bool)update;
- (void)cancelButtonPressed;
- (void)saveButtonPressed;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC23TwitterProfileModulesUI43AboutModuleHoursConfigurationViewController_h */
