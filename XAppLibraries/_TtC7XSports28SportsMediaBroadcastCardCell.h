//
#ifndef _TtC7XSports28SportsMediaBroadcastCardCell_h
#define _TtC7XSports28SportsMediaBroadcastCardCell_h
@import Foundation;

@class UICollectionViewCell, XSports.SportsImageLoader ?, _$sSo11UIImageViewC, _$sSo6UIViewC, _$sSo7UILabelC;

@interface XSports.SportsMediaBroadcastCardCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    __C.UIView thumbnailContainer;
    __C.UIImageView thumbnailView;
    __C.UIImageView logoView;
    __C.UIView badge;
    __C.UIImageView badgeIconView;
    __C.UILabel badgeLabel;
    __C.UILabel titleLabel;
    __C.UILabel accountLabel;
    __C.UILabel detailsLabel;
    XSports.SportsImageLoader ? $__lazy_storage_$_thumbnailLoader;
    XSports.SportsImageLoader ? $__lazy_storage_$_logoLoader;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;

@end

#endif /* _TtC7XSports28SportsMediaBroadcastCardCell_h */
