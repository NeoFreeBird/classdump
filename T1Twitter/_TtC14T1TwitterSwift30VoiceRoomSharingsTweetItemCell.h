//
#ifndef _TtC14T1TwitterSwift30VoiceRoomSharingsTweetItemCell_h
#define _TtC14T1TwitterSwift30VoiceRoomSharingsTweetItemCell_h
@import Foundation;

@class T1TwitterSwift.VoiceRoomSharingsAuthorView, T1TwitterSwift.VoiceRoomSharingsTweetItemCell.ViewModel ?, T1TwitterSwift.VoiceRoomSharingsTweetItemCellDelegate ?, T1TwitterSwift.VoiceRoomSharingsTweetView, UICollectionViewCell;

@interface T1TwitterSwift.VoiceRoomSharingsTweetItemCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    T1TwitterSwift.VoiceRoomSharingsTweetItemCellDelegate ? delegate;
    T1TwitterSwift.VoiceRoomSharingsTweetView tweetView;
    T1TwitterSwift.VoiceRoomSharingsAuthorView authorView;
    T1TwitterSwift.VoiceRoomSharingsTweetItemCell.ViewModel ? viewModel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)prepareForReuse;

@end

#endif /* _TtC14T1TwitterSwift30VoiceRoomSharingsTweetItemCell_h */
