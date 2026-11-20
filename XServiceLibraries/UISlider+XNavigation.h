//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UISlider_XNavigation_h
#define UISlider_XNavigation_h
@import Foundation;

@interface UISlider (XNavigation)

/* class methods */
+ (_Bool)tfn_defaultShouldFlipForRightToLeftTransform;

/* instance methods */
- (_Bool)tfn_isTappable;
- (void)setTfn_tappable:(_Bool)tfn_tappable;
- (void)_tfn_tapAction:(id)action;
- (_Bool)xnav_ownsHorizontalPans;

@end

#endif /* UISlider_XNavigation_h */
