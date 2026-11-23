//
#ifndef _TtC11ChatGrokBot38GrokBotAttachmentRowListViewController_h
#define _TtC11ChatGrokBot38GrokBotAttachmentRowListViewController_h
@import Foundation;

@class ChatConversationDetails.ConversationAttachmentTab, ChatConversationServices.ConversationNavigation, ChatGrokBot.GrokBotAttachmentTabViewerPresenter, ChatGrokBot.GrokBotConversationAttachmentsLoadMoreStream, ChatGrokBot.GrokBotConversationAttachmentsStream, ChatGrokBot.GrokBotPageActions, ChatGrokBot.GrokBotPagesStream, ChatUI.ChatProviders, Swift.Bool, UICollectionViewController, _$s5UIKit34UICollectionViewDiffableDataSourceCMn _$sySiSSGSg, _$sSDySS ChatGrokBot.GrokBotPage, _$sSDySSSo7UIImageCG, _$sSa -> ChatGrokBot.GrokBotConversationAttachment, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface ChatGrokBot.GrokBotAttachmentRowListViewController : UICollectionViewController { // (Swift)
    /* instance variables */
    ChatConversationDetails.ConversationAttachmentTab attachmentTab;
    ChatGrokBot.GrokBotConversationAttachmentsStream attachmentsStream;
    ChatUI.ChatProviders chatProviders;
    ChatConversationServices.ConversationNavigation conversationNavigation;
    ChatGrokBot.GrokBotConversationAttachmentsLoadMoreStream loadMoreStream;
    ChatGrokBot.GrokBotPageActions pageActions;
    ChatGrokBot.GrokBotPagesStream pagesStream;
    ChatGrokBot.GrokBotAttachmentTabViewerPresenter viewerPresenter;
    Swift.Array -> ChatGrokBot.GrokBotConversationAttachment attachments;
    nominal type descriptor for UIKit.UICollectionViewDiffableDataSource _$sySiSSGSg dataSource;
    Swift.Bool hasMore;
    Swift.Dictionary empty-list Swift.String ChatGrokBot.GrokBotPage pages;
    [Swift.String : __C.UIImage] senderAvatars;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)scrollViewDidScroll:(id)scroll;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (id)collectionView:(id)view contextMenuConfigurationForItemsAtIndexPaths:(id)paths point:(struct CGPoint { double x0; double x1; })point;
- (id)initWithCollectionViewLayout:(id)layout;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC11ChatGrokBot38GrokBotAttachmentRowListViewController_h */
