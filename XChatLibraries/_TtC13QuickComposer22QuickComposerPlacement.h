//
#ifndef _TtC13QuickComposer22QuickComposerPlacement_h
#define _TtC13QuickComposer22QuickComposerPlacement_h
@import Foundation;

@class QuickComposer.HostedResting ?, QuickComposer.QuickComposerChromeDimView, QuickComposer.QuickComposerKeyboardTiming ?, QuickComposer.QuickComposerKeyboardTrackerView, QuickComposer.QuickComposerMetrics, QuickComposer.QuickComposerPlacement.PageDim ?, QuickComposer.QuickComposerView, Swift.Bool, _$s12CoreGraphics7CGFloatVMn, _$s12CoreGraphics7CGFloatVMn ?, _$sSaySo18NSLayoutConstraintCG, _$sSaySo8NSObject_pG, _$sSd6endsAt_ __C.AnimationOptions optionstSg, _$sSi, _$sSo18NSLayoutConstraintCSg, _$sSo6UIViewC, _$sSo6UIViewCSgXw, _$sySbcSg, _$syycSg, _TtCs12_SwiftObject, __C.CGRect, __C.CGRect _$scSg ->;

@interface QuickComposer.QuickComposerPlacement : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.CGRect _$scSg -> onFrameChange;
    ((Swift.Bool) -> ())? onBarHierarchyWillChange;
    ((Swift.Bool) -> ())? onBarHierarchyChange;
    (() -> ())? onDimTap;
    QuickComposer.QuickComposerView bar;
    weak __C.UIView? container;
    QuickComposer.QuickComposerMetrics metrics;
    __C.CGRect restingFrame;
    weak __C.UIView? slot;
    Swift.Bool isBarInSlot;
    Swift.Bool isAttached;
    Swift.Bool isMovingBar;
    __C.NSLayoutConstraint? heightConstraint;
    __C.NSLayoutConstraint? keyboardPin;
    __C.NSLayoutConstraint? headerClamp;
    __C.NSLayoutConstraint? leadingConstraint;
    __C.NSLayoutConstraint? trailingConstraint;
    __C.NSLayoutConstraint? hostedBottomPin;
    [__C.NSLayoutConstraint] constraints;
    [__C.NSLayoutConstraint] barConstraints;
    weak __C.UIView? home;
    Swift.Int settleGeneration;
    QuickComposer.QuickComposerKeyboardTrackerView tracker;
    __C.CGRect lastReportedFrame;
    nominal type descriptor for CoreGraphics.CGFloat fullKeyboardExposure;
    nominal type descriptor for CoreGraphics.CGFloat ? lastKeyboardTopInWindow;
    [__C.NSObject] observers;
    QuickComposer.QuickComposerKeyboardTiming ? pendingReleaseTiming;
    Swift.Bool hasResolvedInitialKeyboardState;
    [__C.NSLayoutConstraint] restingConstraints;
    Swift.Bool restsOnContainerBottom;
    nominal type descriptor for CoreGraphics.CGFloat restingAnchorOffset;
    Swift.Bool widensOverKeyboard;
    nominal type descriptor for CoreGraphics.CGFloat keyboardCoversExtent;
    nominal type descriptor for CoreGraphics.CGFloat measuredContainerHeight;
    nominal type descriptor for CoreGraphics.CGFloat pinnedSideMargin;
    QuickComposer.HostedResting ? hostedResting;
    Swift.DoubleendsAt first-element-marker  __C.AnimationOptions optionstSg settle;
    __C.UIView dimView;
    QuickComposer.QuickComposerChromeDimView chromeDimView;
    [__C.NSLayoutConstraint] dimConstraints;
    QuickComposer.QuickComposerPlacement.PageDim ? appliedDim;
}

@end

#endif /* _TtC13QuickComposer22QuickComposerPlacement_h */
