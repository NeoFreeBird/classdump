//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC9XCashTags19CashTagTradeControl_h
#define _TtC9XCashTags19CashTagTradeControl_h
@import Foundation;

@class UIControl, XCashTags.CashTagTradeAffordance, XCashTags.CashTagTradePlatformFacepile ?, _$sSo11UIStackViewC, _$sSo7UILabelC;

@interface XCashTags.CashTagTradeControl : UIControl { // (Swift)
    /* instance variables */
    XCashTags.CashTagTradeAffordance trade;
    XCashTags.CashTagTradePlatformFacepile ? facepile;
    __C.UILabel titleLabel;
    __C.UIStackView contentStack;
}

@property (nonatomic) _Bool highlighted;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)didTap;
- (_Bool)isHighlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC9XCashTags19CashTagTradeControl_h */
