//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1DataUsageSettingsViewController_h
#define T1DataUsageSettingsViewController_h
@import Foundation;

#include "T1SettingsSearchableFeatureProvider-Protocol.h"

@class NSArray, TFNItemsDataViewController;

@interface T1DataUsageSettingsViewController : TFNItemsDataViewController <T1SettingsSearchableFeatureProvider> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *dataSaverSettings;
    NSNumber"16@0:8 *$__lazy_storage_$_mediaCacheViewController;
    NSNumber"16@0:8 *$__lazy_storage_$_webViewCacheViewController;
    NSNumber"16@0:8 *$__lazy_storage_$_dataSaverItem;
    NSNumber"16@0:8 *$__lazy_storage_$_dataSaverDescriptionItem;
    NSNumber"16@0:8 *$__lazy_storage_$_imageQualityDescriptionItem;
    NSNumber"16@0:8 *$__lazy_storage_$_highQualityImagesUploadDescriptionItem;
    NSNumber"16@0:8 *$__lazy_storage_$_videoQualityDescriptionItem;
    NSNumber"16@0:8 *$__lazy_storage_$_highQualityVideoUploadsDescriptionItem;
    NSNumber"16@0:8 *$__lazy_storage_$_videoAutoplayHelpItem;
    NSNumber"16@0:8 *$__lazy_storage_$_videoAutoplayDescriptionItem;
}

@property (nonatomic, copy) NSArray *searchableFeatures;

/* instance methods */
- (id)initWithAccount:(id)account;
- (void)viewWillAppear:(_Bool)appear;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (void)update:(_Bool)update;
- (void)dataSaverSettingsDidChange:(id)change;
- (void)mediaSettingsDidChange:(id)change;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* T1DataUsageSettingsViewController_h */
