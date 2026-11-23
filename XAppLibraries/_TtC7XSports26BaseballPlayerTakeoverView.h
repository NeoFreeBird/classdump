//
#ifndef _TtC7XSports26BaseballPlayerTakeoverView_h
#define _TtC7XSports26BaseballPlayerTakeoverView_h
@import Foundation;

#include "_TtC7XSports14MeasurableView.h"

@class Swift.Bool, XSports.BaseballPlayerTakeoverView.Phase, XSports.SportsImageLoader ?, _$s12CoreGraphics7CGFloatVMn, _$sSb10isAnimated_Sb0A5LightSd5delaytSg, _$sSo11UIImageViewC, _$sSo12CAShapeLayerC, _$sSo16TIPImagePipelineCSg, _$sSo6UIViewC, _$sSo7UILabelC;

@interface XSports.BaseballPlayerTakeoverView : XSports.MeasurableView { // (Swift)
    /* instance variables */
    __C.TIPImagePipeline? imagePipeline;
    __C.UIView textContainer;
    __C.UIImageView headshotView;
    __C.UILabel nameLabel;
    __C.UILabel resultLabel;
    __C.UIView panelView;
    __C.CAShapeLayer panelMask;
    __C.UIImageView logoView;
    XSports.SportsImageLoader ? $__lazy_storage_$_headshotLoader;
    XSports.SportsImageLoader ? $__lazy_storage_$_logoLoader;
    XSports.BaseballPlayerTakeoverView.Phase phase;
    (isAnimated: Swift.Bool, isLight: Swift.Bool, delay: Swift.Double)? pendingAnimation;
    Swift.Bool showsTeamLogo;
    nominal type descriptor for CoreGraphics.CGFloat headshotLeadingInset;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC7XSports26BaseballPlayerTakeoverView_h */
