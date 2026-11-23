//
#ifndef PTVBannerViewLayoutSpec_h
#define PTVBannerViewLayoutSpec_h
@import Foundation;

@class NSObject;

@interface PTVBannerViewLayoutSpec : NSObject

/* class methods */
+ (double)BounceErrorY;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ContentFrameHiddenWithViewSize:(struct CGSize { double x0; double x1; })size ContainerSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ContentFrameVisibleWithViewSize:(struct CGSize { double x0; double x1; })size YOffset:(double)yoffset ContainerSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })AddedFillFrameWithViewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })FrameWithViewSize:(struct CGSize { double x0; double x1; })size ContainerSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (void)SetFrameForBannerView:(id)view AndWindow:(id)window;

@end

#endif /* PTVBannerViewLayoutSpec_h */
