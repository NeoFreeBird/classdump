//
#ifndef _TtC23QuickComposerComponents24QuickComposerChipFanView_h
#define _TtC23QuickComposerComponents24QuickComposerChipFanView_h
@import Foundation;

#include "UIScrollViewDelegate-Protocol.h"

@class QuickComposer.QuickComposerPlatter, QuickComposerComponents.QuickComposerChipScrubGestureRecognizer, QuickComposerComponents.QuickComposerChipView ?, QuickComposerComponents.QuickComposerChipView _$scSg ->, QuickComposerComponents.QuickComposerComponentsAppearance, QuickComposerComponents.QuickComposerComponentsMetrics, QuickComposerComponents.QuickComposerGradientMaskView, Swift.Bool, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSa -> QuickComposerComponents.QuickComposerChipView, _$sSo12UIScrollViewC, _$sSo25UIImpactFeedbackGeneratorC, _$sSo28UISelectionFeedbackGeneratorC, _$sSo31UINotificationFeedbackGeneratorC, _$sSo6UIViewC, _$syycSg;

@interface QuickComposerComponents.QuickComposerChipFanView : UIView <UIScrollViewDelegate> { // (Swift)
    /* instance variables */
    QuickComposer.QuickComposerPlatter platter;
    Swift.Array -> QuickComposerComponents.QuickComposerChipView chips;
    QuickComposerComponents.QuickComposerChipView _$scSg -> onCommit;
    (() -> ())? onEscape;
    nominal type descriptor for CoreGraphics.CGFloat itemWidth;
    nominal type descriptor for CoreGraphics.CGFloat cardWidth;
    Swift.Bool isScrollable;
    nominal type descriptor for CoreGraphics.CGFloat anchorX;
    QuickComposerComponents.QuickComposerComponentsAppearance appearance;
    QuickComposerComponents.QuickComposerComponentsMetrics metrics;
    __C.UIView contentContainer;
    __C.UIView fadeContainer;
    QuickComposerComponents.QuickComposerGradientMaskView fadeMask;
    __C.UIScrollView scrollView;
    QuickComposerComponents.QuickComposerChipScrubGestureRecognizer scrub;
    __C.UISelectionFeedbackGenerator haptics;
    __C.UIImpactFeedbackGenerator commitHaptics;
    __C.UINotificationFeedbackGenerator rejectionHaptics;
    QuickComposerComponents.QuickComposerChipView ? highlightedChip;
}

/* instance methods */
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(struct CGPoint { double x0; double x1; } *)offset;
- (id)initWithCoder:(id)coder;
- (_Bool)accessibilityPerformEscape;
- (void)layoutSubviews;
- (void)handleScrub:(id)scrub;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC23QuickComposerComponents24QuickComposerChipFanView_h */
