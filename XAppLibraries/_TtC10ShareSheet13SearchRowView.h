//
#ifndef _TtC10ShareSheet13SearchRowView_h
#define _TtC10ShareSheet13SearchRowView_h
@import Foundation;

@class Swift.Bool, UIView, _$s13XDesignSystem5InputCMn, _$sSo8UIButtonC, _$syycSg;

@interface ShareSheet.SearchRowView : UIView { // (Swift)
    /* instance variables */
    nominal type descriptor for XDesignSystem.Input searchField;
    (() -> ())? onCancel;
    __C.UIButton cancelButton;
    Swift.Bool showsCancelButton;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC10ShareSheet13SearchRowView_h */
