//
#ifndef _TtC14T1TwitterSwift24CustomPivotTableViewCell_h
#define _TtC14T1TwitterSwift24CustomPivotTableViewCell_h
@import Foundation;

@class TFNTableViewCell, _$s10TwitterURT25URTTimelinePivotViewModelCMn ?, _$sSo11UIImageViewC, _$sSo18NSLayoutConstraintCSg, _$sSo6UIViewC, _$sSo7UILabelC;

@interface T1TwitterSwift.CustomPivotTableViewCell : TFNTableViewCell { // (Swift)
    /* instance variables */
    nominal type descriptor for TwitterURT.URTTimelinePivotViewModel ? viewModel;
    __C.NSLayoutConstraint? imageAspectRatioConstraint;
    __C.UIImageView backgroundImageView;
    __C.UILabel overlayTextLabel;
    __C.UILabel secondaryTextLabel;
    __C.UIImageView detailTextImageView;
    __C.UIView arrowIconView;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC14T1TwitterSwift24CustomPivotTableViewCell_h */
