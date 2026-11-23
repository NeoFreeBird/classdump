//
#ifndef _TtC7Profile16BalloonScoreView_h
#define _TtC7Profile16BalloonScoreView_h
@import Foundation;

@class Profile.BalloonView, UIView, _$sSi, _$sSo7UILabelC;

@interface Profile.BalloonScoreView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel label;
    Profile.BalloonView icon;
    Swift.Int count;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7Profile16BalloonScoreView_h */
