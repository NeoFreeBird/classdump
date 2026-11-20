//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC9XSettings10StepSlider_h
#define _TtC9XSettings10StepSlider_h
@import Foundation;

@class UISlider, _$sySicSg;

@interface XSettings.StepSlider : UISlider { // (Swift)
    /* instance variables */
    ((Swift.Int) -> ())? onAccessibilityStep;
}

@property (nonatomic, readonly) _Bool tfn_navigationControllerBackGestureEnabled;

/* instance methods */
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (_Bool)tfn_isAppGestureEnabled:(unsigned long long)enabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC9XSettings10StepSlider_h */
