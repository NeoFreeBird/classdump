//
#ifndef _TtC20TwitterCommunitiesUI31CommunityItemCollectionViewCell_h
#define _TtC20TwitterCommunitiesUI31CommunityItemCollectionViewCell_h
@import Foundation;

@class TFNCollectionViewCell, TwitterCommunitiesUI.CommunityItemCollectionViewCell.ViewModel ?, _$sSo11UIImageViewCSg, _$sSo12TFNBadgeViewCSg, _$sSo6UIViewCSg, _$sSo7UILabelCSg;

@interface TwitterCommunitiesUI.CommunityItemCollectionViewCell : TFNCollectionViewCell { // (Swift)
    /* instance variables */
    TwitterCommunitiesUI.CommunityItemCollectionViewCell.ViewModel ? viewModel;
    __C.UILabel? $__lazy_storage_$_nameLabel;
    __C.UIView? $__lazy_storage_$_bottomBackgroundView;
    __C.UIImageView? $__lazy_storage_$_thumbnailImageView;
    __C.UIView? $__lazy_storage_$_highlightView;
    __C.TFNBadgeView? $__lazy_storage_$_unreadIndicatorView;
}

@property (nonatomic) _Bool selected;
@property (nonatomic) _Bool highlighted;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (_Bool)isSelected;
- (_Bool)isHighlighted;

@end

#endif /* _TtC20TwitterCommunitiesUI31CommunityItemCollectionViewCell_h */
