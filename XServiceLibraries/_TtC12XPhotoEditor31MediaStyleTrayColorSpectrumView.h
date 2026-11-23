//
#ifndef _TtC12XPhotoEditor31MediaStyleTrayColorSpectrumView_h
#define _TtC12XPhotoEditor31MediaStyleTrayColorSpectrumView_h
@import Foundation;

@class Swift.Bool __C.CGPoint _$scSg, UIControl, XPhotoEditor.MediaColorPickFeedback, _$sSo15CAGradientLayerC, _$sSo6UIViewC, __C.CGPoint ?;

@interface XPhotoEditor.MediaStyleTrayColorSpectrumView : UIControl { // (Swift)
    /* instance variables */
    Swift.Bool __C.CGPoint _$scSg pickHandler;
    __C.UIView _fieldView;
    __C.CAGradientLayer _hueLayer;
    __C.CAGradientLayer _shadeLayer;
    __C.UIView _selectorView;
    XPhotoEditor.MediaColorPickFeedback _pickFeedback;
    __C.CGPoint ? _selectorUnitPoint;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (_Bool)beginTrackingWithTouch:(id)touch withEvent:(id)event;
- (_Bool)continueTrackingWithTouch:(id)touch withEvent:(id)event;
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;
- (void)cancelTrackingWithEvent:(id)event;
- (void)layoutSubviews;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;

@end

#endif /* _TtC12XPhotoEditor31MediaStyleTrayColorSpectrumView_h */
