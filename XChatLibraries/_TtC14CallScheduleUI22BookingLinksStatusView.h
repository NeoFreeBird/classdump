//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14CallScheduleUI22BookingLinksStatusView_h
#define _TtC14CallScheduleUI22BookingLinksStatusView_h
@import Foundation;

@class CallScheduleUI.BookingLinksStatusViewListener ?, UIView, _$s13XDesignSystem6ButtonCMn, _$sSo11UIImageViewC, _$sSo11UIStackViewC, _$sSo23UIActivityIndicatorViewC, _$sSo7UILabelC;

@interface CallScheduleUI.BookingLinksStatusView : UIView { // (Swift)
    /* instance variables */
    CallScheduleUI.BookingLinksStatusViewListener ? listener;
    __C.UIActivityIndicatorView activityIndicator;
    nominal type descriptor for XDesignSystem.Button createButton;
    __C.UIImageView iconView;
    __C.UILabel messageLabel;
    nominal type descriptor for XDesignSystem.Button retryButton;
    __C.UIStackView stackView;
    __C.UILabel titleLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)handleCreate;
- (void)handleRetry;

@end

#endif /* _TtC14CallScheduleUI22BookingLinksStatusView_h */
