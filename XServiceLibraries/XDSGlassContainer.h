//
#ifndef XDSGlassContainer_h
#define XDSGlassContainer_h
@import Foundation;

@class UIView;

@interface XDSGlassContainer : UIView { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 merge;
    B24@0:8@"NSString"16 passesThroughTouchesOutsideContent;
    B24@0:8@"NSString"16 visualEffectView;
    B24@0:8@"NSString"16 hostView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* XDSGlassContainer_h */
