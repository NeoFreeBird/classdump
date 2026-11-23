//
#ifndef _TtC14T1TwitterSwift32YourTweetsSettingsViewController_h
#define _TtC14T1TwitterSwift32YourTweetsSettingsViewController_h
@import Foundation;

#include "T1SettingsSearchableFeatureProvider-Protocol.h"

@class NSArray, T1TwitterSwift.PrivacyAndSafetySettingsViewModel, TFNItemsDataViewController, _$sSaySSG, _$sSo15TFNDataViewItemC, _$sSo16NSOperationQueueC, _$sSo17TFNTwitterAccountC;

@interface T1TwitterSwift.YourTweetsSettingsViewController : TFNItemsDataViewController <T1SettingsSearchableFeatureProvider> { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    __C.TFNDataViewItem markMediaSensitiveEnabledItem;
    T1TwitterSwift.PrivacyAndSafetySettingsViewModel viewModel;
    __C.NSOperationQueue queue;
}

@property (nonatomic, copy) NSArray *searchableFeatures;

/* instance methods */
- (long long)dashContentItemType;
- (id)scribe;
- (id)scribePage;
- (void)viewWillAppear:(_Bool)appear;
- (void)update:(_Bool)update;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC14T1TwitterSwift32YourTweetsSettingsViewController_h */
