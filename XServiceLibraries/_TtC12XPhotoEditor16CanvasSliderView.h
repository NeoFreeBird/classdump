//
#ifndef _TtC12XPhotoEditor16CanvasSliderView_h
#define _TtC12XPhotoEditor16CanvasSliderView_h
@import Foundation;

@class Swift.Bool, UIView, XPhotoEditor.TaperedTrackView, _$s12CoreGraphics7CGFloatVMn, _$s12CoreGraphics7CGFloatVMn _$scSg ->, _$sSo6UIViewCSg, _$sSo6UIViewCSgXw, _$sSo8UISliderC;

@interface XPhotoEditor.CanvasSliderView : UIView { // (Swift)
    /* instance variables */
    __C.UISlider slider;
    XPhotoEditor.TaperedTrackView trackBackgroundView;
    weak __C.UIView? referenceElementContainer;
    __C.UIView? referenceElement;
    Swift.Bool scalesReferenceElement;
    nominal type descriptor for CoreGraphics.CGFloat minimumValue;
    nominal type descriptor for CoreGraphics.CGFloat maximumValue;
    nominal type descriptor for CoreGraphics.CGFloat _$scSg -> onValueChanged;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (void)sliderValueChanged;
- (void)sliderTouchDown;
- (void)sliderTouchUp;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC12XPhotoEditor16CanvasSliderView_h */
