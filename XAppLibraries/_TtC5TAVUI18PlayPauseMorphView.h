//
#ifndef _TtC5TAVUI18PlayPauseMorphView_h
#define _TtC5TAVUI18PlayPauseMorphView_h
@import Foundation;

@class TAVUI.PlayPauseMorphView.Mode, UIView, _$sSo12CAShapeLayerC, _$sSo7UIColorC;

@interface TAVUI.PlayPauseMorphView : UIView { // (Swift)
    /* instance variables */
    TAVUI.PlayPauseMorphView.Mode mode;
    __C.CAShapeLayer leftLayer;
    __C.CAShapeLayer rightLayer;
    __C.UIColor glyphColor;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC5TAVUI18PlayPauseMorphView_h */
