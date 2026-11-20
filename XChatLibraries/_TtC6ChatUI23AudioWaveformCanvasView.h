//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6ChatUI23AudioWaveformCanvasView_h
#define _TtC6ChatUI23AudioWaveformCanvasView_h
@import Foundation;

@class UIView, _$s12CoreGraphics7CGFloatVMn, _$sSaySdG, _$sSaySdGSg, _$sSd, _$sSo7UIColorC;

@interface ChatUI.AudioWaveformCanvasView : UIView { // (Swift)
    /* instance variables */
    [Swift.Double] audioLevels;
    Swift.Double playbackProgress;
    __C.UIColor barColor;
    [Swift.Double]? cachedLevels;
    nominal type descriptor for CoreGraphics.CGFloat cachedWidth;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;

@end

#endif /* _TtC6ChatUI23AudioWaveformCanvasView_h */
