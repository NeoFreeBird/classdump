//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
