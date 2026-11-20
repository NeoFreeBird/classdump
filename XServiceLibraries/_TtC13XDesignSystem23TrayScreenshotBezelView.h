//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13XDesignSystem23TrayScreenshotBezelView_h
#define _TtC13XDesignSystem23TrayScreenshotBezelView_h
@import Foundation;

@class UIView, _$s12CoreGraphics7CGFloatVMn ?, _$sSo12CAShapeLayerC;

@interface XDesignSystem.TrayScreenshotBezelView : UIView { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat ? displayCornerRadius;
    __C.CAShapeLayer edgeHighlightLayer;
}

/* class methods */
+ (Class)layerClass;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC13XDesignSystem23TrayScreenshotBezelView_h */
