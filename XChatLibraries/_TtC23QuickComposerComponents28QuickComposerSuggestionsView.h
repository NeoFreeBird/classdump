//
#ifndef _TtC23QuickComposerComponents28QuickComposerSuggestionsView_h
#define _TtC23QuickComposerComponents28QuickComposerSuggestionsView_h
@import Foundation;

@class QuickComposerComponents.QuickComposerComponentsAppearance, QuickComposerComponents.QuickComposerComponentsMetrics, QuickComposerComponents.QuickComposerSuggestion _$scSg ->, QuickComposerComponents.QuickComposerSuggestionFonts, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSa -> QuickComposerComponents.QuickComposerSuggestionRowView, _$sSiSg, _$sSo25UIImpactFeedbackGeneratorC, _$sSo6UIViewCSg QuickComposerComponents.QuickComposerSuggestion _$scSg, _$syycSg;

@interface QuickComposerComponents.QuickComposerSuggestionsView : UIView { // (Swift)
    /* instance variables */
    QuickComposerComponents.QuickComposerSuggestion _$scSg -> onCommit;
    (() -> ())? onEscape;
    __C.UIView? QuickComposerComponents.QuickComposerSuggestion _$scSg makeAvatarView;
    Swift.Array -> QuickComposerComponents.QuickComposerSuggestionRowView rows;
    Swift.Int? highlightedIndex;
    nominal type descriptor for CoreGraphics.CGFloat rowHeight;
    QuickComposerComponents.QuickComposerComponentsAppearance appearance;
    QuickComposerComponents.QuickComposerComponentsMetrics metrics;
    QuickComposerComponents.QuickComposerSuggestionFonts fonts;
    __C.UIImpactFeedbackGenerator haptics;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC23QuickComposerComponents28QuickComposerSuggestionsView_h */
