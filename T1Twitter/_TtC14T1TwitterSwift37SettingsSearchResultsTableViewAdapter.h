//
#ifndef _TtC14T1TwitterSwift37SettingsSearchResultsTableViewAdapter_h
#define _TtC14T1TwitterSwift37SettingsSearchResultsTableViewAdapter_h
@import Foundation;

@class T1TwitterSwift.SettingsSearchViewController.SearchableItemActionHandler, TFNItemsDataViewAdapter, _$sSo17TFNTwitterAccountC;

@interface T1TwitterSwift.SettingsSearchResultsTableViewAdapter : TFNItemsDataViewAdapter { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    T1TwitterSwift.SettingsSearchViewController.SearchableItemActionHandler actionHandler;
}

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift37SettingsSearchResultsTableViewAdapter_h */
