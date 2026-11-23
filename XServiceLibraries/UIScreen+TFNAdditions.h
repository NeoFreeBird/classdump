//
#ifndef UIScreen_TFNAdditions_h
#define UIScreen_TFNAdditions_h
@import Foundation;

@interface UIScreen (TFNAdditions)

/* instance methods */
- (double)tfn_displayCornerRadius;
- (id)tfn_screenshot;
- (id)tfn_screenshot:(_Bool)tfn_screenshot;
- (_Bool)tfn_isForceTouchAvailable;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tfn_visibleFrame;

@end

#endif /* UIScreen_TFNAdditions_h */
