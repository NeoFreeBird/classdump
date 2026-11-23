//
#ifndef _TtC7XSports28SportsPlayerLeaderToggleCell_h
#define _TtC7XSports28SportsPlayerLeaderToggleCell_h
@import Foundation;

@class UICollectionViewCell, _$sSo6UIViewC, _$sSo7UILabelC, _$syycSg;

@interface XSports.SportsPlayerLeaderToggleCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    (() -> ())? onTap;
    __C.UIView pillView;
    __C.UILabel titleLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (void)layoutSubviews;
- (void)handleTap;

@end

#endif /* _TtC7XSports28SportsPlayerLeaderToggleCell_h */
