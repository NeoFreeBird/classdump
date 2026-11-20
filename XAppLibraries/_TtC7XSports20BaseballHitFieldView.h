//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports20BaseballHitFieldView_h
#define _TtC7XSports20BaseballHitFieldView_h
@import Foundation;

@class Swift.Bool, UIView, XSports.AmericanFootballImpactPlayAnimationView, XSports.BaseballBaseOccupancy, XSports.BaseballFieldFit, XSports.BaseballFieldPalette ?, XSports.BaseballFieldStadiumLayer, XSports.BaseballGameEngine.Presentation ?, XSports.BaseballParkDistances ?, _$sSa -> XSports.BaseballFielder, _$sSa -> XSports.SportsImageLoader ?, _$sSa -> XSports.SportsPlayerPin, _$sSaySo12CAShapeLayerCG, _$sSaySo15CAGradientLayerCG, _$sSaySo7UILabelCG, _$sScCyyt _$ss5NeverOMn ?, _$sSd, _$sSo12CAShapeLayerC, _$sSo15CAGradientLayerC, _$sSo16TIPImagePipelineCSg, _$sSo7CALayerC, _$sSo7UIColorC9thirdBase_AB05firstC0t, _$sSo7UIColorCSg, _$sySScSg;

@interface XSports.BaseballHitFieldView : UIView { // (Swift)
    /* instance variables */
    __C.TIPImagePipeline? imagePipeline;
    __C.CAGradientLayer glowLayer;
    __C.CALayer fieldSceneLayer;
    __C.CALayer ambientPlaneLayer;
    __C.CALayer ambientShadowLayer;
    __C.CALayer contactPlaneLayer;
    __C.CALayer contactShadowLayer;
    __C.CALayer fieldLayer;
    __C.CALayer logoLayer;
    [__C.CAGradientLayer] bagShadowLayers;
    XSports.BaseballFieldStadiumLayer stadiumLayer;
    [__C.CAShapeLayer] bagSideLayers;
    [__C.CAShapeLayer] bagTopLayers;
    __C.CALayer playClipLayer;
    __C.CALayer playSceneLayer;
    __C.CALayer groundLayer;
    __C.CAShapeLayer startMarkerLayer;
    __C.CAShapeLayer endMarkerLayer;
    __C.CAShapeLayer shadowLayer;
    __C.CAShapeLayer trailLayer;
    __C.CAShapeLayer ballLayer;
    __C.CALayer runnerLayer;
    Swift.Array -> XSports.SportsPlayerPin runnerPins;
    Swift.Array -> XSports.SportsImageLoader ? $__lazy_storage_$_runnerLoaders;
    XSports.AmericanFootballImpactPlayAnimationView celebrationView;
    ((Swift.String) -> ())? onPresentationFinished;
    [__C.UILabel] fielderLabels;
    Swift.Array -> XSports.BaseballFielder defense;
    XSports.BaseballGameEngine.Presentation ? presentation;
    Swift.CheckedContinuation empty-list () nominal type descriptor for Swift.Never ? celebrationContinuation;
    Swift.Double presentationStart;
    Swift.Bool needsPrepare;
    XSports.BaseballFieldPalette ? palette;
    XSports.BaseballFieldFit fit;
    XSports.BaseballBaseOccupancy bases;
    __C.UIColor? basesTeamColor;
    (thirdBase: __C.UIColor, firstBase: __C.UIColor) dugoutAccents;
    XSports.BaseballParkDistances ? wallDistances;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (void)layoutSubviews;

@end

#endif /* _TtC7XSports20BaseballHitFieldView_h */
