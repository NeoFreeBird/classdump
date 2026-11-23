//
#ifndef _TtC15ChatEmojiPicker29EmojiPickerTrayViewController_h
#define _TtC15ChatEmojiPicker29EmojiPickerTrayViewController_h
@import Foundation;

#include "UICollectionViewDelegate-Protocol.h"

@class ChatEmojiPicker.EmojiPickerConfiguration, ChatEmojiPicker.EmojiPickerDataStream, ChatEmojiPicker.EmojiPickerGridSection ?, ChatEmojiPicker.EmojiPickerSearchStream, ChatEmojiPicker.EmojiPickerSnapshotStream, ChatEmojiPicker.EmojiPickerTrayCategoryBar, ChatEmojiPicker.EmojiPickerTrayGridDataSource ?, ChatEmojiPicker.EmojiPickerTrayPresentation, ChatEmojiPicker.EmojiPickerTraySearchHeaderView ?, ChatEmojiPicker.EmojiPickerTrayViewController.Content ?, ChatEmojiPicker.EmojiPickerWorkerPluginPoint, Swift.Bool, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$s13XDesignSystem5InputCMn, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo16UICollectionViewCSg, _$sSo25UIImpactFeedbackGeneratorC;

@interface ChatEmojiPicker.EmojiPickerTrayViewController : type metadata for XDesignSystem.StackTrayContentViewController <UICollectionViewDelegate> { // (Swift)
    /* instance variables */
    ChatEmojiPicker.EmojiPickerConfiguration configuration;
    ChatEmojiPicker.EmojiPickerTrayPresentation presentation;
    ChatEmojiPicker.EmojiPickerDataStream emojiPickerDataStream;
    ChatEmojiPicker.EmojiPickerSearchStream emojiPickerSearchStream;
    ChatEmojiPicker.EmojiPickerSnapshotStream emojiPickerSnapshotStream;
    ChatEmojiPicker.EmojiPickerWorkerPluginPoint emojiPickerWorkerPluginPoint;
    __C.UIImpactFeedbackGenerator feedbackGenerator;
    ChatEmojiPicker.EmojiPickerTrayCategoryBar categoryBar;
    Swift.Bool isScrollingToSection;
    ChatEmojiPicker.EmojiPickerGridSection ? pendingSection;
    ChatEmojiPicker.EmojiPickerTrayViewController.Content ? displayedContent;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
    nominal type descriptor for XDesignSystem.Input searchInput;
    __C.UICollectionView? $__lazy_storage_$_collectionView;
    ChatEmojiPicker.EmojiPickerTrayGridDataSource ? $__lazy_storage_$_dataSource;
    ChatEmojiPicker.EmojiPickerTraySearchHeaderView ? $__lazy_storage_$_searchHeaderView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)collectionView:(id)view didHighlightItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didDeselectItemAtIndexPath:(id)path;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidEndScrollingAnimation:(id)animation;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC15ChatEmojiPicker29EmojiPickerTrayViewController_h */
