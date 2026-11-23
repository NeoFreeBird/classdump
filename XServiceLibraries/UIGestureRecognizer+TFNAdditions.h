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
