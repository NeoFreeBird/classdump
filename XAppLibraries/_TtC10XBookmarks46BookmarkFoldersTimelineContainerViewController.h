//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10XBookmarks46BookmarkFoldersTimelineContainerViewController_h
#define _TtC10XBookmarks46BookmarkFoldersTimelineContainerViewController_h
@import Foundation;

#include "UISearchBarDelegate-Protocol.h"

@class Swift.Bool, TFNViewController, UIScrollView, XBookmarks.BookmarkFolderTableRowAdapter, XBookmarks.BookmarkFoldersMutationsManager, XBookmarks.BookmarkFoldersSliceViewController XBookmarksGraphQL.BookmarkFoldersSliceOperationResponse.Viewer.UserResults.Result.User.BookmarkCollectionsSlice.Items, XBookmarks.XBookmarksAccountAccess, XBookmarks.XBookmarksDependencies, _$sSo12TFNTitleViewC, _$sSo16UIViewControllerCSg, _$sSo19TFNSearchControllerCSg;

@interface XBookmarks.BookmarkFoldersTimelineContainerViewController : TFNViewController <UISearchBarDelegate> { // (Swift)
    /* instance variables */
    XBookmarks.XBookmarksAccountAccess account;
    XBookmarks.XBookmarksDependencies dependencies;
    __C.TFNTitleView titleView;
    XBookmarks.BookmarkFoldersSliceViewController XBookmarksGraphQL.BookmarkFoldersSliceOperationResponse.Viewer.UserResults.Result.User.BookmarkCollectionsSlice.Items viewController;
    XBookmarks.BookmarkFolderTableRowAdapter adapter;
    XBookmarks.BookmarkFoldersMutationsManager api;
    Swift.Bool didLoadWithSuccess;
    __C.UIViewController? allBookmarksOverlay;
    __C.TFNSearchController? $__lazy_storage_$_searchController;
}

@property (nonatomic, readonly) UIScrollView *tfn_contentScrollView;

/* instance methods */
- (_Bool)searchBarShouldBeginEditing:(id)editing;
- (_Bool)tui_showsActionButton;
- (id)tui_actionButtonItemCategories;
- (id)tui_buttonItemForCategory:(unsigned long long)category;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)didCreateBookmarkFolderWithNotification:(id)notification;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC10XBookmarks46BookmarkFoldersTimelineContainerViewController_h */
