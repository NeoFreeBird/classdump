//
#ifndef _TtC11XNavigation25TabBarChromeContainerView_h
#define _TtC11XNavigation25TabBarChromeContainerView_h
@import Foundation;

@class Swift.Bool, UIView, _$syycSg;

@interface XNavigation.TabBarChromeContainerView : UIView { // (Swift)
    /* instance variables */
    Swift.Bool swallowsTouchesBelowBarTop;
    (() -> ())? onWindowChange;
}

/* instance methods */
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC11XNavigation25TabBarChromeContainerView_h */
