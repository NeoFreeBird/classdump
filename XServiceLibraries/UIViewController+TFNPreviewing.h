//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
