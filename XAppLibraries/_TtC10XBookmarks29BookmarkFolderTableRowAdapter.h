//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10XBookmarks29BookmarkFolderTableRowAdapter_h
#define _TtC10XBookmarks29BookmarkFolderTableRowAdapter_h
@import Foundation;

@class TFNItemsDataViewAdapter, XBookmarks.BookmarkFolderTableRowAdapterDelegate ?, XBookmarks.XBookmarksAccountAccess, _$sSo16TIPImagePipelineC;

@interface XBookmarks.BookmarkFolderTableRowAdapter : TFNItemsDataViewAdapter { // (Swift)
    /* instance variables */
    XBookmarks.XBookmarksAccountAccess account;
    __C.TIPImagePipeline imagePipeline;
    XBookmarks.BookmarkFolderTableRowAdapterDelegate ? delegate;
}

/* instance methods */
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (_Bool)dataViewController:(id)controller canEditItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC10XBookmarks29BookmarkFolderTableRowAdapter_h */
