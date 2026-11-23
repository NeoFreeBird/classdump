//
#ifndef T1AdvancedNotificationFiltersSettingsViewController_h
#define T1AdvancedNotificationFiltersSettingsViewController_h
@import Foundation;

#include "TNLCommunicationAgentObserver-Protocol.h"

@class TFNItemsDataViewController, TFNTwitterAccount;

@interface T1AdvancedNotificationFiltersSettingsViewController : TFNItemsDataViewController <TNLCommunicationAgentObserver> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *viewModel;
    NSNumber"16@0:8 *learnMoreLink;
}

@property (nonatomic, readonly) TFNTwitterAccount *account;

/* class methods */
+ (id)DidSaveChangeNotification;

/* instance methods */
- (id)initWithAccount:(id)account;
- (void)viewDidLoad;
- (void)update:(_Bool)update;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeComponent;
- (void)advancedNotificationFilterPropertiesDidUpdate:(id)update;
- (void)accountSettingsDidUpdate:(id)update;
- (void)tnl_communicationAgent:(id)agent didUpdateReachabilityFromPreviousFlags:(unsigned int)flags previousStatus:(long long)status toCurrentFlags:(unsigned int)flags currentStatus:(long long)status;
- (void)reachabilityChanged:(long long)changed;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* T1AdvancedNotificationFiltersSettingsViewController_h */
