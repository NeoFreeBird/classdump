//
#ifndef _TtC10XBookmarksP33_0800A74A6432377D7143794C481BD5D343BookmarkFoldersSliceItemsDataViewController_h
#define _TtC10XBookmarksP33_0800A74A6432377D7143794C481BD5D343BookmarkFoldersSliceItemsDataViewController_h
@import Foundation;

#include "TUIErrorDataViewAdapterDelegate-Protocol.h"

@class TFNItemsDataViewController;

@interface XBookmarks.(BookmarkFoldersSliceItemsDataViewController in _0800A74A6432377D7143794C481BD5D3) : TFNItemsDataViewController <TUIErrorDataViewAdapterDelegate> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 delegate;
    @40@0:8:16@24@32 scribeComponents;
}

/* instance methods */
- (id)scribePage;
- (id)scribeSection;
- (void)errorItemTapped:(id)tapped;
- (void)performBatchUpdates:(id /* block */)updates completion:(id /* block */)completion;
- (id)tableView:(id)view trailingSwipeActionsConfigurationForRowAtIndexPath:(id)path;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC10XBookmarksP33_0800A74A6432377D7143794C481BD5D343BookmarkFoldersSliceItemsDataViewController_h */
