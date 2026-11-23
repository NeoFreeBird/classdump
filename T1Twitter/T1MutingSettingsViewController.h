//
#ifndef T1MutingSettingsViewController_h
#define T1MutingSettingsViewController_h
@import Foundation;

#include "T1SettingsSearchableFeatureProvider-Protocol.h"

@class NSArray, TFNItemsDataViewController, UIViewController;

@interface T1MutingSettingsViewController : TFNItemsDataViewController <T1SettingsSearchableFeatureProvider> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *muteKeywordSettingsController;
}

@property (nonatomic, copy) NSArray *searchableFeatures;
@property (nonatomic, readonly) UIViewController *muteKeywordListSettingsViewController;

/* instance methods */
- (id)initWithAccount:(id)account;
- (void)viewWillAppear:(_Bool)appear;
- (void)update:(_Bool)update;
- (void)genericMenuItemUpdateHandler;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* T1MutingSettingsViewController_h */
