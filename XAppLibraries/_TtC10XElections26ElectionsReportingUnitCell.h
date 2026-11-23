//
#ifndef _TtC10XElections26ElectionsReportingUnitCell_h
#define _TtC10XElections26ElectionsReportingUnitCell_h
@import Foundation;

@class UICollectionViewCell, XElections.ElectionsShareBarView, _$sSo6UIViewC, _$sSo7UILabelC;

@interface XElections.ElectionsReportingUnitCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    __C.UILabel nameLabel;
    __C.UILabel marginLabel;
    __C.UILabel statusLabel;
    XElections.ElectionsShareBarView shareBar;
    __C.UIView dividerView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC10XElections26ElectionsReportingUnitCell_h */
