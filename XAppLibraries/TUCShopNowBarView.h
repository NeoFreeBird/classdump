//
#ifndef TUCShopNowBarView_h
#define TUCShopNowBarView_h
@import Foundation;

@class UIView;

@interface TUCShopNowBarView : UIView { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 shouldAnimateBackgroundColor;
    @40@0:8:16@24@32 dominantColor;
    @40@0:8:16@24@32 impressionId;
    @40@0:8:16@24@32 hasAnimatedIn;
    @40@0:8:16@24@32 titleLabel;
    @40@0:8:16@24@32 chevronImageView;
    @40@0:8:16@24@32 $__lazy_storage_$_borderLayer;
}

@property (nonatomic, copy) id /* block */ onTap;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame shouldAnimateBackgroundColor:(_Bool)color title:(id)title dominantColor:(id)color impressionId:(id)id;
- (id)initWithCoder:(id)coder;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)animateIn;
- (void)handleTap:(id)tap;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* TUCShopNowBarView_h */
