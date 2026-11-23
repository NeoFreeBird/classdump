//
#ifndef _TtC10JetfuelSDK16BackdropBlurView_h
#define _TtC10JetfuelSDK16BackdropBlurView_h
@import Foundation;

@class UIView, _$s12CoreGraphics7CGFloatVMn, _$sSo11UIImageViewC, __C.CGRect;

@interface JetfuelSDK.BackdropBlurView : UIView { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat radius;
    __C.UIImageView content;
    __C.CGRect capturedGeometry;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC10JetfuelSDK16BackdropBlurView_h */
