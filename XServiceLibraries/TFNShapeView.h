//
#ifndef TFNShapeView_h
#define TFNShapeView_h
@import Foundation;

@class CAShapeLayer, UIView;

@interface TFNShapeView : UIView

@property (readonly, nonatomic) CAShapeLayer *shapeLayer;

/* class methods */
+ (Class)layerClass;

@end

#endif /* TFNShapeView_h */
