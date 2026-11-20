//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNGradientView_h
#define TFNGradientView_h
@import Foundation;

@class CAGradientLayer, UIView;

@interface TFNGradientView : UIView

@property (readonly, nonatomic) CAGradientLayer *gradientLayer;

/* class methods */
+ (Class)layerClass;

@end

#endif /* TFNGradientView_h */
