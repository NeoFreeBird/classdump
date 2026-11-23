//
#ifndef _TtC7XSports26AmericanFootballGameEngine_h
#define _TtC7XSports26AmericanFootballGameEngine_h
@import Foundation;

@class Swift.Bool, XSports.AmericanFootballGameEngine.Frame _$scSg ->, XSports.AmericanFootballGameEngine.Phase, XSports.AmericanFootballGameEngine.Presentation ?, XSports.AmericanFootballGameEngine.Presentation _$s_ -> _$s12CoreGraphics7CGFloatVMn _$stcSg, XSports.AmericanFootballGameEngine.Presentation _$scSg ->, _$sSa -> XSports.AmericanFootballGameEngine.Presentation, _$sSdyc, _$sSo13CADisplayLinkCSg, _TtCs12_SwiftObject;

@interface XSports.AmericanFootballGameEngine : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XSports.AmericanFootballGameEngine.Frame _$scSg -> onFrame;
    XSports.AmericanFootballGameEngine.Presentation  first-element-marker  -> nominal type descriptor for CoreGraphics.CGFloat _$stcSg onSettleFrame;
    XSports.AmericanFootballGameEngine.Presentation _$scSg -> onFinished;
    XSports.AmericanFootballGameEngine.Presentation _$scSg -> onTraceRevealed;
    XSports.AmericanFootballGameEngine.Presentation _$scSg -> onTransferReached;
    Swift.Bool automaticallyAdvances;
    () -> Swift.Double now;
    __C.CADisplayLink? displayLink;
    XSports.AmericanFootballGameEngine.Phase phase;
    XSports.AmericanFootballGameEngine.Presentation ? current;
    Swift.Array -> XSports.AmericanFootballGameEngine.Presentation queue;
}

/* instance methods */
- (void)step;

@end

#endif /* _TtC7XSports26AmericanFootballGameEngine_h */
