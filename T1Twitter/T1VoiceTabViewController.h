//
#ifndef T1VoiceTabViewController_h
#define T1VoiceTabViewController_h
@import Foundation;

#include "TFNPillControlDelegate-Protocol.h"
#include "TUIErrorDataViewAdapterDelegate-Protocol.h"
#include "UISearchBarDelegate-Protocol.h"

@class TFNItemsDataViewController, UIView;

@interface T1VoiceTabViewController : TFNItemsDataViewController <UISearchBarDelegate, TUIErrorDataViewAdapterDelegate, TFNPillControlDelegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *viewModel;
    NSNumber"16@0:8 *isSpaceCreationEnabled;
    NSNumber"16@0:8 *$__lazy_storage_$_adapter;
    NSNumber"16@0:8 *$__lazy_storage_$_actionHandler;
    NSNumber"16@0:8 *$__lazy_storage_$_loadingIndicatorView;
    NSNumber"16@0:8 *$__lazy_storage_$_searchController;
    NSNumber"16@0:8 *$__lazy_storage_$_pillControl;
    NSNumber"16@0:8 *pillScrollView;
    NSNumber"16@0:8 *showsSearchInNavigationBar;
    NSNumber"16@0:8 *$__lazy_storage_$_navigationBarSearchView;
}

@property (nonatomic, readonly) UIView *tfn_navigationBarAccessoryView;

/* instance methods */
- (_Bool)searchBarShouldBeginEditing:(id)editing;
- (void)errorItemTapped:(id)tapped;
- (void)pillControlTapped:(id)tapped;
- (void)didTapPill:(id)pill;
- (id)initWithContext:(id)context;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)applicationDidBecomeActive:(id)active;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (void)loadTop:(id)top;
- (_Bool)isLoadingTop;
- (void)willDisplayCell:(id)cell forItem:(id)item atIndexPath:(id)path;
- (_Bool)tui_showsActionButton;
- (id)tui_actionButtonItemCategories;
- (_Bool)t1_showsDashAction;
- (long long)dashContentItemType;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeParameters;
- (void)dealloc;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* T1VoiceTabViewController_h */
