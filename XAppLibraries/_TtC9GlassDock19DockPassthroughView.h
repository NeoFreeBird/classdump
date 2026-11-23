//
#ifndef _TtC9GlassDock19DockPassthroughView_h
#define _TtC9GlassDock19DockPassthroughView_h
@import Foundation;

@class UIView;

@interface GlassDock.DockPassthroughView : UIView // (Swift)

/* instance methods */
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC9GlassDock19DockPassthroughView_h */
