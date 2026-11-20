//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVFeaturedReasonViewLayoutSpec_h
#define PTVFeaturedReasonViewLayoutSpec_h
@import Foundation;

@class NSObject;

@interface PTVFeaturedReasonViewLayoutSpec : NSObject

/* class methods */
+ (double)HorizontalPaddingBetweenIconAndReason;
+ (id)FeaturedReasonBookmarkIcon;
+ (struct CGSize { double x0; double x1; })FeaturedReasonIconSize;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })FeaturedBookmarkIconFrameWithSuperviewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (id)FontForFeaturedReason;
+ (struct CGSize { double x0; double x1; })FullSizeForFeaturedReason:(id)reason WithSuperviewSize:(struct CGSize { double x0; double x1; })size;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })TwoLineFeaturedLabelFrameWithStringSize:(struct CGSize { double x0; double x1; })size SuperviewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })OneLineFeatureLabelFrameWithStringSize:(struct CGSize { double x0; double x1; })size SuperviewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })LearnMoreFeatureLabelFrameWithSuperviewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;

@end

#endif /* PTVFeaturedReasonViewLayoutSpec_h */
