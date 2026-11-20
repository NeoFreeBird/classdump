//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC19ChatMessageComposer20ControlMenuGlassView_h
#define _TtC19ChatMessageComposer20ControlMenuGlassView_h
@import Foundation;

@class Swift.Bool, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSaySo15CAGradientLayerCGSg, _$sSo6UIViewC, _$sSo6UIViewCSg, __C.CGRect;

@interface ChatMessageComposer.ControlMenuGlassView : UIView { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat specularAngleOffset;
    __C.UIView brightnessView;
    Swift.Bool isNativeGlass;
    __C.CGRect pathBounds;
    __C.UIView? $__lazy_storage_$_backgroundView;
    [__C.CAGradientLayer]? $__lazy_storage_$_specularLayers;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC19ChatMessageComposer20ControlMenuGlassView_h */
