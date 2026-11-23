//
#ifndef CIImage_PTVAdditions_h
#define CIImage_PTVAdditions_h
@import Foundation;

@interface CIImage (PTVAdditions)

/* class methods */
+ (id)darkenLUTImage;

/* instance methods */
- (id)ptv_imageCenteredInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)ptv_imageByScalingToFillRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)ptv_imageByFillingAndCroppingToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)ptv_imageByScalingToFitRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)ptv_imageByFittingAndCroppingToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)ptv_imageByScalingOnlySizeByFactor:(struct CGPoint { double x0; double x1; })factor;
- (id)ptv_imageByScalingWithMaxDimension:(double)dimension;
- (id)ptv_imageByApplyingAlpha:(double)alpha;
- (id)ptv_imageByByDarkeningWithStrength:(double)strength;
- (id)ptv_imageByBlurringWithRadius:(double)radius;
- (id)ptv_imageByBlurringWithStyle:(long long)style;
- (id)ptv_imageByApplyingRotationInDegreesCounterClockwise:(double)clockwise;
- (id)ptv_imageByApplyingRotationInDegreesClockwise:(double)clockwise;
- (id)ptv_imageByMirroringHorizontally;
- (id)ptv_imageByFlippingVertically;

@end

#endif /* CIImage_PTVAdditions_h */
