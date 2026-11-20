//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10XBookmarks37BookmarkAddToFolderTrayViewController_h
#define _TtC10XBookmarks37BookmarkAddToFolderTrayViewController_h
@import Foundation;

#include "_TtC10XBookmarks43BookmarkFolderListTrayContentViewController.h"

@class XBookmarks.BookmarkAddToFolderSelectionMode, XBookmarks.BookmarkFoldersMutationsManager, XBookmarks.XBookmarksStatusAccess, XBookmarks.XBookmarksStatusAccess _$s_SStc ->, _$sSD -> _$ss5Int64VMn _$sSi, _$sSh -> _$ss5Int64VMn, _$syyc;

@interface XBookmarks.BookmarkAddToFolderTrayViewController : XBookmarks.BookmarkFolderListTrayContentViewController { // (Swift)
    /* instance variables */
    XBookmarks.XBookmarksStatusAccess status;
    XBookmarks.BookmarkAddToFolderSelectionMode mode;
    XBookmarks.BookmarkFoldersMutationsManager api;
    () -> () showAllBookmarks;
    XBookmarks.XBookmarksStatusAccess _$s_SStc -> silentlyAddStatusToAllBookmarks;
    Swift.Set -> nominal type descriptor for Swift.Int64 selectedFolderIDs;
    Swift.Dictionary -> nominal type descriptor for Swift.Int64 Swift.Int folderOpGeneration;
}

/* instance methods */

@end

#endif /* _TtC10XBookmarks37BookmarkAddToFolderTrayViewController_h */
