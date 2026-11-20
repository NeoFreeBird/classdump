//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6AVChat41AVChatSecondaryParticipantsViewController_h
#define _TtC6AVChat41AVChatSecondaryParticipantsViewController_h
@import Foundation;

#include "UICollectionViewDelegate-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"

@class Chat.AVChatParticipantGridCell ?, Chat.AVChatSecondaryParticipantsViewController.LayoutAxis, Chat.AVChatSecondaryParticipantsViewModel, TFNViewController, _$s12CoreGraphics7CGFloatVMn, _$s5UIKit34UICollectionViewDiffableDataSourceCMn AVChat.AVChatSecondaryParticipantsViewController.Section _$ss5Int64VMn ?, _$s7Combine9PublishedVMn Swift.Bool, _$sSa -> _$ss5Int64VMn, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo16UICollectionViewCSg, _$ss5Int64VMn ?, __C.CGSize;

@interface AVChat.AVChatSecondaryParticipantsViewController : TFNViewController <UIScrollViewDelegate, UICollectionViewDelegate> { // (Swift)
    /* instance variables */
    oneway _Atomic Chat.AVChatSecondaryParticipantsViewModel _viewModel;
    __C.CGSize _itemSize;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable _cancellables;
    __C.UICollectionView? _collectionView;
    nominal type descriptor for UIKit.UICollectionViewDiffableDataSource AVChat.AVChatSecondaryParticipantsViewController.Section nominal type descriptor for Swift.Int64 ? _dataSource;
    Swift.Array -> nominal type descriptor for Swift.Int64 _participants;
    nominal type descriptor for Swift.Int64 ? _topParticipantUserID;
    nominal type descriptor for CoreGraphics.CGFloat _lastScrollUpdateOffset;
    oneway _Atomic Chat.AVChatSecondaryParticipantsViewController.LayoutAxis layoutAxis;
    nominal type descriptor for Combine.Published Swift.Bool _isPresentingTopParticipant;
    oneway _Atomic Chat.AVChatParticipantGridCell ? topParticipantCell;
}

/* instance methods */
- (void)scrollViewDidScroll:(id)scroll;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC6AVChat41AVChatSecondaryParticipantsViewController_h */
