//
#ifndef _TtC13XDesignSystem13PasscodeSlots_h
#define _TtC13XDesignSystem13PasscodeSlots_h
@import Foundation;

@class Swift.Bool, UIView, XDesignSystem.LoadingPulseEffect ?, _$s8Dispatch0A8WorkItemCMn ?, _$sSSSg, _$sSa -> XDesignSystem.PasscodeSlots.SlotView, _$sSi, _$sSiSg, _$sSo31UINotificationFeedbackGeneratorC, _$sSo6UIViewC;

@interface XDesignSystem.PasscodeSlots : UIView { // (Swift)
    /* instance variables */
    Swift.String? loadingAccessibilityValue;
    __C.UIView slotsView;
    Swift.Array -> XDesignSystem.PasscodeSlots.SlotView slotViews;
    __C.UINotificationFeedbackGenerator rejectionFeedbackGenerator;
    Swift.Int enteredCount;
    Swift.Bool isLoading;
    Swift.Int? rejectedCount;
    nominal type descriptor for Dispatch.DispatchWorkItem ? rejectionResetItem;
    XDesignSystem.LoadingPulseEffect ? $__lazy_storage_$_loadingPulseEffect;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC13XDesignSystem13PasscodeSlots_h */
