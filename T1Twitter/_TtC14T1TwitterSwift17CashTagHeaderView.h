//
#ifndef _TtC14T1TwitterSwift17CashTagHeaderView_h
#define _TtC14T1TwitterSwift17CashTagHeaderView_h
@import Foundation;

#include "T1ResizableHeaderView.h"

@class T1TwitterSwift.CashTagView ?, _$sSo7CALayerC;

@interface T1TwitterSwift.CashTagHeaderView : T1ResizableHeaderView { // (Swift)
    /* instance variables */
    T1TwitterSwift.CashTagView ? cashTagView;
    __C.CALayer bottomSeparatorLayer;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)traitCollectionDidChange:(id)change;
- (double)resizableHeaderBannerMinimumHeight;
- (double)headerBannerHeightForWidth:(double)width bannerAspectRatio:(double)ratio;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;

@end

#endif /* _TtC14T1TwitterSwift17CashTagHeaderView_h */
