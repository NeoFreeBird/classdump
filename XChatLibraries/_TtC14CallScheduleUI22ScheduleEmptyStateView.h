//
#ifndef _TtC14CallScheduleUI22ScheduleEmptyStateView_h
#define _TtC14CallScheduleUI22ScheduleEmptyStateView_h
@import Foundation;

@class CallScheduleUI.ScheduleEmptyStateView.State, UIView, _$s13XDesignSystem6ButtonCMn, _$sSo11UIImageViewC, _$sSo11UIStackViewC, _$sSo7UILabelC, _$syycSg;

@interface CallScheduleUI.ScheduleEmptyStateView : UIView { // (Swift)
    /* instance variables */
    (() -> ())? onRetry;
    __C.UIImageView iconView;
    __C.UILabel titleLabel;
    __C.UILabel messageLabel;
    nominal type descriptor for XDesignSystem.Button retryButton;
    __C.UIStackView stackView;
    CallScheduleUI.ScheduleEmptyStateView.State state;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)handleRetry;

@end

#endif /* _TtC14CallScheduleUI22ScheduleEmptyStateView_h */
