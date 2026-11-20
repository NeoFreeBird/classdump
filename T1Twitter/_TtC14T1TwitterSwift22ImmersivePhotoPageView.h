//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift22ImmersivePhotoPageView_h
#define _TtC14T1TwitterSwift22ImmersivePhotoPageView_h
@import Foundation;

#include "T1ImageDisplayViewDelegate-Protocol.h"
#include "T1ImageDisplayViewDownloadDelegate-Protocol.h"
#include "T1ZoomableImageViewZoomDelegate-Protocol.h"

@class Swift.Bool, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSo12CAShapeLayerC, _$sSo18T1ImageDisplayViewC, _$sySbcSg, _$sySo18T1ImageDisplayViewC_ __C.CGPoint _$stcSg, __C.CGSize;

@interface T1TwitterSwift.ImmersivePhotoPageView : UIView <T1ZoomableImageViewZoomDelegate, T1ImageDisplayViewDelegate, T1ImageDisplayViewDownloadDelegate> { // (Swift)
    /* instance variables */
    ((Swift.Bool) -> ())? onZoomStateChanged;
    ((Swift.Bool) -> ())? onZoomEnded;
     empty-list __C.T1ImageDisplayView first-element-marker  __C.CGPoint _$stcSg onLongPress;
    Swift.Bool isZooming;
    __C.T1ImageDisplayView imageDisplay;
    __C.CGSize imageDimensions;
    nominal type descriptor for CoreGraphics.CGFloat lastZoomScale;
    nominal type descriptor for CoreGraphics.CGFloat cornerRadiusRatio;
    __C.CAShapeLayer mediaCornerMaskLayer;
    nominal type descriptor for CoreGraphics.CGFloat defaultZoomScale;
}

/* instance methods */
- (void)zoomScrollViewWillBeginZooming:(id)zooming withView:(id)view;
- (void)zoomScrollViewDidEndZooming:(id)zooming withView:(id)view atScale:(double)scale;
- (void)imageDisplayView:(id)view didLongPress:(id)press;
- (void)imageDisplayView:(id)view didTriggerContextMenuInteraction:(id)interaction;
- (void)imageDisplayViewDidSuccessfullyLoadImage:(id)image;
- (void)imageDisplayView:(id)view didFailToLoadImageWithError:(id)error;
- (void)imageDisplayViewDidReset:(id)reset;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift22ImmersivePhotoPageView_h */
