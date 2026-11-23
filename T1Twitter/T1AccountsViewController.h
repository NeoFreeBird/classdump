//
#ifndef T1AccountsViewController_h
#define T1AccountsViewController_h
@import Foundation;

#include "T1AccountChooser-Protocol.h"
#include "T1AccountListEntry.h"
#include "T1AccountListEntryBadgingDataSource-Protocol.h"
#include "T1AccountsDelegationGroupsViewModel.h"
#include "TFNLayoutMetricsEnvironment-Protocol.h"
#include "TFNPickerViewControllerDelegate-Protocol.h"
#include "TFNValuePickerDataSource-Protocol.h"

@class NSArray, NSDictionary, NSString, TFNPickerViewController, TFNTwitterAccount;

@interface T1AccountsViewController : TFNPickerViewController <TFNPickerViewControllerDelegate, TFNValuePickerDataSource, TFNLayoutMetricsEnvironment, T1AccountListEntryBadgingDataSource, T1AccountChooser>

@property (retain, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) NSArray *accountEntries;
@property (retain, nonatomic) T1AccountListEntry *currentEntry;
@property (nonatomic) _Bool editing;
@property (nonatomic) _Bool compactStyle;
@property (nonatomic) _Bool includeTeamsAccount;
@property (retain, nonatomic) NSDictionary *badgeCountsForUserID;
@property (nonatomic) _Bool needsDelayedUpdate;
@property (nonatomic) _Bool accountModelAssimilatedInProgress;
@property (retain, nonatomic) T1AccountsDelegationGroupsViewModel *accountsDelegationGroupsViewModel;
@property (copy, nonatomic) NSString *referringScribeComponent;
@property (readonly, nonatomic) _Bool editable;
@property (nonatomic) _Bool hostProvidesCellBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) TFNTwitterAccount *currentAccount;
@property (copy, nonatomic) id /* block */ didChooseAccountBlock;

/* class methods */
+ (_Bool)isShowing;

/* instance methods */
- (void)t1_performAfterAccountSwitcherDismiss:(id /* block */)dismiss;
- (void)t1_presentInAccountSwitcherTrayFromViewController:(id)controller onDismiss:(id /* block */)dismiss;
- (id)initWithAccount:(id)account editable:(_Bool)editable;
- (id)initWithAccount:(id)account editable:(_Bool)editable includeTeamsAccount:(_Bool)account;
- (void)_delayUpdate:(id)update;
- (void)_modelAssimilationDidEnd:(id)end;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidDisappear:(_Bool)disappear;
- (id)_recencyDateForAccount:(id)account;
- (id)_accountsSortedByLastActiveDate:(id)date;
- (id)_leadingEntryInEntries:(id)entries;
- (void)_updateAccountEntries:(_Bool)entries;
- (void)setEditing:(_Bool)editing animated:(_Bool)animated;
- (void)_accountsDidChange;
- (void)_pickAccountEntry:(id)entry;
- (void)_chooseAccount:(id)account;
- (void)addExistingAccount;
- (void)t1_accountBadgingDidChange:(id)change;
- (id)badgeCountForEntry:(id)entry;
- (void)private_startLoginFlow;
- (id)_populateAccounts:(id)accounts;
- (id)_delegateGroupHeaderViewItem;
- (id)_otherPersonalAccountsHeaderViewItem;
- (id)_accountSeparatorItem;
- (void)_presentDelegationGroupSwitchAccountPromptForEntry:(id)entry didTapSwitchAccount:(id /* block */)account;
- (unsigned long long)tfn_supportedInterfaceOrientations;
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)path;
- (_Bool)tableView:(id)view canEditRowAtIndexPath:(id)path;
- (id)titleForDeleteConfirmationButtonForItem:(id)item atIndexPath:(id)path;
- (void)update:(_Bool)update;
- (id)init;
- (double)maxContentHeight;
- (id)populateItemsWithMessages:(id)messages items:(id)items sectionIndex:(unsigned long long)index;
- (void)pickerViewController:(id)controller didPickValue:(id)value inSectionAtIndex:(unsigned long long)index willDismiss:(_Bool)dismiss;
- (_Bool)pickerViewController:(id)controller shouldRemoveValue:(id)value fromSectionAtIndex:(unsigned long long)index;
- (id)valuesForPicker:(id)picker;
- (id)initiallyPickedValueForPicker:(id)picker;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeComponent;
- (_Bool)isEditable;
- (_Bool)isAccountModelAssimilatedInProgress;

@end

#endif /* T1AccountsViewController_h */
