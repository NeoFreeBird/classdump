//
#ifndef _TtC11ChatGrokBot27GrokBotCardFocusOverlayView_h
#define _TtC11ChatGrokBot27GrokBotCardFocusOverlayView_h
@import Foundation;

@class Swift.Bool, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSo12CAShapeLayerC, _$sSo12UIScrollViewCSgXw, _$sSo13CADisplayLinkCSg, _$sSo6UIViewCSgXw, __C.CGRect ?;

@interface ChatGrokBot.GrokBotCardFocusOverlayView : UIView { // (Swift)
    /* instance variables */
    __C.CAShapeLayer maskLayer;
    weak __C.UIView? focusedView;
    weak __C.UIView? hiddenView;
    weak __C.UIScrollView? scrollView;
    __C.CADisplayLink? displayLink;
    nominal type descriptor for CoreGraphics.CGFloat hiddenViewAlpha;
    Swift.Bool isDismissed;
    __C.CGRect ? maskedHoleRect;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11ChatGrokBot27GrokBotCardFocusOverlayView_h */
