//
#ifndef _TtC10XElections17ElectionsRaceCell_h
#define _TtC10XElections17ElectionsRaceCell_h
@import Foundation;

@class UICollectionViewCell, XElections.ElectionsRaceStandingView, XElections.ElectionsStatusView, _$sSa -> XElections.ElectionsCandidateRowView, _$sSi, _$sSo6UIViewC, _$sSo7UILabelC;

@interface XElections.ElectionsRaceCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    __C.UILabel titleLabel;
    XElections.ElectionsStatusView statusView;
    XElections.ElectionsRaceStandingView standingView;
    __C.UIView dividerView;
    Swift.Array -> XElections.ElectionsCandidateRowView rows;
    Swift.Int rowCount;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC10XElections17ElectionsRaceCell_h */
