//
#ifndef TFNUnboundedContainerView_h
#define TFNUnboundedContainerView_h
@import Foundation;

@class UIView;

@interface TFNUnboundedContainerView : UIView

/* instance methods */
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;

@end

#endif /* TFNUnboundedContainerView_h */
