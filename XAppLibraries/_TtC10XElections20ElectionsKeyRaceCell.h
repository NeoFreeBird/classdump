//
#ifndef _TtC10XElections20ElectionsKeyRaceCell_h
#define _TtC10XElections20ElectionsKeyRaceCell_h
@import Foundation;

@class UICollectionViewCell, XElections.ElectionsStatusView, _$sSa -> XElections.CandidateRow, _$sSo12CAShapeLayerC, _$sSo7UILabelC;

@interface XElections.ElectionsKeyRaceCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    __C.UILabel titleLabel;
    XElections.ElectionsStatusView statusView;
    __C.CAShapeLayer dividerLayer;
    Swift.Array -> XElections.CandidateRow rows;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC10XElections20ElectionsKeyRaceCell_h */
