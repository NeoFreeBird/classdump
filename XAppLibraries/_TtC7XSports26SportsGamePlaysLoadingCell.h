//
#ifndef _TtC7XSports26SportsGamePlaysLoadingCell_h
#define _TtC7XSports26SportsGamePlaysLoadingCell_h
@import Foundation;

@class UICollectionViewCell, _$s10TFNUISwift11ShimmerViewCMn ?, _$sSaySo6UIViewCG, _$sSo6UIViewC;

@interface XSports.SportsGamePlaysLoadingCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    __C.UIView skeletonView;
    nominal type descriptor for TFNUISwift.ShimmerView ? $__lazy_storage_$_shimmerView;
    [__C.UIView] avatars;
    [__C.UIView] headlines;
    [__C.UIView] details;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC7XSports26SportsGamePlaysLoadingCell_h */
