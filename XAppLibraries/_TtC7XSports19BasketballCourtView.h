//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports19BasketballCourtView_h
#define _TtC7XSports19BasketballCourtView_h
@import Foundation;

@class Swift.Bool, UIView, XSports.BasketballCourtBallView, XSports.BasketballCourtFit, XSports.BasketballCourtPlay _$s_ -> XSports.BasketballCourtPlay.Caption XSports.SportsGameTeam _$stcSg, XSports.BasketballCourtPossessionView, XSports.BasketballCourtView.Content ?, XSports.BasketballGameEngine, XSports.BasketballGameEngine.Presentation ?, XSports.SportsImageLoader ?, XSports.SportsPlayerPin, XSports.SportsWordBurstView, _$s10Foundation3URLVMn ?, _$sSD -> XSports.SportsTeamSide _$sSo7UIImageC, _$sScTyyt _$ss5NeverOMn ?, _$sSd, _$sSf, _$sSo12CAShapeLayerC, _$sSo16TIPImagePipelineCSg, _$sSo6UIViewC, _$sSo7CALayerC, _$sSo7UIImageCSg, _$ss5Int64VMn ?;

@interface XSports.BasketballCourtView : UIView { // (Swift)
    /* instance variables */
    XSports.BasketballCourtPlay  first-element-marker  -> XSports.BasketballCourtPlay.Caption XSports.SportsGameTeam _$stcSg onPresentPlay;
    Swift.Bool isPlayMotionEnabled;
    __C.TIPImagePipeline? imagePipeline;
    __C.UIView surfaceView;
    __C.CALayer courtLayer;
    __C.CALayer padsLayer;
    __C.CALayer homeTeamLogoLayer;
    __C.CALayer xLogoLayer;
    XSports.BasketballCourtPossessionView possessionView;
    __C.UIView playOverlay;
    __C.UIView markersView;
    __C.CAShapeLayer trailLayer;
    XSports.SportsPlayerPin pin;
    __C.CAShapeLayer resultLayer;
    XSports.BasketballCourtBallView ballView;
    XSports.SportsWordBurstView pointsBurstView;
    XSports.SportsImageLoader ? $__lazy_storage_$_awayLogoLoader;
    XSports.SportsImageLoader ? $__lazy_storage_$_homeLogoLoader;
    XSports.SportsImageLoader ? $__lazy_storage_$_headshotLoader;
    XSports.SportsImageLoader ? $__lazy_storage_$_courtImageLoader;
    __C.UIImage? arenaCourtImage;
    nominal type descriptor for Foundation.URL ? courtImageURL;
    Swift.Bool isLoadingCourtImage;
    Swift.Dictionary -> XSports.SportsTeamSide __C.UIImage logos;
    __C.UIImage? headshot;
    XSports.BasketballGameEngine engine;
    XSports.BasketballCourtView.Content ? content;
    XSports.BasketballGameEngine.Presentation ? presentation;
    nominal type descriptor for Swift.Int64 ? releasedSequence;
    Swift.Bool needsPlayAnimation;
    Swift.Float playOpacity;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? handoffTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? directionTask;
    Swift.Double directionHeldUntil;
    XSports.BasketballCourtFit fit;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (void)layoutSubviews;

@end

#endif /* _TtC7XSports19BasketballCourtView_h */
