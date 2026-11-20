//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6AVChat37AVChatGroupCallShowMoreViewController_h
#define _TtC6AVChat37AVChatGroupCallShowMoreViewController_h
@import Foundation;

#include "UICollectionViewDelegateFlowLayout-Protocol.h"

@class Chat.AVChatGroupCallShowMoreViewModel, Chat.ShowMoreContent, TFNViewController, _$s5UIKit34UICollectionViewDiffableDataSourceCMn AVChat.AVChatGroupCallShowMoreViewController.Section AVChat.AVChatGroupCallShowMoreViewController.Item ?, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo16UICollectionViewCSg;

@interface AVChat.AVChatGroupCallShowMoreViewController : TFNViewController <UICollectionViewDelegateFlowLayout> { // (Swift)
    /* instance variables */
    oneway _Atomic Chat.AVChatGroupCallShowMoreViewModel _viewModel;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable _cancellables;
    __C.UICollectionView? _collectionView;
    nominal type descriptor for UIKit.UICollectionViewDiffableDataSource AVChat.AVChatGroupCallShowMoreViewController.Section AVChat.AVChatGroupCallShowMoreViewController.Item ? _dataSource;
    oneway _Atomic Chat.ShowMoreContent _currentContent;
}

/* instance methods */
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout referenceSizeForHeaderInSection:(long long)section;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC6AVChat37AVChatGroupCallShowMoreViewController_h */
