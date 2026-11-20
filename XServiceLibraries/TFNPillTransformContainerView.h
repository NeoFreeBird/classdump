//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNPillTransformContainerView_h
#define TFNPillTransformContainerView_h
@import Foundation;

@class UIView;

@interface TFNPillTransformContainerView : UIView

/* instance methods */
- (id)actionForLayer:(id)layer forKey:(id)key;
- (_Bool)tfn_isAppGestureEnabled:(unsigned long long)enabled;

@end

#endif /* TFNPillTransformContainerView_h */
