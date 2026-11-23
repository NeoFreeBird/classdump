//
#ifndef _TtC14T1TwitterSwift25RelevancePromptInlineView_h
#define _TtC14T1TwitterSwift25RelevancePromptInlineView_h
@import Foundation;

@class T1TwitterSwift.RelevancePromptPillButton, T1TwitterSwift.RelevancePromptView.ViewModel ?, UIView, _$sSo12CAShapeLayerC, _$sSo7UILabelC, _$syycSg;

@interface T1TwitterSwift.RelevancePromptInlineView : UIView { // (Swift)
    /* instance variables */
    __C.CAShapeLayer barFillLayer;
    __C.CAShapeLayer outlineLayer;
    __C.UILabel titleLabel;
    __C.UILabel confirmationLabel;
    T1TwitterSwift.RelevancePromptPillButton notRelevantButton;
    T1TwitterSwift.RelevancePromptPillButton isRelevantButton;
    (() -> ())? heightChanged;
    T1TwitterSwift.RelevancePromptView.ViewModel ? viewModel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (void)responseStateDidUpdate;
- (void)didTapNotRelevantButton;
- (void)didTapIsRelevantButton;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;

@end

#endif /* _TtC14T1TwitterSwift25RelevancePromptInlineView_h */
