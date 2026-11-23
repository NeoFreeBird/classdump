//
#ifndef _TtC7XSports20SportsHeroRippleView_h
#define _TtC7XSports20SportsHeroRippleView_h
@import Foundation;

#include "MTKViewDelegate-Protocol.h"

@class MTKView, Swift.Bool, XSports.SportsHeroRippleView.Uniforms, _$sSd, _$sSo15MTLCommandQueue_p, _$sSo22MTLRenderPipelineState_p;

@interface XSports.SportsHeroRippleView : MTKView <MTKViewDelegate> { // (Swift)
    /* instance variables */
    __C.MTLCommandQueue commandQueue;
    __C.MTLRenderPipelineState pipeline;
    Swift.Double startTime;
    XSports.SportsHeroRippleView.Uniforms uniforms;
    Swift.Bool isActive;
}

/* instance methods */
- (void)mtkView:(id)view drawableSizeWillChange:(struct CGSize { double x0; double x1; })change;
- (void)drawInMTKView:(id)mtkview;
- (id)initWithCoder:(id)coder;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame device:(id)device;

@end

#endif /* _TtC7XSports20SportsHeroRippleView_h */
