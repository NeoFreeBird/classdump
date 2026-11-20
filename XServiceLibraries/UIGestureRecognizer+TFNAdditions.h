//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIGestureRecognizer_TFNAdditions_h
#define UIGestureRecognizer_TFNAdditions_h
@import Foundation;

@interface UIGestureRecognizer (TFNAdditions)

/* instance methods */
- (void)tfn_cancelGesture;
- (void)tfn_cancelSubviewGestureRecognizersPassingTest:(id /* block */)test;
- (void)tfn_cleanupGesture;

@end

#endif /* UIGestureRecognizer_TFNAdditions_h */
