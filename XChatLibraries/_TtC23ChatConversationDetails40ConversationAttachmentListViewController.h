//
#ifndef _TtC23ChatConversationDetails40ConversationAttachmentListViewController_h
#define _TtC23ChatConversationDetails40ConversationAttachmentListViewController_h
@import Foundation;

#include "UICollectionViewDataSourcePrefetching-Protocol.h"
#include "UICollectionViewDelegateFlowLayout-Protocol.h"

@class ChatConversationDetails.AttachmentListCellActionHandler ?, ChatConversationDetails.AttachmentListTapActionPluginPoint, ChatConversationDetails.ConversationAttachmentCurrentTabStream, ChatConversationDetails.ConversationAttachmentListMediaStream, ChatConversationDetails.ConversationAttachmentListMode, ChatConversationDetails.ConversationAttachmentLoadMoreStream, ChatConversationDetails.ConversationAttachmentMediaDownloadStream, ChatConversationDetails.ConversationAttachmentPaginationStream, ChatMessageComposer.MessageComposerSendCoordinating, ChatUI.AttachmentMediaService, ChatUI.ChatColorProviding, ChatUI.ChatImageLoading, Swift.Bool, UICollectionViewController, _$s11XFoundation17WorkerPluginPointCMn ChatConversationDetails.ConversationAttachmentListWorkerPluginContext, _$s5UIKit34UICollectionViewDiffableDataSourceCMn _$sySi ChatConversationDetails.ConversationAttachmentListItem.ID ?, _$sSD -> ChatConversationDetails.ConversationAttachmentListItem.ID ChatConversationDetails.ConversationAttachmentListItem, _$sSa -> ChatConversationDetails.ConversationAttachmentListItem, _$sSa -> ChatConversationDetails.ConversationAttachmentListItem ?, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo7NSTimerCSg;

@interface ChatConversationDetails.ConversationAttachmentListViewController : UICollectionViewController <UICollectionViewDataSourcePrefetching, UICollectionViewDelegateFlowLayout> { // (Swift)
    /* instance variables */
    ChatUI.AttachmentMediaService attachmentMediaService;
    ChatUI.ChatColorProviding colorProvider;
    ChatConversationDetails.ConversationAttachmentCurrentTabStream currentTabStream;
    ChatUI.ChatImageLoading imageLoader;
    ChatConversationDetails.ConversationAttachmentLoadMoreStream loadMoreStream;
    ChatConversationDetails.ConversationAttachmentMediaDownloadStream mediaDownloadStream;
    ChatConversationDetails.ConversationAttachmentListMediaStream mediaStream;
    ChatMessageComposer.MessageComposerSendCoordinating messageComposerSendCoordinator;
    ChatConversationDetails.ConversationAttachmentListMode mode;
    ChatConversationDetails.ConversationAttachmentPaginationStream paginationStream;
    ChatConversationDetails.AttachmentListTapActionPluginPoint tapActionPluginPoint;
    nominal type descriptor for XFoundation.WorkerPluginPoint ChatConversationDetails.ConversationAttachmentListWorkerPluginContext workerPluginPoint;
    ChatConversationDetails.AttachmentListCellActionHandler ? $__lazy_storage_$_cellActionHandler;
    nominal type descriptor for UIKit.UICollectionViewDiffableDataSource  empty-list Swift.Int ChatConversationDetails.ConversationAttachmentListItem.ID ? dataSource;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    Swift.Bool hasMore;
    Swift.Array -> ChatConversationDetails.ConversationAttachmentListItem items;
    Swift.Dictionary -> ChatConversationDetails.ConversationAttachmentListItem.ID ChatConversationDetails.ConversationAttachmentListItem itemsByID;
    Swift.Array -> ChatConversationDetails.ConversationAttachmentListItem ? pendingItems;
    __C.NSTimer? updateTimer;
    Swift.Bool isProcessingUpdate;
}

/* instance methods */
- (void)collectionView:(id)view prefetchItemsAtIndexPaths:(id)paths;
- (void)collectionView:(id)view cancelPrefetchingForItemsAtIndexPaths:(id)paths;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)path;
- (double)collectionView:(id)view layout:(id)layout minimumInteritemSpacingForSectionAtIndex:(long long)index;
- (double)collectionView:(id)view layout:(id)layout minimumLineSpacingForSectionAtIndex:(long long)index;
- (void)collectionView:(id)view willDisplayCell:(id)cell forItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didEndDisplayingCell:(id)cell forItemAtIndexPath:(id)path;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(_Bool)decelerate;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithCollectionViewLayout:(id)layout;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC23ChatConversationDetails40ConversationAttachmentListViewController_h */
