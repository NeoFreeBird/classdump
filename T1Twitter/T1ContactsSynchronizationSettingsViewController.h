//
#ifndef T1ContactsSynchronizationSettingsViewController_h
#define T1ContactsSynchronizationSettingsViewController_h
@import Foundation;

@class TFNItemsDataViewController;

@interface T1ContactsSynchronizationSettingsViewController : TFNItemsDataViewController { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *kUploadDelay;
    NSNumber"16@0:8 *$__lazy_storage_$_optInItem;
    NSNumber"16@0:8 *$__lazy_storage_$_optInDetails;
    NSNumber"16@0:8 *removeAllContactsItem;
    NSNumber"16@0:8 *removeAllContactsDetails;
}

/* instance methods */
- (id)initWithAccount:(id)account;
- (void)viewDidLoad;
- (_Bool)accessibilityPerformEscape;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* T1ContactsSynchronizationSettingsViewController_h */
