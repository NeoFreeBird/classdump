//
#ifndef PTVActionSheetViewLayoutSpec_h
#define PTVActionSheetViewLayoutSpec_h
@import Foundation;

@class NSObject;

@interface PTVActionSheetViewLayoutSpec : NSObject

/* class methods */
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ActionSheetScrollViewFrameWithSuperViewSize:(struct CGSize { double x0; double x1; })size DismissButtonHeight:(double)height TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })DismissButtonFrameWithButtonSize:(struct CGSize { double x0; double x1; })size SuperviewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ButtonFrameWithButtonSize:(struct CGSize { double x0; double x1; })size ButtonIndex:(long long)index SuperviewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })HeaderFrameWithHeaderSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ButtonsBackgroundViewWithHeaderSize:(struct CGSize { double x0; double x1; })size SuperviewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ActionSheetBackgroundViewWithHeaderSize:(struct CGSize { double x0; double x1; })size SuperviewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;

@end

#endif /* PTVActionSheetViewLayoutSpec_h */
