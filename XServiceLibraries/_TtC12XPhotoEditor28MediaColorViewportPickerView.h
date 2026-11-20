//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12XPhotoEditor28MediaColorViewportPickerView_h
#define _TtC12XPhotoEditor28MediaColorViewportPickerView_h
@import Foundation;

@class Swift.Bool, UIView, XPhotoEditor.MediaColorLoupeView, XPhotoEditor.MediaColorPickFeedback, XPhotoEditor.MediaColorSampling, XPhotoEditor.MediaColorViewportPickerView.LoupePosition, XPhotoEditor.MediaColorViewportPickerView.TouchReach, XPhotoEditor.MediaColorViewportPickerView.UnderTrayReach _$scSg ->, _$sSaySo6UIViewCG, _$sSbSo7UIColorCcSg, _$sSo6UIViewC, _$syycSg, __C.CGRect ?;

@interface XPhotoEditor.MediaColorViewportPickerView : UIView { // (Swift)
    /* instance variables */
    ((__C.UIColor) -> Swift.Bool)? colorChangeHandler;
    (() -> ())? sampleFailureHandler;
    XPhotoEditor.MediaColorViewportPickerView.UnderTrayReach _$scSg -> underTrayReachHandler;
    (() -> ())? escapeHandler;
    [__C.UIView] passthroughViews;
    XPhotoEditor.MediaColorSampling _sampler;
    Swift.Bool _reachesUnderTray;
    __C.UIView _loupeClipView;
    XPhotoEditor.MediaColorLoupeView _loupeView;
    XPhotoEditor.MediaColorPickFeedback _pickFeedback;
    __C.CGRect ? _measuredVideoFrame;
    XPhotoEditor.MediaColorViewportPickerView.LoupePosition _loupePosition;
    XPhotoEditor.MediaColorViewportPickerView.TouchReach _touchReach;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (_Bool)accessibilityActivate;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (_Bool)accessibilityPerformEscape;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC12XPhotoEditor28MediaColorViewportPickerView_h */
