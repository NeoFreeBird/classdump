//
#ifndef T1UnifiedNotificationsSettingsViewController_h
#define T1UnifiedNotificationsSettingsViewController_h
@import Foundation;

#include "T1SettingsSearchableFeatureProvider-Protocol.h"
#include "TNLCommunicationAgentObserver-Protocol.h"

@class NSArray, TFNItemsDataViewController, TFNTwitterAccount;

@interface T1UnifiedNotificationsSettingsViewController : TFNItemsDataViewController <TNLCommunicationAgentObserver, T1SettingsSearchableFeatureProvider> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *queue;
    NSNumber"16@0:8 *settingsLoader;
    NSNumber"16@0:8 *visibleSections;
    NSNumber"16@0:8 *$__lazy_storage_$_qualityFilterItem;
    NSNumber"16@0:8 *$__lazy_storage_$_universalQualityFilterEnabled;
    NSNumber"16@0:8 *$__lazy_storage_$_qualityFilterDescriptionItem;
}

@property (nonatomic, readonly) TFNTwitterAccount *account;
@property (nonatomic, readonly) NSArray *searchableFeatures;

/* instance methods */
- (id)initWithAccount:(id)account;
- (void)settingsDidUpdate:(id)update;
- (void)viewWillAppear:(_Bool)appear;
- (void)update:(_Bool)update;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (void)tnl_communicationAgent:(id)agent didUpdateReachabilityFromPreviousFlags:(unsigned int)flags previousStatus:(long long)status toCurrentFlags:(unsigned int)flags currentStatus:(long long)status;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* T1UnifiedNotificationsSettingsViewController_h */
