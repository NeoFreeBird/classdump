//
#ifndef T1FeatureSwitchAppReviewViewController_h
#define T1FeatureSwitchAppReviewViewController_h
@import Foundation;

@class TFNItemsDataViewController, TFNTwitterAccount;

@interface T1FeatureSwitchAppReviewViewController : TFNItemsDataViewController {
    /* instance variables */
    TFNTwitterAccount *_account;
}

/* instance methods */
- (id)initWithAccount:(id)account;
- (id)initWithCollectionViewLayout:(id)layout;
- (id)init;
- (id)_t1_featureSwitchesForSection:(long long)section;
- (id)_t1_overridesForFeatureSwitches:(id)switches;
- (id)_t1_addFeatureSwitchOverrideActionItems;
- (void)_t1_addFeatureSwitchOverrideToSection:(long long)section;
- (void)_t1_presentFeatureSwitches:(id)switches overrideForKey:(id)key value:(id)value;
- (void)_t1_notifyUpdatedFeatureSwitches:(id)switches;
- (void)viewDidLoad;
- (void)update:(_Bool)update;
- (void)didSelectItem:(id)item atIndexPath:(id)path;
- (_Bool)canEditItem:(id)item atIndexPath:(id)path;
- (long long)editingStyleForItem:(id)item atIndexPath:(id)path;
- (void)commitEditingStyle:(long long)style forItem:(id)item atIndexPath:(id)path;
- (long long)dashContentItemType;
- (id)scribe;
- (id)scribePage;

@end

#endif /* T1FeatureSwitchAppReviewViewController_h */
