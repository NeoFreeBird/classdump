//
#ifndef TFNTooltipTarget_h
#define TFNTooltipTarget_h
@import Foundation;

@class NSObject, UIView;

@interface TFNTooltipTarget : NSObject

@property (readonly, nonatomic) UIView *targetView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } targetRect;

/* class methods */
+ (id)targetWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inView:(id)view;
+ (id)targetWithPoint:(struct CGPoint { double x0; double x1; })point inView:(id)view;
+ (id)targetWithView:(id)view;
+ (id)targetWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
+ (id)targetWithPoint:(struct CGPoint { double x0; double x1; })point;

/* instance methods */
- (id)initWithTargetView:(id)view targetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })targetRectInView:(id)view positionOffset:(struct CGPoint { double x0; double x1; })offset;

@end

#endif /* TFNTooltipTarget_h */
