//
#ifndef _TtC7XSports28SportsPlayerLeaderHeaderView_h
#define _TtC7XSports28SportsPlayerLeaderHeaderView_h
@import Foundation;

@class UICollectionReusableView, _$sSo15CAGradientLayerC, _$sSo6UIViewC, _$sSo7UILabelC;

@interface XSports.SportsPlayerLeaderHeaderView : UICollectionReusableView { // (Swift)
    /* instance variables */
    __C.UIView backgroundView;
    __C.CAGradientLayer backgroundMask;
    __C.UILabel titleLabel;
    __C.UILabel unitLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;

@end

#endif /* _TtC7XSports28SportsPlayerLeaderHeaderView_h */
