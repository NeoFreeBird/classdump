//
#ifndef PTVBroadcastDetailsSectionHeaderViewLayoutSpec_h
#define PTVBroadcastDetailsSectionHeaderViewLayoutSpec_h
@import Foundation;

@class NSObject;

@interface PTVBroadcastDetailsSectionHeaderViewLayoutSpec : NSObject

/* class methods */
+ (double)HeartsHeaderViewPaddingX;
+ (double)HeartsHeaderViewPaddingY;
+ (double)HeartsHeaderViewImageLabelSpacingX;
+ (double)RightSpaceRequiredWithLabelSize:(struct CGSize { double x0; double x1; })size;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })MainLabelFrameWithString:(id)string Font:(id)font HeartLabelSize:(struct CGSize { double x0; double x1; })size ShouldShowHearts:(_Bool)hearts SuperViewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })HeartImageFrameWithLabelSize:(struct CGSize { double x0; double x1; })size SuperViewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })HeartLabelFrameWithLabelSize:(struct CGSize { double x0; double x1; })size SuperViewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })HeartImageFrameWithLabelSize:(struct CGSize { double x0; double x1; })size SuperViewSize:(struct CGSize { double x0; double x1; })size YValue:(double)yvalue TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })HeartLabelFrameWithLabelSize:(struct CGSize { double x0; double x1; })size SuperViewSize:(struct CGSize { double x0; double x1; })size YValue:(double)yvalue TraitCollection:(id)collection;
+ (id)HeartImage;

@end

#endif /* PTVBroadcastDetailsSectionHeaderViewLayoutSpec_h */
