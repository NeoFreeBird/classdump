//
#ifndef PTVContainerView_h
#define PTVContainerView_h
@import Foundation;

@class UIView;

@interface PTVContainerView : UIView

/* instance methods */
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;

@end

#endif /* PTVContainerView_h */
