//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIView_TFNRightToLeftTransform_h
#define UIView_TFNRightToLeftTransform_h
@import Foundation;

@interface UIView (TFNRightToLeftTransform)

/* class methods */
+ (void)tfn_activateRightToLeftTransformSystem;
+ (void)tfn_deactivateRightToLeftTransformSystem;
+ (_Bool)tfn_isRightToLeftTransformSystemActive;
+ (_Bool)tfn_defaultShouldFlipForRightToLeftTransform;
+ (void)tfn_dispatchInversionMonitorForApplication:(id)application withExceptionBlock:(id /* block */)block;

/* instance methods */
- (_Bool)tfn_applyRightToLeftTransform;
- (void)setTfn_applyRightToLeftTransform:(_Bool)transform;
- (_Bool)tfn_shouldFlipForRightToLeftTransform;
- (_Bool)tfn_shouldFlipForRightToLeftTransformIsExplicitlySet;
- (void)setTfn_shouldFlipForRightToLeftTransform:(_Bool)transform;
- (_Bool)tfn_isFlippedForRightToLeftTransform;
- (id)tfn_rightToLeftTransformDebugString;
- (void)tfn_useAutoLayoutWithSemanticContentAttributeForRightToLeftTransform;

@end

#endif /* UIView_TFNRightToLeftTransform_h */
