//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1PrivacyAndSafetySettingsViewController_h
#define T1PrivacyAndSafetySettingsViewController_h
@import Foundation;

#include "T1SettingsSearchableFeatureProvider-Protocol.h"

@class NSArray, TFNItemsDataViewController, TFNTwitterAccount;

@interface T1PrivacyAndSafetySettingsViewController : TFNItemsDataViewController <T1SettingsSearchableFeatureProvider> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *locationState;
    NSNumber"16@0:8 *visibleSections;
    NSNumber"16@0:8 *viewModel;
    NSNumber"16@0:8 *audioSpacesSettingsViewModel;
    NSNumber"16@0:8 *queue;
    NSNumber"16@0:8 *protectPostsItem;
    NSNumber"16@0:8 *protectVideosItem;
    NSNumber"16@0:8 *safetySectionHeader;
    NSNumber"16@0:8 *shareAudioSpacesListeningDataWithFollowerEnabled;
    NSNumber"16@0:8 *markMediaSensitiveEnabledItem;
    NSNumber"16@0:8 *forYouRecommendationsItem;
}

@property (nonatomic, readonly) TFNTwitterAccount *account;
@property (nonatomic, readonly) NSArray *searchableFeatures;

/* instance methods */
- (id)initWithAccount:(id)account;
- (void)viewWillAppear:(_Bool)appear;
- (void)update:(_Bool)update;
- (void)emailAndPhoneDidUpdate:(id)update;
- (void)userBlockingDidUpdate:(id)update;
- (void)accountSettingsDidUpdate:(id)update;
- (void)userPreferencesDidUpdate:(id)update;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* T1PrivacyAndSafetySettingsViewController_h */
