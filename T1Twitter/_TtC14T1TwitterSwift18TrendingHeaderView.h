//
#ifndef _TtC14T1TwitterSwift18TrendingHeaderView_h
#define _TtC14T1TwitterSwift18TrendingHeaderView_h
@import Foundation;

#include "T1ResizableHeaderView.h"

@class Swift.Bool, T1TwitterSwift.TrendingHeaderCollapsedContentView ?, T1TwitterSwift.TrendingHeaderContentView ?, T1TwitterSwift.TrendingHeaderView.ViewModel, __C.CGSize;

@interface T1TwitterSwift.TrendingHeaderView : T1ResizableHeaderView { // (Swift)
    /* instance variables */
    T1TwitterSwift.TrendingHeaderView.ViewModel viewModel;
    Swift.Bool showsOwnNavigationChrome;
    __C.CGSize preferredContentViewSize;
    T1TwitterSwift.TrendingHeaderContentView ? $__lazy_storage_$_contentView;
    T1TwitterSwift.TrendingHeaderCollapsedContentView ? $__lazy_storage_$_collapsedContentView;
}

@property (nonatomic) _Bool shouldSimulateStatusBar;
@property (nonatomic, readonly) double bannerBlurPercent;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)dynamicColorsDidReload;
- (void)recalculatePreferredSize;
- (double)resizableHeaderBannerMinimumHeight;
- (double)headerBannerHeightForWidth:(double)width bannerAspectRatio:(double)ratio;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;

@end

#endif /* _TtC14T1TwitterSwift18TrendingHeaderView_h */
