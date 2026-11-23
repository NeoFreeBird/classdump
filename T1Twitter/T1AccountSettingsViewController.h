//
#ifndef T1AccountSettingsViewController_h
#define T1AccountSettingsViewController_h
@import Foundation;

#include "TNLCommunicationAgentObserver-Protocol.h"

@class TFNItemsDataViewController, TFNTwitterAccount;

@interface T1AccountSettingsViewController : TFNItemsDataViewController <TNLCommunicationAgentObserver> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *changeCountryPresenter;
    NSNumber"16@0:8 *$__lazy_storage_$_countryDescriptionItem;
    NSNumber"16@0:8 *emailAndPhoneLoader;
    NSNumber"16@0:8 *changeUsernamePresenter;
    NSNumber"16@0:8 *verificationRequestWebViewDelegateHandler;
    NSNumber"16@0:8 *$__lazy_storage_$_changePasswordItem;
    NSNumber"16@0:8 *$__lazy_storage_$_securityItem;
    NSNumber"16@0:8 *$__lazy_storage_$_twitterDataItem;
    NSNumber"16@0:8 *$__lazy_storage_$_connectedAppsItem;
}

@property (nonatomic, readonly) TFNTwitterAccount *account;

/* instance methods */
- (id)initWithAccount:(id)account;
- (void)tnl_communicationAgent:(id)agent didRegisterObserverWithInitialReachabilityFlags:(unsigned int)flags status:(long long)status carrierInfo:(id)info WWANRadioAccessTechnology:(id)technology captivePortalStatus:(long long)status;
- (void)tnl_communicationAgent:(id)agent didUpdateReachabilityFromPreviousFlags:(unsigned int)flags previousStatus:(long long)status toCurrentFlags:(unsigned int)flags currentStatus:(long long)status;
- (void)reachabilityChanged:(long long)changed;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidLoad;
- (void)applicationWillEnterForegroundFromBackground:(id)background;
- (void)update:(_Bool)update;
- (void)settingsDidUpdate:(id)update;
- (void)emailAndPhoneInfoDidUpdate:(id)update;
- (void)accountChanged:(id)changed;
- (void)accountChangedWithNotification:(id)notification;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* T1AccountSettingsViewController_h */
