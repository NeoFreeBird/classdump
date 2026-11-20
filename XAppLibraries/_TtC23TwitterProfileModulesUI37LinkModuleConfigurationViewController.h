//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC23TwitterProfileModulesUI37LinkModuleConfigurationViewController_h
#define _TtC23TwitterProfileModulesUI37LinkModuleConfigurationViewController_h
@import Foundation;

@class Swift.Bool, TFNItemsDataViewController, TwitterProfileModules.LinkModuleDataSource, TwitterProfileModules.LinkProfileModule ?, TwitterProfileModules.ProfileModulesContext, TwitterProfileModulesUI.LinkModuleConfigurationViewController.LinkModuleConfiguration, TwitterProfileModulesUI.ModulePreviewItem ?, TwitterProfileModulesUI.ProfileModuleConfigurationItem ?, _$sSDySS TwitterProfileModules.LinkProfileModule.CallToAction, _$sSaySSGSg, _$sSo15TFNDataViewItemCSg, _$sSo15UIBarButtonItemCSg, _$sSo23TFSTwitterScribeContextCSg, _$ss5Int64VMn ?;

@interface TwitterProfileModulesUI.LinkModuleConfigurationViewController : TFNItemsDataViewController { // (Swift)
    /* instance variables */
    TwitterProfileModules.ProfileModulesContext profileModulesContext;
    TwitterProfileModules.LinkModuleDataSource dataSource;
    Swift.Bool visibleOnCreation;
    Swift.Bool shouldShowPromptToPublishOnSave;
    TwitterProfileModules.LinkProfileModule ? initialModule;
    nominal type descriptor for Swift.Int64 ? moduleID;
    TwitterProfileModulesUI.LinkModuleConfigurationViewController.LinkModuleConfiguration initialConfiguration;
    TwitterProfileModulesUI.LinkModuleConfigurationViewController.LinkModuleConfiguration editedConfiguration;
    __C.TFSTwitterScribeContext? $__lazy_storage_$_apiScribeContext;
    __C.TFNDataViewItem? $__lazy_storage_$_previewHeaderItem;
    TwitterProfileModulesUI.ModulePreviewItem ? $__lazy_storage_$_previewItem;
    TwitterProfileModulesUI.ProfileModuleConfigurationItem ? $__lazy_storage_$_urlItem;
    TwitterProfileModulesUI.ProfileModuleConfigurationItem ? $__lazy_storage_$_callToActionItem;
    __C.TFNDataViewItem? $__lazy_storage_$_clearAllDataItem;
    __C.UIBarButtonItem? $__lazy_storage_$_leftBarButtonItem;
    __C.UIBarButtonItem? $__lazy_storage_$_rightBarButtonItem;
    Swift.Dictionary empty-list Swift.String TwitterProfileModules.LinkProfileModule.CallToAction callToActionTextMapping;
    [Swift.String]? $__lazy_storage_$_callToActions;
}

/* instance methods */
- (void)viewDidLoad;
- (void)update:(_Bool)update;
- (void)cancelButtonPressed;
- (void)saveButtonPressed;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC23TwitterProfileModulesUI37LinkModuleConfigurationViewController_h */
