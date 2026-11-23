//
#ifndef _TtC13QuickComposer21QuickComposerSlotView_h
#define _TtC13QuickComposer21QuickComposerSlotView_h
@import Foundation;

@class Swift.Bool, UIView, _$s12CoreGraphics7CGFloatVMn, _$sySbcSg, _$syycSg;

@interface QuickComposer.QuickComposerSlotView : UIView { // (Swift)
    /* instance variables */
    (() -> ())? onFrameUpdate;
    (() -> ())? onWindowChange;
    nominal type descriptor for CoreGraphics.CGFloat compactProgress;
    ((Swift.Bool) -> ())? onCollapseHidingUpdate;
    (() -> ())? onArrival;
    Swift.Bool isCollapsed;
    Swift.Bool hidesWhenCollapsed;
    Swift.Bool isArriving;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC13QuickComposer21QuickComposerSlotView_h */
