//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVNavigationBar_h
#define PTVNavigationBar_h
@import Foundation;

#include "PTVExtendedButton.h"
#include "PTVTableViewRefresh-Protocol.h"

@class NSAttributedString, NSDate, NSString, UIControl, UIImageView, UILabel, UIView;
@protocol PTVNavigationBarDelegate;

@interface PTVNavigationBar : UIControl <PTVTableViewRefresh> {
    /* instance variables */
    UIView *_titleView;
    PTVExtendedButton *_leadingButton;
    PTVExtendedButton *_trailingButton;
    PTVExtendedButton *_backButton;
    UIView *_bottomBorder;
    UILabel *_pullToRefreshLabel;
    _Bool _refreshing;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _content_inset;
    UIImageView *_fade;
    NSDate *_start;
    _Bool _canEnd;
    id /* block */ _endBlocks;
    _Bool _darkTheme;
}

@property (retain, nonatomic) UIView *animationBackground;
@property (weak, nonatomic) id <PTVNavigationBarDelegate> delegate;
@property (nonatomic) double borderHeight;
@property (nonatomic) double pullToRefreshOffset;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSAttributedString *attributedTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)TitleFont;

/* instance methods */
- (void)didMoveToSuperview;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)layoutBackground:(_Bool)background;
- (void)layoutTitles;
- (void)scrollViewDidScroll:(id)scroll;
- (void)scrollViewDidEndDragging:(id)dragging;
- (void)endRefreshing:(id)refreshing;
- (void)setContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (void)startAnimating;
- (id)initWithTitle:(id)title backButton:(_Bool)button containerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame navBarDelegate:(id)delegate;
- (id)initWithTitleView:(id)view backButton:(_Bool)button containerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame navBarDelegate:(id)delegate;
- (void)backPressed;
- (void)trailingNavButtonPressed;
- (void)leadingNavButtonPressed;
- (void)startRefreshing;
- (void)startAnimation;
- (void)executeEndBlocksIfNeeded;
- (id)currentLeadingButton;
- (id)currentTrailingButton;
- (double)triggerTitleDistance;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameThatFits:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fits;
- (id)titleLabel;
- (void)setDarkTheme:(_Bool)theme;
- (void)addCustomTrailingButton:(id)button;
- (void)addCustomTrailingButton:(id)button buttonImageHighlighted:(id)highlighted accessibilityLabel:(id)label;
- (void)addCustomLeadingButton:(id)button;
- (void)addCustomLeadingButton:(id)button buttonImageHighlighted:(id)highlighted accessibilityLabel:(id)label;
- (void)darkThemeState;

@end

#endif /* PTVNavigationBar_h */
