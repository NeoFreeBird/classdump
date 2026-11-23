//
#ifndef _TtC13XDesignSystem4Pill_h
#define _TtC13XDesignSystem4Pill_h
@import Foundation;

@class UIView, XDesignSystem.Pill.Configuration, _$sSo11UIImageViewC, _$sSo11UIStackViewC, _$sSo18NSLayoutConstraintCSg, _$sSo7UILabelC;

@interface XDesignSystem.Pill : UIView { // (Swift)
    /* instance variables */
    XDesignSystem.Pill.Configuration configuration;
    __C.UIStackView stack;
    __C.UIImageView iconView;
    __C.UILabel titleLabel;
    __C.NSLayoutConstraint? $__lazy_storage_$_iconWidthConstraint;
    __C.NSLayoutConstraint? $__lazy_storage_$_iconHeightConstraint;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, readonly) UIView *viewForFirstBaselineLayout;
@property (nonatomic, readonly) UIView *viewForLastBaselineLayout;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)textSizeDidChange;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC13XDesignSystem4Pill_h */
