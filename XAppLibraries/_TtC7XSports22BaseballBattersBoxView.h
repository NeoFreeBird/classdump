//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports22BaseballBattersBoxView_h
#define _TtC7XSports22BaseballBattersBoxView_h
@import Foundation;

@class Swift.Bool, UIView, XSports.BaseballBatterStance ?, XSports.BaseballBattersBoxView.Tween, XSports.SportsImageLoader, _$s12CoreGraphics7CGFloatVMn ?, _$sSSSg, _$sSa -> XSports.BaseballBattersBoxView.Tween, _$sSa -> XSports.SportsStrikeZonePoint, _$sSaySdSgG, _$sSo12CAShapeLayerC, _$sSo13CADisplayLinkCSg, _$sSo16TIPImagePipelineCSg, _$sSo7UIColorCSg, _$sSo7UIImageCSg, __C.CGRect;

@interface XSports.BaseballBattersBoxView : UIView { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat ? endInset;
    Swift.Bool fadesIdleBox;
    __C.TIPImagePipeline? imagePipeline;
    Swift.Array -> XSports.SportsStrikeZonePoint points;
    XSports.BaseballBatterStance ? stance;
    __C.UIColor? teamColor;
    Swift.String? landedKey;
    XSports.BaseballBattersBoxView.Tween rightStance;
    XSports.BaseballBattersBoxView.Tween leftStance;
    XSports.BaseballBattersBoxView.Tween zoneOnRight;
    XSports.BaseballBattersBoxView.Tween arrival;
    __C.UIImage? figureImage;
    XSports.SportsImageLoader leftArtworkLoader;
    XSports.SportsImageLoader rightArtworkLoader;
    __C.UIImage? leftArtworkImage;
    __C.UIImage? rightArtworkImage;
    Swift.Bool showsAverages;
    [Swift.Double?] averages;
    Swift.String? averagesKey;
    XSports.BaseballBattersBoxView.Tween outline;
    XSports.BaseballBattersBoxView.Tween pitchesShown;
    XSports.BaseballBattersBoxView.Tween litCells;
    Swift.Array -> XSports.BaseballBattersBoxView.Tween labels;
    __C.CGRect zoneFrame;
    __C.CADisplayLink? displayLink;
    __C.CAShapeLayer haloLayer;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)willMoveToWindow:(id)window;
- (void)traitCollectionDidChange:(id)change;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;

@end

#endif /* _TtC7XSports22BaseballBattersBoxView_h */
