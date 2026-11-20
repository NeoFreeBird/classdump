//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC9XCashTags24CashTagMediumContentView_h
#define _TtC9XCashTags24CashTagMediumContentView_h
@import Foundation;

@class Swift.Bool, UIView, XCashTags.CashTagAssetData ?, XCashTags.CashTagAssetView ?, XCashTags.CashTagChartView, XCashTags.CashTagContentViewDelegate ?;

@interface XCashTags.CashTagMediumContentView : UIView { // (Swift)
    /* instance variables */
    XCashTags.CashTagContentViewDelegate ? contentDelegate;
    Swift.Bool isActive;
    Swift.Bool contractAddressTapEnabled;
    XCashTags.CashTagAssetData ? currentAssetData;
    Swift.Bool didScribeChartInspect;
    XCashTags.CashTagAssetView ? $__lazy_storage_$_assetView;
    XCashTags.CashTagChartView chartView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC9XCashTags24CashTagMediumContentView_h */
