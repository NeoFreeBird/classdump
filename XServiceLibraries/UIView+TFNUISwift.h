//
#ifndef UIView_TFNUISwift_h
#define UIView_TFNUISwift_h
@import Foundation;

@interface UIView (TFNUISwift)

/* instance methods */
- (_Bool)_tfn_requiresZeroSafeArea;
- (void)set_tfn_requiresZeroSafeArea:(_Bool)area;
- (id)_tfn_zeroSafeAreaLayoutGuide;
- (void)set_tfn_zeroSafeAreaLayoutGuide:(id)guide;

@end

#endif /* UIView_TFNUISwift_h */
