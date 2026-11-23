//
#ifndef T1LiveEventHeaderView_h
#define T1LiveEventHeaderView_h
@import Foundation;

#include "T1ResizableHeaderView.h"

@class TFNGradientView, TFNPullToRefreshControl, TFNSolidColorView, TFNTitleView, UITapGestureRecognizer;

@interface T1LiveEventHeaderView : T1ResizableHeaderView

@property (readonly, nonatomic) double pullToRefreshControlOffset;
@property (retain, nonatomic) TFNTitleView *navigationBarTitleView;
@property (nonatomic) _Bool previewing;
@property (nonatomic) _Bool contentEmpty;
@property (readonly, nonatomic) double contentTopMargin;
@property (readonly, nonatomic) TFNPullToRefreshControl *customPullToLoadTopControl;
@property (readonly, nonatomic) _Bool useCustomNavigationBar;
@property (readonly, nonatomic) TFNSolidColorView *customNavigationBarSeparatorLine;
@property (readonly, nonatomic) TFNGradientView *statusBarGradientView;
@property (nonatomic) _Bool navigationBarHidden;
@property (readonly, nonatomic) _Bool headerLockingEnabled;
@property (retain, nonatomic) UITapGestureRecognizer *navigationBarExpandTapGestureRecognizer;
@property (readonly, nonatomic) _Bool headerSubtitleBlue;
@property (readonly, nonatomic) _Bool headerSubtitleTapToExpandShown;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame useCustomNavigationBar:(_Bool)bar isHeaderLockingEnabled:(_Bool)enabled isHeaderSubtitleBlue:(_Bool)blue isHeaderSubtitleTapToExpandShown:(_Bool)shown;
- (void)setContainerNavigationBarTitle:(id)title;
- (void)addSubview:(id)subview;
- (double)preferredHeightForWidth:(double)width traitCollection:(id)collection;
- (void)layoutSubviews;
- (id)bannerOverlayGradient;
- (double)bannerAspectRatioForTraitCollection:(id)collection;
- (double)headerBannerHeightForWidth:(double)width bannerAspectRatio:(double)ratio;
- (void)_t1_configureUI;
- (void)_t1_configureNavigationBarTitleView;
- (void)didPullToLoadTop;
- (double)_t1_pullToRefreshControlOffset;
- (_Bool)isPreviewing;
- (_Bool)isContentEmpty;
- (_Bool)isNavigationBarHidden;
- (_Bool)isHeaderLockingEnabled;
- (_Bool)isHeaderSubtitleBlue;
- (_Bool)isHeaderSubtitleTapToExpandShown;

@end

#endif /* T1LiveEventHeaderView_h */
