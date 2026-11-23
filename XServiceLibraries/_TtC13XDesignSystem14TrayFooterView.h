//
#ifndef _TtC13XDesignSystem14TrayFooterView_h
#define _TtC13XDesignSystem14TrayFooterView_h
@import Foundation;

@class Swift.Bool, UIView, XDesignSystem.TrayActionButtonStripView, XDesignSystem.TrayFooterView.Slot, XDesignSystem.TrayHeaderBackdropView;

@interface XDesignSystem.TrayFooterView : UIView { // (Swift)
    /* instance variables */
    XDesignSystem.TrayActionButtonStripView stripView;
    XDesignSystem.TrayHeaderBackdropView backdropView;
    XDesignSystem.TrayFooterView.Slot noteSlot;
    XDesignSystem.TrayFooterView.Slot footnoteSlot;
    Swift.Bool isLinked;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;

@end

#endif /* _TtC13XDesignSystem14TrayFooterView_h */
