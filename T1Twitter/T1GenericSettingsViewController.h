//
#ifndef T1GenericSettingsViewController_h
#define T1GenericSettingsViewController_h
@import Foundation;

#include "UITextFieldDelegate-Protocol.h"

@class TFNItemsDataViewController, TFNTwitterAccount;

@interface T1GenericSettingsViewController : TFNItemsDataViewController <UITextFieldDelegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *pageModel;
    NSNumber"16@0:8 *detailText;
    NSNumber"16@0:8 *$__lazy_storage_$_shouldShowSearchBar;
    NSNumber"16@0:8 *searchController;
    NSNumber"16@0:8 *$__lazy_storage_$_searchViewController;
    NSNumber"16@0:8 *supportsSearch;
    NSNumber"16@0:8 *isSettingsRoot;
    NSNumber"16@0:8 *observerToken;
}

@property (nonatomic, readonly) TFNTwitterAccount *account;

/* instance methods */
- (_Bool)textFieldShouldBeginEditing:(id)editing;
- (long long)dashContentItemType;
- (id)scribe;
- (id)scribePage;
- (id)initWithAccount:(id)account;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewWillAppear:(_Bool)appear;
- (void)update:(_Bool)update;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* T1GenericSettingsViewController_h */
