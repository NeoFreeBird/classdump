//
#ifndef _TtC14T1TwitterSwiftP33_E6EA013A20D11A84BAA49F73A573651E18FrameTableViewCell_h
#define _TtC14T1TwitterSwiftP33_E6EA013A20D11A84BAA49F73A573651E18FrameTableViewCell_h
@import Foundation;

@class TFNTableViewCell;

@interface T1TwitterSwift.(FrameTableViewCell in _E6EA013A20D11A84BAA49F73A573651E) : TFNTableViewCell { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *frameView;
    NSNumber"16@0:8 *scrollerBleed;
}

/* instance methods */
- (void)safeAreaInsetsDidChange;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC14T1TwitterSwiftP33_E6EA013A20D11A84BAA49F73A573651E18FrameTableViewCell_h */
