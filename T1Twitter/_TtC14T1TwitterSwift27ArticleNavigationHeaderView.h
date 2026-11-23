//
#ifndef _TtC14T1TwitterSwift27ArticleNavigationHeaderView_h
#define _TtC14T1TwitterSwift27ArticleNavigationHeaderView_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class Swift.Bool, T1TwitterSwift.ArticleNavigationHeaderCoverSizing, T1TwitterSwift.ArticleNavigationHeaderViewDelegate ?, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSaySo18NSLayoutConstraintCGSg, _$sSo11UIImageViewC, _$sSo18NSLayoutConstraintCSg, _$sSo6UIViewC, _$sSo6UIViewCSg, _$sSo7UILabelC, _$sSo8UIButtonC, _$sSo8UIButtonCSg, __C.CGSize;

@interface T1TwitterSwift.ArticleNavigationHeaderView : UIView <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    T1TwitterSwift.ArticleNavigationHeaderViewDelegate ? delegate;
    __C.UIView coverContainerView;
    __C.UIImageView imageView;
    __C.UIView collapsedBarView;
    __C.UILabel titleLabel;
    __C.UIButton backButton;
    T1TwitterSwift.ArticleNavigationHeaderCoverSizing coverSizing;
    __C.UIButton? $__lazy_storage_$_grokSummaryButton;
    Swift.Bool showsGrokSummaryButton;
    Swift.Bool usesSystemNavigationBar;
    __C.UIView? $__lazy_storage_$_navigationBarTitleView;
    [__C.NSLayoutConstraint]? $__lazy_storage_$_navigationBarTitleConstraints;
    Swift.Bool isAnimating;
    __C.NSLayoutConstraint? heightConstraint;
    nominal type descriptor for CoreGraphics.CGFloat laidOutWidth;
    __C.CGSize actionButtonSize;
    Swift.Bool hasCoverImage;
    Swift.Bool isForceCollapsed;
    nominal type descriptor for CoreGraphics.CGFloat currentHeight;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (id)initWithCoder:(id)coder;
- (void)safeAreaInsetsDidChange;
- (void)layoutSubviews;
- (void)backTapped;
- (void)grokSummaryTapped;
- (void)coverTapped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift27ArticleNavigationHeaderView_h */
