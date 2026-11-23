//
#ifndef _TtC10XBookmarks45BookmarkFolderTimelineContainerViewController_h
#define _TtC10XBookmarks45BookmarkFolderTimelineContainerViewController_h
@import Foundation;

@class TFNViewController, XBookmarks.BookmarkFolderTimelineContainerViewController.ViewModel, XBookmarks.BookmarkFolderTimelineContainerViewControllerDelegate ?, XBookmarks.XBookmarksAccountAccess, XBookmarks.XBookmarksDependencies, _$sSo16UIViewControllerC, _$sSo23TFSTwitterScribeContextC;

@interface XBookmarks.BookmarkFolderTimelineContainerViewController : TFNViewController { // (Swift)
    /* instance variables */
    XBookmarks.XBookmarksAccountAccess account;
    XBookmarks.XBookmarksDependencies dependencies;
    XBookmarks.BookmarkFolderTimelineContainerViewController.ViewModel viewModel;
    __C.UIViewController viewController;
    XBookmarks.BookmarkFolderTimelineContainerViewControllerDelegate ? delegate;
    __C.TFSTwitterScribeContext scribeContext;
}

/* instance methods */
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)viewDidLoad;
- (void)didRemoveStatusFromBookmarksWithNotification:(id)notification;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC10XBookmarks45BookmarkFolderTimelineContainerViewController_h */
