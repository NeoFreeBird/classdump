//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC23TwitterProfileModulesUI40ProfileModuleItemSelectionViewController_h
#define _TtC23TwitterProfileModulesUI40ProfileModuleItemSelectionViewController_h
@import Foundation;

#include "UISearchBarDelegate-Protocol.h"
#include "UISearchControllerDelegate-Protocol.h"
#include "UISearchResultsUpdating-Protocol.h"

@class Swift.Bool, TFNItemsDataViewController, TwitterProfileModules.ProfileModulesContext, TwitterProfileModules.ProfileScribingCapability, TwitterProfileModulesUI.ProfileModuleItemSelectionViewController.ItemType, TwitterProfileModulesUI.ProfileModuleItemSelectionViewControllerDelegate ?, _$sSaySSG, _$sSo19TFNSearchControllerCSg;

@interface TwitterProfileModulesUI.ProfileModuleItemSelectionViewController : TFNItemsDataViewController <UISearchResultsUpdating, UISearchBarDelegate, UISearchControllerDelegate> { // (Swift)
    /* instance variables */
    __C.TFNSearchController? $__lazy_storage_$_searchController;
    TwitterProfileModules.ProfileScribingCapability scribeCapability;
    TwitterProfileModules.ProfileModulesContext profileModulesContext;
    [Swift.String] itemDisplayStrings;
    [Swift.String] filteredItemDisplayStrings;
    TwitterProfileModulesUI.ProfileModuleItemSelectionViewController.ItemType itemType;
    Swift.Bool showsSearchBar;
    TwitterProfileModulesUI.ProfileModuleItemSelectionViewControllerDelegate ? delegate;
}

/* instance methods */
- (void)updateSearchResultsForSearchController:(id)controller;
- (void)searchBar:(id)bar textDidChange:(id)change;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)didSelectItem:(id)item atIndexPath:(id)path;
- (void)update:(_Bool)update;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC23TwitterProfileModulesUI40ProfileModuleItemSelectionViewController_h */
