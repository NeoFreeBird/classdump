//
#ifndef _TtC10XElections20ElectionsVoteBarView_h
#define _TtC10XElections20ElectionsVoteBarView_h
@import Foundation;

@class UIView, _$sSd7leading_Sd8trailingtSg, _$sSo6UIViewC, _$sSo7UILabelC;

@interface XElections.ElectionsVoteBarView : UIView { // (Swift)
    /* instance variables */
    __C.UIView trackView;
    __C.UIView leadingFill;
    __C.UIView trailingFill;
    __C.UILabel leadingValueLabel;
    __C.UILabel trailingValueLabel;
    (leading: Swift.Double, trailing: Swift.Double)? shares;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC10XElections20ElectionsVoteBarView_h */
