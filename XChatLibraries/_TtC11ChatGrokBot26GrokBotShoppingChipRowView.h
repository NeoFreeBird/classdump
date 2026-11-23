//
#ifndef _TtC11ChatGrokBot26GrokBotShoppingChipRowView_h
#define _TtC11ChatGrokBot26GrokBotShoppingChipRowView_h
@import Foundation;

#include "UIScrollViewDelegate-Protocol.h"

@class Swift.Bool, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSaySo6UIViewCG, _$sSiSg, _$sSo12UIScrollViewC, _$sSo15CAGradientLayerC;

@interface ChatGrokBot.GrokBotShoppingChipRowView : UIView <UIScrollViewDelegate> { // (Swift)
    /* instance variables */
    __C.CAGradientLayer fadeMaskLayer;
    nominal type descriptor for CoreGraphics.CGFloat gap;
    nominal type descriptor for CoreGraphics.CGFloat inset;
    __C.UIScrollView scrollView;
    [__C.UIView] chipViews;
    Swift.Bool needsReveal;
    Swift.Bool revealsAnimated;
    Swift.Int? revealedIndex;
}

/* instance methods */
- (void)scrollViewDidScroll:(id)scroll;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11ChatGrokBot26GrokBotShoppingChipRowView_h */
