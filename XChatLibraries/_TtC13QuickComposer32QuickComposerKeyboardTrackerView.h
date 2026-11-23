//
#ifndef _TtC13QuickComposer32QuickComposerKeyboardTrackerView_h
#define _TtC13QuickComposer32QuickComposerKeyboardTrackerView_h
@import Foundation;

@class UIView, _$s12CoreGraphics7CGFloatVMn _$scSg ->, _$syycSg;

@interface QuickComposer.QuickComposerKeyboardTrackerView : UIView { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat _$scSg -> onLayout;
    (() -> ())? onWindowChange;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)didMoveToWindow;

@end

#endif /* _TtC13QuickComposer32QuickComposerKeyboardTrackerView_h */
