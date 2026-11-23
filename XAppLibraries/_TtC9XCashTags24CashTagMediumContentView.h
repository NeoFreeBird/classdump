//
#ifndef _TtC9XCashTags24CashTagMediumContentView_h
#define _TtC9XCashTags24CashTagMediumContentView_h
@import Foundation;

@class Swift.Bool, UIView, XCashTags.CashTagAssetData ?, XCashTags.CashTagAssetView ?, XCashTags.CashTagChartView, XCashTags.CashTagContentViewDelegate ?, XCashTags.CashTagTradeChin ?;

@interface XCashTags.CashTagMediumContentView : UIView { // (Swift)
    /* instance variables */
    XCashTags.CashTagContentViewDelegate ? contentDelegate;
    Swift.Bool isActive;
    Swift.Bool contractAddressTapEnabled;
    XCashTags.CashTagAssetData ? currentAssetData;
    Swift.Bool didScribeChartInspect;
    XCashTags.CashTagAssetView ? $__lazy_storage_$_assetView;
    XCashTags.CashTagChartView chartView;
    XCashTags.CashTagTradeChin ? tradeChin;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC9XCashTags24CashTagMediumContentView_h */
