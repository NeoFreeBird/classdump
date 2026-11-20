//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNCircularAvatarShadowLayer_h
#define TFNCircularAvatarShadowLayer_h
@import Foundation;

@class CALayer;

@interface TFNCircularAvatarShadowLayer : CALayer

/* class methods */
+ (id)useGradientLayerShadowsFeatureSwitch;
+ (void)setUseGradientLayerShadowsBlock:(id /* block */)block;
+ (_Bool)useGradientLayerShadows;
+ (id)shadowLayer;
+ (id)shadowLayerWithTraitCollection:(id)collection;

/* instance methods */
- (id)init;
- (id)initWithTraitCollection:(id)collection;
- (void)drawInContext:(struct CGContext *)context;
- (void)_updateShadowInContext:(struct CGContext *)context;

@end

#endif /* TFNCircularAvatarShadowLayer_h */
