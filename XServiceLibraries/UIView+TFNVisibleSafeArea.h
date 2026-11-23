//
#ifndef UIView_TFNVisibleSafeArea_h
#define UIView_TFNVisibleSafeArea_h
@import Foundation;

@interface UIView (TFNVisibleSafeArea)

/* class methods */
+ (void)load;

/* instance methods */
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })tfn_visibleSafeAreaInsets;
- (id)tfn_visibleSafeAreaLayoutGuide;

@end

#endif /* UIView_TFNVisibleSafeArea_h */
