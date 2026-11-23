//
#ifndef PTVFocusIndicatorLayoutSpec_h
#define PTVFocusIndicatorLayoutSpec_h
@import Foundation;

@class NSObject;

@interface PTVFocusIndicatorLayoutSpec : NSObject

/* class methods */
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })IndicatorFrameWithCenterPoint:(struct CGPoint { double x0; double x1; })point TraitCollection:(id)collection;
+ (double)CircleDiameter;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })CircleFrameWithSuperViewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (double)CornerRadiusForCircle;
+ (double)CenterPointDiameter;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })CenterPointFrameWithSuperviewSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;
+ (double)CornerRadiusForMiddleDot;

@end

#endif /* PTVFocusIndicatorLayoutSpec_h */
