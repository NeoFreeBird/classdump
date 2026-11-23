//
#ifndef _TtC10XBookmarks40BookmarksTimelineContainerViewController_h
#define _TtC10XBookmarks40BookmarksTimelineContainerViewController_h
@import Foundation;

#include "UISearchBarDelegate-Protocol.h"

@class TFNViewController, XBookmarks.XBookmarksAccountAccess, XBookmarks.XBookmarksDependencies, _$sSo12TFNTitleViewC, _$sSo19TFNSearchControllerCSg, _$sSo26TFNItemsDataViewControllerC;

@interface XBookmarks.BookmarksTimelineContainerViewController : TFNViewController <UISearchBarDelegate> { // (Swift)
    /* instance variables */
    XBookmarks.XBookmarksAccountAccess account;
    XBookmarks.XBookmarksDependencies dependencies;
    __C.TFNTitleView titleView;
    __C.TFNItemsDataViewController viewController;
    __C.TFNSearchController? $__lazy_storage_$_searchController;
}

/* instance methods */
- (_Bool)searchBarShouldBeginEditing:(id)editing;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC10XBookmarks40BookmarksTimelineContainerViewController_h */
