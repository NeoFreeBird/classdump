//
#ifndef _TtC9XCashTags16CashTagTradeView_h
#define _TtC9XCashTags16CashTagTradeView_h
@import Foundation;

@class UIView, XCashTags.CashTagTradeAffordance, _$sSo11UIStackViewCSg, _$sSo23UIActivityIndicatorViewCSg, _$sSo6UIViewCSg, _$sSo7UILabelCSg, _$sSo9TFNButtonCSg;

@interface XCashTags.CashTagTradeView : UIView { // (Swift)
    /* instance variables */
    XCashTags.CashTagTradeAffordance trade;
    __C.UIView? leadingArtwork;
    __C.TFNButton? $__lazy_storage_$_tradeButton;
    __C.UILabel? $__lazy_storage_$_titleLabel;
    __C.UIActivityIndicatorView? $__lazy_storage_$_activityIndicator;
    __C.UIStackView? $__lazy_storage_$_contentStack;
    __C.UILabel? $__lazy_storage_$_sponsoredLabel;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)didTapTradeButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC9XCashTags16CashTagTradeView_h */
