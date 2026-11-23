//
#ifndef UIView_XDesignSystem_h
#define UIView_XDesignSystem_h
@import Foundation;

@interface UIView (XDesignSystem)

/* instance methods */
- (void)addUniformBlurWithRadius:(double)radius color:(id)color colorAlpha:(double)alpha cornerRadius:(double)radius;
- (void)addUniformBlurWithRadius:(double)radius color:(id)color colorAlpha:(double)alpha cornerRadius:(double)radius reduceTransparencyEffectStyle:(long long)style;
- (void)setBlurCornerRadius:(double)radius;

@end

#endif /* UIView_XDesignSystem_h */
