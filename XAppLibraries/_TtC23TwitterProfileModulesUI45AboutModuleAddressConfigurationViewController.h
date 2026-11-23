//
#ifndef _TtC23TwitterProfileModulesUI45AboutModuleAddressConfigurationViewController_h
#define _TtC23TwitterProfileModulesUI45AboutModuleAddressConfigurationViewController_h
@import Foundation;

@class TFNItemsDataViewController, TwitterProfileModules.ProfileModulesContext, TwitterProfileModules.ProfileScribingCapability, TwitterProfileModulesUI.AboutModuleAddressConfigurationViewController.Model, TwitterProfileModulesUI.AboutModuleAddressConfigurationViewControllerDelegate ?, TwitterProfileModulesUI.ProfileModuleConfigurationItem ?, _$sSDyS2SG, _$sSaySSGSg, _$sSo15TFNDataViewItemCSg;

@interface TwitterProfileModulesUI.AboutModuleAddressConfigurationViewController : TFNItemsDataViewController { // (Swift)
    /* instance variables */
    TwitterProfileModulesUI.AboutModuleAddressConfigurationViewControllerDelegate ? delegate;
    TwitterProfileModules.ProfileModulesContext profileModulesContext;
    TwitterProfileModules.ProfileScribingCapability scribeCapability;
    TwitterProfileModulesUI.AboutModuleAddressConfigurationViewController.Model initialModel;
    TwitterProfileModulesUI.AboutModuleAddressConfigurationViewController.Model editedModel;
    TwitterProfileModulesUI.ProfileModuleConfigurationItem ? $__lazy_storage_$_streetItem;
    TwitterProfileModulesUI.ProfileModuleConfigurationItem ? $__lazy_storage_$_postalCodeItem;
    TwitterProfileModulesUI.ProfileModuleConfigurationItem ? $__lazy_storage_$_cityItem;
    TwitterProfileModulesUI.ProfileModuleConfigurationItem ? $__lazy_storage_$_stateItem;
    [Swift.String : Swift.String] countriesToIsoCodes;
    [Swift.String]? $__lazy_storage_$_countries;
    TwitterProfileModulesUI.ProfileModuleConfigurationItem ? $__lazy_storage_$_countryItem;
    __C.TFNDataViewItem? $__lazy_storage_$_disclaimerTextItem;
}

/* instance methods */
- (void)viewDidLoad;
- (void)cancelButtonPressed;
- (void)saveButtonPressed;
- (void)update:(_Bool)update;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC23TwitterProfileModulesUI45AboutModuleAddressConfigurationViewController_h */
