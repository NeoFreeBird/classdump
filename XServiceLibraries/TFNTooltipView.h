//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTooltipView_h
#define TFNTooltipView_h
@import Foundation;

#include "TFNGradientView.h"
#include "TFNTooltipContentView-Protocol.h"
#include "TFNTooltipViewDelegate-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class CAShapeLayer, NSString, UIColor, UITapGestureRecognizer, UIView;

@interface TFNTooltipView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic) _Bool shownInView;
@property (nonatomic) long long concurrentAnimationCount;
@property (nonatomic) _Bool isAnimatingForPresentation;
@property (nonatomic) _Bool isInLayoutSubviews;
@property (retain, nonatomic) CAShapeLayer *borderLayer;
@property (weak, nonatomic) id <TFNTooltipViewDelegate> delegate;
@property (retain, nonatomic) UIView<TFNTooltipContentView> *contentView;
@property (retain, nonatomic) TFNGradientView *gradientBackgroundView;
@property (retain, nonatomic) UIColor *tooltipBackgroundColor;
@property (nonatomic) _Bool hasDropshadow;
@property (nonatomic) struct CGPoint { double x0; double x1; } focusPoint;
@property (nonatomic) unsigned long long arrowDirection;
@property (nonatomic) double maxWidth;
@property (nonatomic) struct CGSize { double x0; double x1; } arrowSize;
@property (nonatomic) double arrowOffset;
@property (nonatomic) double cornerRadius;
@property (nonatomic) _Bool ignoreDefaultPadding;
@property (readonly, nonatomic) _Bool isAnimating;
@property (retain, nonatomic) UIColor *borderColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id /* block */)_fadeAnimationForPresentation:(_Bool)presentation delay:(double)delay;
+ (id /* block */)_popAnimationForPresentation:(_Bool)presentation delay:(double)delay;
+ (id)_arrowCandidatesForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;

/* instance methods */
- (void)removeFromSuperview;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame contentView:(id)view;
- (_Bool)tfn_isAppGestureEnabled:(unsigned long long)enabled;
- (void)_tooltipTapped:(id)tapped;
- (void)showInView:(id)view atPoint:(struct CGPoint { double x0; double x1; })point delay:(double)delay animationType:(unsigned long long)type;
- (void)positionAtPoint:(struct CGPoint { double x0; double x1; })point;
- (void)positionForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inView:(id)view permittedArrowDirection:(unsigned long long)direction;
- (void)presentTooltipFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inView:(id)view permittedArrowDirection:(unsigned long long)direction delay:(double)delay animationType:(unsigned long long)type;
- (void)dismissTooltipWithAnimationType:(unsigned long long)type;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_positionTooltipRelativeToFocusPoint;
- (void)_tooltipWillDismiss;
- (void)_tooltipDidDismiss;
- (void)_tooltipWillShow;
- (void)_tooltipDidShow;
- (void)_dismissFromSuperview;
- (void)_tfn_setupAnimationForPresenting:(_Bool)presenting inView:(id)view transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (void)_tfn_cleanupAnimationForPresenting:(_Bool)presenting;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)_createTooltipPath;
- (struct CGPoint { double x0; double x1; })_centerOfArrowBaseForContentSize:(struct CGSize { double x0; double x1; })size arrowDirection:(unsigned long long)direction arrowOffset:(double)offset;
- (struct CGPoint { double x0; double x1; })_arrowPointForContentSize:(struct CGSize { double x0; double x1; })size arrowDirection:(unsigned long long)direction arrowOffset:(double)offset;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_contentEdgeInsetsForArrowDirection:(unsigned long long)direction;
- (struct CGSize { double x0; double x1; })_contentSizeForTooltipSize:(struct CGSize { double x0; double x1; })size;
- (struct CGSize { double x0; double x1; })_tooltipSizeForContentSize:(struct CGSize { double x0; double x1; })size arrowDirection:(unsigned long long)direction;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_tooltipFrameForContentSize:(struct CGSize { double x0; double x1; })size arrowDirection:(unsigned long long)direction arrowOffset:(double)offset focusPoint:(struct CGPoint { double x0; double x1; })point;
- (double)_arrowOffsetInPixelsForContentSize:(struct CGSize { double x0; double x1; })size arrowDirection:(unsigned long long)direction arrowOffset:(double)offset;
- (struct CGPoint { double x0; double x1; })_popAnimationAnchorPoint;
- (void)_setupContentView;
- (void)_setupGradientBackgroundView;
- (double)_visibleFractionOfTooltipWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame inViewWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_visibleBoundsForView:(id)view;
- (void)_validateWidth;
- (_Bool)_canAdjustArrowOffsetToFitTooltipWithContentSize:(struct CGSize { double x0; double x1; })size arrowDirection:(unsigned long long)direction view:(id)view bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect focusPoint:(struct CGPoint { double x0; double x1; } *)point arrowOffset:(double *)offset;
- (_Bool)isShownInView;

@end

#endif /* TFNTooltipView_h */
