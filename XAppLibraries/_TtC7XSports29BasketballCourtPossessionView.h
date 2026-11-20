//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports29BasketballCourtPossessionView_h
#define _TtC7XSports29BasketballCourtPossessionView_h
@import Foundation;

@class UIView, XSports.BasketballCourtFit, XSports.BasketballCourtPossessionView.AnimatedState ?, XSports.BasketballCourtPossessionView.Cue ?, _$sSD -> XSports.SportsTeamSide _$sSo7UIImageC, _$sSaySo12CAShapeLayerCG, _$sSo7CALayerC;

@interface XSports.BasketballCourtPossessionView : UIView { // (Swift)
    /* instance variables */
    XSports.BasketballCourtPossessionView.Cue ? cue;
    Swift.Dictionary -> XSports.SportsTeamSide __C.UIImage logos;
    XSports.BasketballCourtFit fit;
    [__C.CAShapeLayer] arrowLayers;
    __C.CALayer logoLayer;
    XSports.BasketballCourtPossessionView.AnimatedState ? animatedState;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)reduceMotionDidChange;

@end

#endif /* _TtC7XSports29BasketballCourtPossessionView_h */
