//
#ifndef _TtC12XVideoEditor30VideoEditorColorEyedropperView_h
#define _TtC12XVideoEditor30VideoEditorColorEyedropperView_h
@import Foundation;

@class UIView, _$s12XPhotoEditor18MediaColorSamplingMp, _$s12XPhotoEditor19MediaColorLoupeViewCMn, _$sSo7UIColorCSg, _$sySo7UIColorCSgcSg, _$sySo7UIColorCcSg, __C.CGPoint ?, __C.CGRect ?;

@interface XVideoEditor.VideoEditorColorEyedropperView : UIView { // (Swift)
    /* instance variables */
    ((__C.UIColor) -> ())? colorChangeHandler;
    ((__C.UIColor?) -> ())? pickHandler;
    protocol descriptor for XPhotoEditor.MediaColorSampling _sampler;
    nominal type descriptor for XPhotoEditor.MediaColorLoupeView _loupeView;
    __C.CGRect ? _samplingFrame;
    __C.CGPoint ? _samplePoint;
    __C.UIColor? _sampledColor;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (_Bool)accessibilityActivate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC12XVideoEditor30VideoEditorColorEyedropperView_h */
