//
#ifndef _TtC11ChatGrokBot40GrokBotAttachmentMediaGridViewController_h
#define _TtC11ChatGrokBot40GrokBotAttachmentMediaGridViewController_h
@import Foundation;

@class ChatGrokBot.GrokBotAttachmentTabThumbnailLoader, ChatGrokBot.GrokBotAttachmentTabViewerPresenter, ChatGrokBot.GrokBotConversationAttachmentsLoadMoreStream, ChatGrokBot.GrokBotConversationAttachmentsStream, ChatUI.ChatProviders, Swift.Bool, UICollectionViewController, _$s5UIKit34UICollectionViewDiffableDataSourceCMn _$sySiSSGSg, _$sSDySSSo7UIImageCG, _$sSa -> ChatGrokBot.GrokBotConversationAttachment, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface ChatGrokBot.GrokBotAttachmentMediaGridViewController : UICollectionViewController { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotConversationAttachmentsStream attachmentsStream;
    ChatUI.ChatProviders chatProviders;
    ChatGrokBot.GrokBotConversationAttachmentsLoadMoreStream loadMoreStream;
    ChatGrokBot.GrokBotAttachmentTabThumbnailLoader thumbnailLoader;
    ChatGrokBot.GrokBotAttachmentTabViewerPresenter viewerPresenter;
    Swift.Array -> ChatGrokBot.GrokBotConversationAttachment attachments;
    nominal type descriptor for UIKit.UICollectionViewDiffableDataSource _$sySiSSGSg dataSource;
    Swift.Bool hasMore;
    [Swift.String : __C.UIImage] senderAvatars;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)scrollViewDidScroll:(id)scroll;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (id)initWithCollectionViewLayout:(id)layout;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC11ChatGrokBot40GrokBotAttachmentMediaGridViewController_h */
