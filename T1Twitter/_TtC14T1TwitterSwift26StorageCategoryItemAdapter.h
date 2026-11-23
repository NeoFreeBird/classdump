//
#ifndef _TtC14T1TwitterSwift26StorageCategoryItemAdapter_h
#define _TtC14T1TwitterSwift26StorageCategoryItemAdapter_h
@import Foundation;

@class T1TwitterSwift.StorageManagementViewController ?, TFNItemsDataViewAdapter;

@interface T1TwitterSwift.StorageCategoryItemAdapter : TFNItemsDataViewAdapter { // (Swift)
    /* instance variables */
    T1TwitterSwift.StorageManagementViewController ? controller;
}

/* instance methods */
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift26StorageCategoryItemAdapter_h */
