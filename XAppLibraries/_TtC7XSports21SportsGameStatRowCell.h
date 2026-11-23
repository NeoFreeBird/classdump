//
#ifndef _TtC7XSports21SportsGameStatRowCell_h
#define _TtC7XSports21SportsGameStatRowCell_h
@import Foundation;

@class UICollectionViewCell, _$s12CoreGraphics7CGFloatVMn, _$sSd, _$sSo7CALayerC, _$sSo7UILabelC;

@interface XSports.SportsGameStatRowCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    __C.UILabel awayValueLabel;
    __C.UILabel homeValueLabel;
    __C.UILabel awayDetailLabel;
    __C.UILabel homeDetailLabel;
    __C.UILabel nameLabel;
    __C.CALayer awayBarLayer;
    __C.CALayer homeBarLayer;
    Swift.Double awayBarFraction;
    nominal type descriptor for CoreGraphics.CGFloat valueBlockHeight;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC7XSports21SportsGameStatRowCell_h */
