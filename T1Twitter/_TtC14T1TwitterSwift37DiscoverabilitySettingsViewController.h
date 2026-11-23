//
#ifndef _TtC14T1TwitterSwift37DiscoverabilitySettingsViewController_h
#define _TtC14T1TwitterSwift37DiscoverabilitySettingsViewController_h
@import Foundation;

#include "T1SettingsSearchableFeatureProvider-Protocol.h"

@class NSArray, Swift.Bool, T1TwitterSwift.AsynchronouslySetSwitchItem ?, T1TwitterSwift.PrivacyAndSafetySettingsViewModel, TFNItemsDataViewController, _$s17TFSUtilitiesSwift25AsynchronouslySetPropertyCMn _$sySbGSg, _$sSaySSG, _$sSd, _$sSo15TFNDataViewItemC, _$sSo15TFNDataViewItemCSg, _$sSo17TFNTwitterAccountC;

@interface T1TwitterSwift.DiscoverabilitySettingsViewController : TFNItemsDataViewController <T1SettingsSearchableFeatureProvider> { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    T1TwitterSwift.PrivacyAndSafetySettingsViewModel viewModel;
    __C.TFNDataViewItem? $__lazy_storage_$_discoverableByEmail;
    __C.TFNDataViewItem? $__lazy_storage_$_discoverableByPhone;
    __C.TFNDataViewItem? $__lazy_storage_$_updateEmailItem;
    __C.TFNDataViewItem? $__lazy_storage_$_updatePhoneItem;
    Swift.Double kUploadDelay;
    Swift.Bool optInPending;
    nominal type descriptor for TFSUtilitiesSwift.AsynchronouslySetProperty _$sySbGSg $__lazy_storage_$_optInEnabled;
    T1TwitterSwift.AsynchronouslySetSwitchItem ? $__lazy_storage_$_optInItem;
    __C.TFNDataViewItem? $__lazy_storage_$_optInDetails;
    __C.TFNDataViewItem removeAllContactsItem;
}

@property (nonatomic, copy) NSArray *searchableFeatures;

/* instance methods */
- (void)update:(_Bool)update;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)emailAndPhoneDidUpdate:(id)update;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC14T1TwitterSwift37DiscoverabilitySettingsViewController_h */
