//
#ifndef _TtC23TwitterProfileModulesUI36ProfileModuleTextInputViewController_h
#define _TtC23TwitterProfileModulesUI36ProfileModuleTextInputViewController_h
@import Foundation;

@class TFNItemsDataViewController, TwitterProfileModules.ProfileModulesContext, TwitterProfileModulesUI.ProfileModuleTextInputConfiguration, _$sSaySo15TFNDataViewItemCG, _$sSo20TFNFormFieldDataItemCSg, _$sSo23TFSTwitterScribeContextCSg, _$sSo27TFNFormFieldDataItemAdapterC, _$sySSc;

@interface TwitterProfileModulesUI.ProfileModuleTextInputViewController : TFNItemsDataViewController { // (Swift)
    /* instance variables */
    TwitterProfileModules.ProfileModulesContext profileModulesContext;
    TwitterProfileModulesUI.ProfileModuleTextInputConfiguration textInputConfiguration;
    [__C.TFNDataViewItem] additionalItems;
    __C.TFSTwitterScribeContext? scribeContext;
    __C.TFNFormFieldDataItemAdapter formFieldDataItemAdapter;
    (Swift.String) -> () action;
    __C.TFNFormFieldDataItem? $__lazy_storage_$_formFieldDataItem;
}

/* instance methods */
- (void)viewDidLoad;
- (void)cancelButtonPressed;
- (void)saveButtonPressed;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC23TwitterProfileModulesUI36ProfileModuleTextInputViewController_h */
