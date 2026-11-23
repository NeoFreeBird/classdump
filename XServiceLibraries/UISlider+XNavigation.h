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
