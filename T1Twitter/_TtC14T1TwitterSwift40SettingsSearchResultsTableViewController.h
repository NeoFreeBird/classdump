//
#ifndef _TtC14T1TwitterSwift40SettingsSearchResultsTableViewController_h
#define _TtC14T1TwitterSwift40SettingsSearchResultsTableViewController_h
@import Foundation;

@class T1TwitterSwift.SettingsSearchViewController.SettingsSearchIndexGenerator, TFNItemsDataViewController, _$sSS, _$sSa -> T1TwitterSwift.SettingsSearchViewController.SearchableItem;

@interface T1TwitterSwift.SettingsSearchResultsTableViewController : TFNItemsDataViewController { // (Swift)
    /* instance variables */
    Swift.String searchQuery;
    Swift.Array -> T1TwitterSwift.SettingsSearchViewController.SearchableItem items;
    Swift.Array -> T1TwitterSwift.SettingsSearchViewController.SearchableItem filteredItems;
    T1TwitterSwift.SettingsSearchViewController.SettingsSearchIndexGenerator searchableItemProvider;
}

/* instance methods */
- (void)viewDidLoad;
- (void)update:(_Bool)update;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC14T1TwitterSwift40SettingsSearchResultsTableViewController_h */
