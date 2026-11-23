//
#ifndef PTVCameraPreviewGuestCallContentView_h
#define PTVCameraPreviewGuestCallContentView_h
@import Foundation;

#include "PTVGuestContainerView.h"

@class UIView;

@interface PTVCameraPreviewGuestCallContentView : UIView {
    /* instance variables */
    UIView *_previewOverlay;
}

@property (retain, nonatomic) PTVGuestContainerView *previewView;
@property (nonatomic) double previewRotation;

/* class methods */
+ (struct CGSize { double x0; double x1; })VideoPreviewSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setGuestView:(id)view;
- (void)setOverlayColor:(id)color;

@end

#endif /* PTVCameraPreviewGuestCallContentView_h */
