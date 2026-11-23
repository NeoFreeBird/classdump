//
#ifndef _TtC10XBookmarks39BookmarkFoldersPlaygroundViewController_h
#define _TtC10XBookmarks39BookmarkFoldersPlaygroundViewController_h
@import Foundation;

@class TFNItemsDataViewController, XBookmarks.BookmarkFoldersMutationsManager, XBookmarks.XBookmarksAccountAccess, XBookmarks.XBookmarksDependencies, XBookmarks.XBookmarksStatusAccess _$sSgyc;

@interface XBookmarks.BookmarkFoldersPlaygroundViewController : TFNItemsDataViewController { // (Swift)
    /* instance variables */
    XBookmarks.XBookmarksAccountAccess account;
    XBookmarks.XBookmarksDependencies dependencies;
    XBookmarks.XBookmarksStatusAccess _$sSgyc makeTestStatus;
    XBookmarks.BookmarkFoldersMutationsManager manager;
}

/* instance methods */
- (void)viewDidLoad;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC10XBookmarks39BookmarkFoldersPlaygroundViewController_h */
