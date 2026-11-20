//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot27GrokBotShoppingCarouselView_h
#define _TtC11ChatGrokBot27GrokBotShoppingCarouselView_h
@import Foundation;

#include "UIScrollViewDelegate-Protocol.h"

@class Swift.Bool, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSa -> ChatGrokBot.GrokBotShoppingProduct, _$sSa -> ChatGrokBot.GrokBotShoppingTileView, _$sSo12UIScrollViewC, _$sySScSg, _$sySi_SiSo6UIViewCtcSg, _$syycSg;

@interface ChatGrokBot.GrokBotShoppingCarouselView : UIView <UIScrollViewDelegate> { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat leadingInset;
    ((Swift.String) -> ())? onBuy;
    (() -> ())? onMore;
    ((Swift.Int, Swift.Int, __C.UIView) -> ())? onTapProduct;
    __C.UIScrollView scrollView;
    Swift.Bool needsScrollToStart;
    Swift.Array -> ChatGrokBot.GrokBotShoppingProduct products;
    Swift.Array -> ChatGrokBot.GrokBotShoppingTileView tileViews;
}

/* instance methods */
- (void)scrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(struct CGPoint { double x0; double x1; } *)offset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot27GrokBotShoppingCarouselView_h */
