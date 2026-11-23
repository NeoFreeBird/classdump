//
#ifndef _TtC23QuickComposerComponents21QuickComposerChipView_h
#define _TtC23QuickComposerComponents21QuickComposerChipView_h
@import Foundation;

@class QuickComposerComponents.QuickComposerBadgeView, QuickComposerComponents.QuickComposerChipStyle, QuickComposerComponents.QuickComposerComponentsAppearance, QuickComposerComponents.QuickComposerComponentsMetrics, Swift.Bool, UIView, _$sSS, _$sSo12CAShapeLayerC, _$sSo6UIViewC, _$sSo7UILabelC, _$syycSg;

@interface QuickComposerComponents.QuickComposerChipView : UIView { // (Swift)
    /* instance variables */
    Swift.String id;
    __C.UIView avatarView;
    __C.UILabel handleLabel;
    QuickComposerComponents.QuickComposerChipStyle style;
    (() -> ())? onActivate;
    __C.CAShapeLayer ring;
    QuickComposerComponents.QuickComposerBadgeView badgeView;
    QuickComposerComponents.QuickComposerComponentsAppearance appearance;
    QuickComposerComponents.QuickComposerComponentsMetrics metrics;
    Swift.Bool isPressed;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (_Bool)accessibilityActivate;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC23QuickComposerComponents21QuickComposerChipView_h */
