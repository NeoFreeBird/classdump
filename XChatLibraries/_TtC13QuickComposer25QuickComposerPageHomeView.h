//
#ifndef _TtC13QuickComposer25QuickComposerPageHomeView_h
#define _TtC13QuickComposer25QuickComposerPageHomeView_h
@import Foundation;

@class QuickComposer.QuickComposerPageAppearanceObserver, UIView, _$syycSg;

@interface QuickComposer.QuickComposerPageHomeView : UIView { // (Swift)
    /* instance variables */
    (() -> ())? onWindowChange;
    QuickComposer.QuickComposerPageAppearanceObserver appearanceObserver;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)didMoveToWindow;

@end

#endif /* _TtC13QuickComposer25QuickComposerPageHomeView_h */
