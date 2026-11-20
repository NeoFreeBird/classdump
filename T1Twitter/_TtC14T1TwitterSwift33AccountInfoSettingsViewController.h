//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift33AccountInfoSettingsViewController_h
#define _TtC14T1TwitterSwift33AccountInfoSettingsViewController_h
@import Foundation;

#include "T1SettingsSearchableFeatureProvider-Protocol.h"
#include "TNLCommunicationAgentObserver-Protocol.h"

@class NSArray, T1TwitterSwift.AutomationNavigationCoordinator ?, T1TwitterSwift.PCFAccountNavigationCoordinator ?, T1TwitterSwift.SettingsChangeCountryPresenter, T1TwitterSwift.SettingsChangeUsernamePresenter, T1TwitterSwift.VerificationNavigationCoordinator ?, TFNItemsDataViewController, TFNTwitterAccount, _$s14TFSTwitterCore22TwitterUserPreferencesCMn ?, _$s17TFSUtilitiesSwift26FailableAsynchronousLoaderCMn T1TwitterSwift.AccountSettingsEmailAndPhoneInfo, _$s20TwitterActionService0bC0CMn, _$sSaySSG, _$sSo15TFNDataViewItemCSg, _$sSo17TFNTwitterAccountC;

@interface T1TwitterSwift.AccountInfoSettingsViewController : TFNItemsDataViewController <TNLCommunicationAgentObserver, T1SettingsSearchableFeatureProvider> { // (Swift)
    /* instance variables */
    T1TwitterSwift.SettingsChangeCountryPresenter changeCountryPresenter;
    __C.TFNDataViewItem? $__lazy_storage_$_countryDescriptionItem;
    nominal type descriptor for TFSUtilitiesSwift.FailableAsynchronousLoader T1TwitterSwift.AccountSettingsEmailAndPhoneInfo emailAndPhoneLoader;
    T1TwitterSwift.SettingsChangeUsernamePresenter changeUsernamePresenter;
    nominal type descriptor for TwitterActionService.ActionService actionService;
    T1TwitterSwift.VerificationNavigationCoordinator ? verificationNavigationCoordinator;
    T1TwitterSwift.AutomationNavigationCoordinator ? automationNavigationCoordinator;
    T1TwitterSwift.PCFAccountNavigationCoordinator ? pcfAccountNavigationCoordinator;
    nominal type descriptor for TFSTwitterCore.TwitterUserPreferences ? userPreferences;
}

@property (nonatomic, readonly) TFNTwitterAccount *account;
@property (nonatomic, copy) NSArray *searchableFeatures;

/* instance methods */
- (id)initWithAccount:(id)account;
- (void)tnl_communicationAgent:(id)agent didRegisterObserverWithInitialReachabilityFlags:(unsigned int)flags status:(long long)status carrierInfo:(id)info WWANRadioAccessTechnology:(id)technology captivePortalStatus:(long long)status;
- (void)tnl_communicationAgent:(id)agent didUpdateReachabilityFromPreviousFlags:(unsigned int)flags previousStatus:(long long)status toCurrentFlags:(unsigned int)flags currentStatus:(long long)status;
- (void)reachabilityChanged:(long long)changed;
- (void)viewWillAppear:(_Bool)appear;
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

#endif /* _TtC14T1TwitterSwift33AccountInfoSettingsViewController_h */
