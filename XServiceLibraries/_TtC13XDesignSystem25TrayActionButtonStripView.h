//
#ifndef _TtC13XDesignSystem25TrayActionButtonStripView_h
#define _TtC13XDesignSystem25TrayActionButtonStripView_h
@import Foundation;

@class Swift.Bool, UIView, XDesignSystem.Button, XDesignSystem.ButtonRow, XDesignSystem.TrayActionButtonStripConfiguration, _$syycSg;

@interface XDesignSystem.TrayActionButtonStripView : UIView { // (Swift)
    /* instance variables */
    XDesignSystem.Button primaryButton;
    XDesignSystem.Button secondaryButton;
    XDesignSystem.ButtonRow buttonRow;
    (() -> ())? onPrimaryButtonPress;
    (() -> ())? onSecondaryButtonPress;
    XDesignSystem.TrayActionButtonStripConfiguration configuration;
    Swift.Bool isSecondaryButtonIconRotating;
    Swift.Bool isLinked;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;

@end

#endif /* _TtC13XDesignSystem25TrayActionButtonStripView_h */
