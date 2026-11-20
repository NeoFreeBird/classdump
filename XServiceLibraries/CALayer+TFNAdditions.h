//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef CALayer_TFNAdditions_h
#define CALayer_TFNAdditions_h
@import Foundation;

@interface CALayer (TFNAdditions)

/* instance methods */
- (id)tfn_backgroundColor;
- (void)setTfn_backgroundColor:(id)color;
- (id)tfn_borderColor;
- (void)setTfn_borderColor:(id)color;
- (id)tfn_shadowColor;
- (void)setTfn_shadowColor:(id)color;
- (id)dynamicColorView;
- (void)tfn_addAnimation:(id)animation forKey:(id)key completion:(id /* block */)completion;
- (void)tfn_animateKeyPath:(id)path fromValue:(id)value withDuration:(double)duration mediaTimingFunctionName:(id)name;
- (void)tfn_applyFinalStateOfAnimation:(id)animation;
- (void)tfn_pauseAnimation;
- (void)tfn_resumeAnimation;
- (void)tfn_removeAllAnimationsFromLayerHierarchy;

@end

#endif /* CALayer_TFNAdditions_h */
