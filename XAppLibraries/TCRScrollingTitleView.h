//
#ifndef TCRScrollingTitleView_h
#define TCRScrollingTitleView_h
@import Foundation;

#include "TCRScrollingTitleViewDataSource-Protocol.h"

@class NSArray, UIColor, UIFont, UIScrollView, UIView;

@interface TCRScrollingTitleView : UIView

@property (retain, nonatomic) UIScrollView *titleScrollView;
@property (readonly, nonatomic) NSArray *titleViews;
@property (nonatomic) struct CGPoint { double x0; double x1; } contentOffset;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIFont *subtitleFont;
@property (nonatomic) _Bool compactMode;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *subtitleColor;
@property (weak, nonatomic) id <TCRScrollingTitleViewDataSource> dataSource;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)_layoutTitleViewSubviews:(id)subviews;
- (void)reloadData;
- (id)_viewForTitleTuple:(id)tuple;
- (double)_maxOffsetY;
- (long long)_indexForOffset:(double)offset;

@end

#endif /* TCRScrollingTitleView_h */
