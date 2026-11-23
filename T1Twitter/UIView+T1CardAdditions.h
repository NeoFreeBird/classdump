//
#ifndef UIView_T1CardAdditions_h
#define UIView_T1CardAdditions_h
@import Foundation;

@interface UIView (T1CardAdditions)

/* instance methods */
- (id)t1_immersiveTransitionSnapshotHidingOriginal;
- (struct CGSize { double x0; double x1; })canvasSize;
- (struct CGPoint { double x0; double x1; })pointForEvent:(id)event inView:(id)view;
- (struct CGPoint { double x0; double x1; })pointForGestureRecognizer:(id)recognizer;

@end

#endif /* UIView_T1CardAdditions_h */
