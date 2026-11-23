//
#ifndef TFNCustomHitTestView_h
#define TFNCustomHitTestView_h
@import Foundation;

@class UIView;

@interface TFNCustomHitTestView : UIView

@property (copy, nonatomic) id /* block */ hitTestBlock;

/* instance methods */
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;

@end

#endif /* TFNCustomHitTestView_h */
