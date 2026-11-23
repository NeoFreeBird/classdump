//
#ifndef PTVShapeView_h
#define PTVShapeView_h
@import Foundation;

@class CAShapeLayer, UIBezierPath, UIColor, UIView;

@interface PTVShapeView : UIView

@property (readonly, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) UIBezierPath *path;
@property (retain, nonatomic) UIColor *fillColor;
@property (retain, nonatomic) UIColor *strokeColor;

/* class methods */
+ (Class)layerClass;

@end

#endif /* PTVShapeView_h */
