//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC9XCashTags28CashTagChartErrorOrEmptyView_h
#define _TtC9XCashTags28CashTagChartErrorOrEmptyView_h
@import Foundation;

@class UIView, XCashTags.CashTagChartErrorOrEmptyMode, XCashTags.CashTagChartErrorOrEmptyViewDelegate ?, _$sSo7UILabelCSg, _$sSo9TFNButtonCSg;

@interface XCashTags.CashTagChartErrorOrEmptyView : UIView { // (Swift)
    /* instance variables */
    XCashTags.CashTagChartErrorOrEmptyViewDelegate ? delegate;
    XCashTags.CashTagChartErrorOrEmptyMode mode;
    __C.UILabel? $__lazy_storage_$_messageLabel;
    __C.TFNButton? $__lazy_storage_$_retryButton;
}

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)didTapRetry;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC9XCashTags28CashTagChartErrorOrEmptyView_h */
