//
#ifndef UIViewController_TFNPreviewing_h
#define UIViewController_TFNPreviewing_h
@import Foundation;

@interface UIViewController (TFNPreviewing)

/* instance methods */
- (long long)tfn_previewingState;
- (void)tfn_previewingStateDidChange;
- (long long)tfn_previewingGestureRecognizerState;

@end

#endif /* UIViewController_TFNPreviewing_h */
