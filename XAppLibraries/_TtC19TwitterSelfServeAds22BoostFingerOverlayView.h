//
#ifndef _TtC19TwitterSelfServeAds22BoostFingerOverlayView_h
#define _TtC19TwitterSelfServeAds22BoostFingerOverlayView_h
@import Foundation;

@class UIView, _$sSo6UIViewCSg __C.CGPoint _$scSg, _$syycSg;

@interface TwitterSelfServeAds.BoostFingerOverlayView : UIView { // (Swift)
    /* instance variables */
    __C.UIView? __C.CGPoint _$scSg hitTarget;
    (() -> ())? didLayout;
}

/* instance methods */
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC19TwitterSelfServeAds22BoostFingerOverlayView_h */
