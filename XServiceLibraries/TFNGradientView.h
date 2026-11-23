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
