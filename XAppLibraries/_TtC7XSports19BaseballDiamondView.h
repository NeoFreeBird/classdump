//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports19BaseballDiamondView_h
#define _TtC7XSports19BaseballDiamondView_h
@import Foundation;

@class UIView, XSports.BaseballBaseOccupancy, XSports.BaseballDiamondView.Style, _$sSo12CAShapeLayerC;

@interface XSports.BaseballDiamondView : UIView { // (Swift)
    /* instance variables */
    XSports.BaseballDiamondView.Style style;
    __C.CAShapeLayer firstBaseLayer;
    __C.CAShapeLayer secondBaseLayer;
    __C.CAShapeLayer thirdBaseLayer;
    XSports.BaseballBaseOccupancy occupancy;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports19BaseballDiamondView_h */
