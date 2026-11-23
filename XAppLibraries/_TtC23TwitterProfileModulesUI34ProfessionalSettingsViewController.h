//
#ifndef _TtC23TwitterProfileModulesUI34ProfessionalSettingsViewController_h
#define _TtC23TwitterProfileModulesUI34ProfessionalSettingsViewController_h
@import Foundation;

@class Swift.Bool, TFNItemsDataViewController, TwitterProfileModules.ProfileModulesContext, TwitterProfileModules.ProfileModulesDataSource, TwitterProfileModules.ProfileScribingCapability, TwitterProfileModulesUI.ProfessionalProfileInvalidationChecker ?, TwitterProfileModulesUI.ProfessionalProfilesFactory.ProfessionalProfile, TwitterProfileModulesUI42ProfessionalSettingsViewControllerDelegate_pSgXw, TwitterProfileModulesUI59ProfessionalSettingsViewControllerCategorySelectionDelegate_pSgXw, _$sSa -> TwitterProfileModules.ConfigurableProfileModule ?;

@interface TwitterProfileModulesUI.ProfessionalSettingsViewController : TFNItemsDataViewController { // (Swift)
    /* instance variables */
    Swift.Array -> TwitterProfileModules.ConfigurableProfileModule ? modules;
    TwitterProfileModulesUI42ProfessionalSettingsViewControllerDelegate_pSgXw profileModulesDelegate;
    TwitterProfileModulesUI59ProfessionalSettingsViewControllerCategorySelectionDelegate_pSgXw categorySelectionDelegate;
    TwitterProfileModules.ProfileModulesDataSource profileModulesDataSource;
    Swift.Bool moduleLoadingInProgress;
    TwitterProfileModulesUI.ProfessionalProfilesFactory.ProfessionalProfile professionalProfile;
    TwitterProfileModules.ProfileScribingCapability scribeCapability;
    Swift.Bool hasScribedCategoryLabelImpression;
    TwitterProfileModules.ProfileModulesContext profileModulesContext;
    TwitterProfileModulesUI.ProfessionalProfileInvalidationChecker ? profileInvalidationChecker;
}

/* instance methods */
- (void)viewDidLoad;
- (void)moduleResponseProcessing:(id)processing;
- (void)dealloc;
- (double)estimatedTableViewHeightForItem:(id)item atIndexPath:(id)path;
- (void)didSelectItem:(id)item atIndexPath:(id)path;
- (void)update:(_Bool)update;
- (void)viewDidAppear:(_Bool)appear;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC23TwitterProfileModulesUI34ProfessionalSettingsViewController_h */
