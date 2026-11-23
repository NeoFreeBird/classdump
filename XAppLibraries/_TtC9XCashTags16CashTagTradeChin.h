//
#ifndef _TtC9XCashTags16CashTagTradeChin_h
#define _TtC9XCashTags16CashTagTradeChin_h
@import Foundation;

@class Swift.Bool, UIControl, XCashTags.CashTagTradeAffordance, XCashTags.CashTagTradePlatformFacepile ?, _$sSo6UIViewC, _$sSo7UILabelC;

@interface XCashTags.CashTagTradeChin : UIControl { // (Swift)
    /* instance variables */
    XCashTags.CashTagTradeAffordance trade;
    Swift.Bool isHostContentReady;
    XCashTags.CashTagTradePlatformFacepile ? facepile;
    __C.UIView contentView;
    __C.UILabel titleLabel;
    __C.UILabel sponsoredLabel;
}

@property (nonatomic) _Bool highlighted;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)didTap;
- (_Bool)isHighlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC9XCashTags16CashTagTradeChin_h */
