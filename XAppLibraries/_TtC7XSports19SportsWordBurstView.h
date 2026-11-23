//
#ifndef _TtC7XSports19SportsWordBurstView_h
#define _TtC7XSports19SportsWordBurstView_h
@import Foundation;

@class UIView, XSports.SportsImpactWordmarkView, _$s12CoreGraphics7CGFloatVMn, _$sSd, _$sSo13CADisplayLinkCSg;

@interface XSports.SportsWordBurstView : UIView { // (Swift)
    /* instance variables */
    XSports.SportsImpactWordmarkView wordmarkView;
    __C.CADisplayLink? displayLink;
    Swift.Double beginTime;
    nominal type descriptor for CoreGraphics.CGFloat endFrame;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)didMoveToWindow;
- (void)layoutSubviews;

@end

#endif /* _TtC7XSports19SportsWordBurstView_h */
