//
#ifndef _TtC9XCashTags22CashTagFullContentView_h
#define _TtC9XCashTags22CashTagFullContentView_h
@import Foundation;

@class Swift.Bool, UIView, XCashTags.CashTagAssetData ?, XCashTags.CashTagAssetView ?, XCashTags.CashTagChartView, XCashTags.CashTagContentViewDelegate ?, XCashTags.CashTagTradeView ?, _$s12CoreGraphics7CGFloatVMn;

@interface XCashTags.CashTagFullContentView : UIView { // (Swift)
    /* instance variables */
    XCashTags.CashTagContentViewDelegate ? contentDelegate;
    Swift.Bool supportsOhlc;
    Swift.Bool isActive;
    Swift.Bool contractAddressTapEnabled;
    nominal type descriptor for CoreGraphics.CGFloat topPadding;
    XCashTags.CashTagAssetData ? currentAssetData;
    Swift.Bool didScribeChartInspect;
    XCashTags.CashTagAssetView ? $__lazy_storage_$_assetView;
    XCashTags.CashTagChartView chartView;
    XCashTags.CashTagTradeView ? tradeView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)safeAreaInsetsDidChange;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC9XCashTags22CashTagFullContentView_h */
