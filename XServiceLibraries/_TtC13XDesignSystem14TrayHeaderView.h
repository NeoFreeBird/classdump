//
#ifndef _TtC13XDesignSystem14TrayHeaderView_h
#define _TtC13XDesignSystem14TrayHeaderView_h
@import Foundation;

@class NSArray, UIView, XDesignSystem.TrayHeaderConfiguration, XDesignSystem.TrayHeroBorderView, XDesignSystem.TrayIconButton, XDesignSystem.TrayInterruptibleTransition, _$s12CoreGraphics7CGFloatVMn, _$sSaySo6UIViewCG, _$sSo11UIImageViewC, _$sSo6UIViewC, _$sSo6UIViewCSgXw, _$sSo7UILabelC, _$syycSg;

@interface XDesignSystem.TrayHeaderView : UIView { // (Swift)
    /* instance variables */
    XDesignSystem.TrayIconButton leadingButton;
    XDesignSystem.TrayIconButton trailingButton;
    __C.UIView separatorView;
    __C.UIView contentView;
    __C.UILabel titleLabel;
    __C.UIImageView iconView;
    XDesignSystem.TrayHeroBorderView heroBorderView;
    weak __C.UIView? heroView;
    weak __C.UIView? accessoryView;
    (() -> ())? onLeadingButtonTap;
    (() -> ())? onTrailingButtonTap;
    XDesignSystem.TrayHeaderConfiguration configuration;
    nominal type descriptor for CoreGraphics.CGFloat displayedHorizontalPadding;
    nominal type descriptor for CoreGraphics.CGFloat swipeUpExpansionContentInset;
    [__C.UIView] morphReplicas;
    XDesignSystem.TrayInterruptibleTransition applyTransition;
}

@property (nonatomic, copy) NSArray *accessibilityElements;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;

@end

#endif /* _TtC13XDesignSystem14TrayHeaderView_h */
