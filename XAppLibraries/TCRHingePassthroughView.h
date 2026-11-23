//
#ifndef TCRHingePassthroughView_h
#define TCRHingePassthroughView_h
@import Foundation;

@class UIView;

@interface TCRHingePassthroughView : UIView

@property (weak, nonatomic) UIView *pane;
@property (weak, nonatomic) UIView *underlyingView;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;

@end

#endif /* TCRHingePassthroughView_h */
