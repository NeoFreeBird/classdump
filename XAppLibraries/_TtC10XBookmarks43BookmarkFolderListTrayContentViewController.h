//
#ifndef _TtC10XBookmarks43BookmarkFolderListTrayContentViewController_h
#define _TtC10XBookmarks43BookmarkFolderListTrayContentViewController_h
@import Foundation;

@class Swift.Bool, XBookmarks.XBookmarksAccountAccess, _$s13XDesignSystem29TrayListContentViewControllerCN, _$sSSSg, _$sSa -> XBookmarks.BookmarkFolderTimelineItem, _$sSo16TIPImagePipelineC, _$ss5Int64VMn ?;

@interface XBookmarks.BookmarkFolderListTrayContentViewController : type metadata for XDesignSystem.TrayListContentViewController { // (Swift)
    /* instance variables */
    XBookmarks.XBookmarksAccountAccess account;
    __C.TIPImagePipeline imagePipeline;
    nominal type descriptor for Swift.Int64 ? membershipStatusID;
    Swift.Array -> XBookmarks.BookmarkFolderTimelineItem folders;
    Swift.String? nextCursor;
    Swift.Bool isLoadingMore;
}

/* instance methods */

@end

#endif /* _TtC10XBookmarks43BookmarkFolderListTrayContentViewController_h */
