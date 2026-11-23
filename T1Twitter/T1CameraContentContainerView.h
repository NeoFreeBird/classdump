//
#ifndef T1CameraContentContainerView_h
#define T1CameraContentContainerView_h
@import Foundation;

#include "T1CameraCapturePreviewControlsOverlayView.h"

@class NSLayoutConstraint, UIColor, UILayoutGuide, UIView;

@interface T1CameraContentContainerView : UIView

@property (readonly, nonatomic) T1CameraCapturePreviewControlsOverlayView *overlayView;
@property (readonly, nonatomic) NSLayoutConstraint *controlsAreaGuideHeightAnchorConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *controlsAreaGuideTopAnchorConstraint;
@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInsets;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double maximumControlsAreaHeight;
@property (nonatomic) double minimumControlsAreaHeight;
@property (retain, nonatomic) UIColor *controlsAreaOverlayColor;
@property (readonly, nonatomic) _Bool controlsAreaOverlayHidden;
@property (readonly, nonatomic) UILayoutGuide *controlsAreaGuide;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } controlsAreaFrame;
@property (nonatomic) _Bool showsControlsArea;
@property (nonatomic) struct CGSize { double x0; double x1; } contentSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_t1_cameraCaptureContainerView_initialize;
- (_Bool)isControlsAreaOverlayHidden;
- (void)setShowsControlsArea:(_Bool)area animated:(_Bool)animated;
- (void)_t1_main_updateLayoutAniamted:(_Bool)aniamted;
- (void)layoutSubviews;

@end

#endif /* T1CameraContentContainerView_h */
