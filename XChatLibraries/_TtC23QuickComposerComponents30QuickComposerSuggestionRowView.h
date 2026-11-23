//
#ifndef _TtC23QuickComposerComponents30QuickComposerSuggestionRowView_h
#define _TtC23QuickComposerComponents30QuickComposerSuggestionRowView_h
@import Foundation;

@class QuickComposer.QuickComposerPlatter, QuickComposer.QuickComposerPressFeedback ?, QuickComposerComponents.QuickComposerComponentsAppearance, QuickComposerComponents.QuickComposerComponentsMetrics, QuickComposerComponents.QuickComposerSuggestion, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSaySo11UIImageViewCG, _$sSo6UIViewC, _$sSo6UIViewCSg, _$sSo7UILabelC, _$syycSg;

@interface QuickComposerComponents.QuickComposerSuggestionRowView : UIView { // (Swift)
    /* instance variables */
    QuickComposerComponents.QuickComposerSuggestion suggestion;
    QuickComposer.QuickComposerPlatter platter;
    (() -> ())? onActivate;
    (() -> ())? onEscape;
    __C.UIView body;
    __C.UIView highlightView;
    __C.UIView avatarFallback;
    __C.UIView? avatarView;
    __C.UILabel titleLabel;
    __C.UILabel subtitleLabel;
    [__C.UIImageView] badgeViews;
    nominal type descriptor for CoreGraphics.CGFloat titleWidth;
    nominal type descriptor for CoreGraphics.CGFloat subtitleWidth;
    QuickComposerComponents.QuickComposerComponentsAppearance appearance;
    QuickComposerComponents.QuickComposerComponentsMetrics metrics;
    QuickComposer.QuickComposerPressFeedback ? press;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (_Bool)accessibilityActivate;
- (_Bool)accessibilityPerformEscape;
- (void)handleTap;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC23QuickComposerComponents30QuickComposerSuggestionRowView_h */
