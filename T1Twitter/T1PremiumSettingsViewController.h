//
#ifndef T1PremiumSettingsViewController_h
#define T1PremiumSettingsViewController_h
@import Foundation;

@class TFNItemsDataViewController;

@interface T1PremiumSettingsViewController : TFNItemsDataViewController { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *scribeContext;
}

/* instance methods */
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeComponent;
- (id)initWithAccount:(id)account scribeContext:(id)context;
- (void)update:(_Bool)update;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* T1PremiumSettingsViewController_h */
