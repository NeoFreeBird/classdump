//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC23TwitterProfileModulesUI43ProfileSpotlightConfigurationViewController_h
#define _TtC23TwitterProfileModulesUI43ProfileSpotlightConfigurationViewController_h
@import Foundation;

@class TFNItemsDataViewController, TwitterProfileModules.ProfileModulesContext, TwitterProfileModules.ProfileModulesDataSource, TwitterProfileModules.ProfileScribingCapability, _$s10TFNUISwift26InlineCalloutConfigurationCMn ?, _$sSa -> TwitterProfileModules.ConfigurableProfileModule ?, _$sSo15TFNDataViewItemCSg;

@interface TwitterProfileModulesUI.ProfileSpotlightConfigurationViewController : TFNItemsDataViewController { // (Swift)
    /* instance variables */
    TwitterProfileModules.ProfileModulesContext profileModulesContext;
    TwitterProfileModules.ProfileScribingCapability scribeCapability;
    TwitterProfileModules.ProfileModulesDataSource profileModulesDataSource;
    Swift.Array -> TwitterProfileModules.ConfigurableProfileModule ? modules;
    __C.TFNDataViewItem? $__lazy_storage_$_disclaimerTextItem;
    nominal type descriptor for TFNUISwift.InlineCalloutConfiguration ? $__lazy_storage_$_moreSpotlightsComingSoonItem;
}

/* instance methods */
- (void)viewDidLoad;
- (void)moduleResponseProcessing:(id)processing;
- (void)dealloc;
- (void)update:(_Bool)update;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC23TwitterProfileModulesUI43ProfileSpotlightConfigurationViewController_h */
