//
#ifndef _TtC6ChatUI17PassthroughWindow_h
#define _TtC6ChatUI17PassthroughWindow_h
@import Foundation;

@class UIWindow;

@interface ChatUI.PassthroughWindow : UIWindow // (Swift)

/* instance methods */
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)initWithWindowScene:(id)scene;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC6ChatUI17PassthroughWindow_h */
