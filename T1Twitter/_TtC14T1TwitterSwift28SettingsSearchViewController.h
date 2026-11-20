//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift28SettingsSearchViewController_h
#define _TtC14T1TwitterSwift28SettingsSearchViewController_h
@import Foundation;

#include "UISearchBarDelegate-Protocol.h"

@class T1TwitterSwift.SettingsSearchResultsTableViewController, TFNItemsDataViewController, _$sSo17TFNTwitterAccountC, _$sSo26TFNNavigationBarSearchViewC;

@interface T1TwitterSwift.SettingsSearchViewController : TFNItemsDataViewController <UISearchBarDelegate> { // (Swift)
    /* instance variables */
    T1TwitterSwift.SettingsSearchResultsTableViewController searchResultsController;
    __C.TFNNavigationBarSearchView navigationSearchBarView;
    __C.TFNTwitterAccount account;
}

/* instance methods */
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)update:(_Bool)update;
- (void)searchBar:(id)bar textDidChange:(id)change;
- (void)searchBarSearchButtonClicked:(id)clicked;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC14T1TwitterSwift28SettingsSearchViewController_h */
