//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation25MessageListViewController_h
#define _TtC16ChatConversation25MessageListViewController_h
@import Foundation;

#include "UICollectionViewDelegate-Protocol.h"
#include "UICollectionViewDelegateFlowLayout-Protocol.h"

@class ChatConversation.ChatFetchMoreItemsInfo ?, ChatConversation.ChatSpanScriber, ChatConversation.ConversationMessageListItemStream, ChatConversation.MessageCellActionHandler, ChatConversation.MessageListActionTriggerStream, ChatConversation.MessageListContent, ChatConversation.MessageListItemSizeCache, ChatConversation.MessageListSequenceNumberStream, ChatConversation.MessageListViewController.InitialRender, ChatConversation.MessageListViewController.SnapshotUpdateState, ChatConversation.MessageListVisibilityStream, ChatConversation.ScreenshotProtectionView ?, ChatConversationServices.ConversationSource, ChatConversationServices.TargetMessage ?, ChatModels.ConversationMetadataStream, ChatModelsCore.ConversationID, ChatUI.ChatImageLoading, ChatUI.MessageListScrollToBottomButtonView ?, Swift.Bool, UIViewController, XVideo.AutoplayDisablingFilter, XVideo.AutoplayManager ?, XVideo.AutoplayUpdatePolicy, _$s10Foundation21NSKeyValueObservationCMn ?, _$s11XFoundation17WorkerPluginPointCMn ChatConversation.MessageListWorkerPluginContext, _$s12CoreGraphics7CGFloatVMn, _$s5UIKit34UICollectionViewDiffableDataSourceCMn _$sySiSSGSg, _$sSDySS ChatConversation.MessageListItem, _$sSa -> ChatConversation.MessageListItem, _$sSa -> ChatConversation.MessageListItem ?, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSi, _$sSo014Subsystem_ios_B39Arm64_mainMediaAttachmentResolveDeciderC, _$sSo13UILayoutGuideCSg, _$sSo16UICollectionViewCSg, _$sSo7NSTimerCSg, __C.UIEdgeInsets;

@interface ChatConversation.MessageListViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDelegate> { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat topSafeAreaInset;
    nominal type descriptor for CoreGraphics.CGFloat bottomSafeAreaInset;
    Swift.Bool isPreview;
    ChatConversationServices.ConversationSource conversationSource;
    ChatConversation.MessageListContent content;
    ChatModelsCore.ConversationID conversationID;
    ChatUI.ChatImageLoading imageLoader;
    __C.Subsystem_ios_iosArm64_mainMediaAttachmentResolveDecider linkResolveDecider;
    ChatConversation.MessageCellActionHandler messageCellActionHandler;
    ChatModels.ConversationMetadataStream conversationMetadataStream;
    ChatConversation.MessageListVisibilityStream messageListVisibilityStream;
    ChatConversation.ConversationMessageListItemStream messageListItemStream;
    ChatConversation.MessageListActionTriggerStream messageListActionTriggerStream;
    ChatConversation.MessageListSequenceNumberStream messageListSequenceNumberStream;
    nominal type descriptor for XFoundation.WorkerPluginPoint ChatConversation.MessageListWorkerPluginContext messageListWorkerPluginPoint;
    ChatConversationServices.TargetMessage ? initialTargetMessage;
    Swift.Bool isNativeRewrite;
    ChatConversation.ChatSpanScriber chatSpanScriber;
    __C.UICollectionView? collectionView;
    nominal type descriptor for UIKit.UICollectionViewDiffableDataSource _$sySiSSGSg dataSource;
    ChatUI.MessageListScrollToBottomButtonView ? scrollToBottomButtonView;
    __C.UILayoutGuide? scrollToBottomButtonBottomChromeLayoutGuide;
    Swift.Array -> ChatConversation.MessageListItem listItems;
    Swift.Dictionary empty-list Swift.String ChatConversation.MessageListItem listItemsMap;
    Swift.Array -> ChatConversation.MessageListItem ? previousListItems;
    Swift.Array -> ChatConversation.MessageListItem ? pendingListItems;
    ChatConversation.MessageListItemSizeCache itemSizeCache;
    ChatConversation.ChatFetchMoreItemsInfo ? requestedOlderMessagesInfo;
    ChatConversation.MessageListViewController.SnapshotUpdateState snapshotUpdateState;
    Swift.Int snapshotUpdateGeneration;
    Swift.Bool isWaitingForLayout;
    nominal type descriptor for Foundation.NSKeyValueObservation ? contentSizeObservation;
    Swift.Bool pinToBottom;
    Swift.Bool leavesDraggedOffsetUnpinned;
    nominal type descriptor for CoreGraphics.CGFloat previousBottomInset;
    ChatConversationServices.TargetMessage ? targetMessage;
    ChatConversation.MessageListViewController.InitialRender initialRender;
    Swift.Bool isNearBottom;
    Swift.Bool isInitialTargetScrollPending;
    __C.UIEdgeInsets horizontalSafeAreaInsets;
    nominal type descriptor for CoreGraphics.CGFloat lastBoundsWidth;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    ChatConversation.ScreenshotProtectionView ? screenshotProtectionView;
    Swift.Bool isScreenCaptureBlockingEnabled;
    __C.NSTimer? updateTimer;
    XVideo.AutoplayManager ? autoplayManager;
    XVideo.AutoplayDisablingFilter autoplayScreenVisibilityPolicy;
    XVideo.AutoplayUpdatePolicy autoplayScrollPolicy;
}

/* instance methods */
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)path;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewDidScroll:(id)scroll;
- (void)collectionView:(id)view willDisplayCell:(id)cell forItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didEndDisplayingCell:(id)cell forItemAtIndexPath:(id)path;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(_Bool)decelerate;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (_Bool)scrollViewShouldScrollToTop:(id)top;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidLayoutSubviews;
- (void)dockedVideoDidChange;
- (void)handleScrollToBottomButtonTapped;
- (void)handleTouchRelease;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC16ChatConversation25MessageListViewController_h */
