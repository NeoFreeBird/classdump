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
