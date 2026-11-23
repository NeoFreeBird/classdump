//
#ifndef _TtC4Grok33GrokImagineShimmeringEffectUIView_h
#define _TtC4Grok33GrokImagineShimmeringEffectUIView_h
@import Foundation;

@class UIView, _$sSo13CADisplayLinkCSg, _$sSo6UIViewC;

@interface Grok.GrokImagineShimmeringEffectUIView : UIView { // (Swift)
    /* instance variables */
    __C.UIView colorView;
    __C.CADisplayLink? displayLink;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)didMoveToWindow;
- (void)updateAnimation;
- (void)dealloc;

@end

#endif /* _TtC4Grok33GrokImagineShimmeringEffectUIView_h */
