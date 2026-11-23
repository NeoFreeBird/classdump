//
#ifndef T1ContentPreferencesSettingsViewController_h
#define T1ContentPreferencesSettingsViewController_h
@import Foundation;

#include "T1SettingsSearchableFeatureProvider-Protocol.h"

@class NSArray, TFNItemsDataViewController, TFNTwitterAccount;

@interface T1ContentPreferencesSettingsViewController : TFNItemsDataViewController <T1SettingsSearchableFeatureProvider> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *settingsOnboardingFlowPresenter;
    NSNumber"16@0:8 *visibleSections;
}

@property (nonatomic, readonly) TFNTwitterAccount *account;
@property (nonatomic, copy) NSArray *searchableFeatures;

/* class methods */
+ (id)languagesSettingsViewControllerFor:(id)_for;

/* instance methods */
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (void)settingsDidUpdate:(id)update;
- (id)initWithAccount:(id)account;
- (void)viewWillAppear:(_Bool)appear;
- (void)update:(_Bool)update;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* T1ContentPreferencesSettingsViewController_h */
