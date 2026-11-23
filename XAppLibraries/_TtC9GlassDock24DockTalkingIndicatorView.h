//
#ifndef _TtC9GlassDock24DockTalkingIndicatorView_h
#define _TtC9GlassDock24DockTalkingIndicatorView_h
@import Foundation;

@class Swift.Bool, UIView, _$sSaySo7CALayerCG, _$sSbSg, _$sSo7UIColorC;

@interface GlassDock.DockTalkingIndicatorView : UIView { // (Swift)
    /* instance variables */
    __C.UIColor color;
    Swift.Bool? reducesMotion;
    Swift.Bool isAnimating;
    [__C.CALayer] bars;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC9GlassDock24DockTalkingIndicatorView_h */
