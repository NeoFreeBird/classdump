//
#ifndef _TtC23TwitterProfileModulesUI20HighlightableControl_h
#define _TtC23TwitterProfileModulesUI20HighlightableControl_h
@import Foundation;

@class UIControl;

@interface TwitterProfileModulesUI.HighlightableControl : UIControl // (Swift)

/* instance methods */
- (_Bool)beginTrackingWithTouch:(id)touch withEvent:(id)event;
- (_Bool)continueTrackingWithTouch:(id)touch withEvent:(id)event;
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;
- (void)cancelTrackingWithEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC23TwitterProfileModulesUI20HighlightableControl_h */
