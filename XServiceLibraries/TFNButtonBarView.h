//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNButtonBarView_h
#define TFNButtonBarView_h
@import Foundation;

#include "TFNGradientView.h"

@class NSArray, UIColor, UIScrollView, UIView;

@interface TFNButtonBarView : UIView

@property (readonly, nonatomic) UIView *topAccentView;
@property (readonly, nonatomic) UIView *bottomAccentView;
@property (retain, nonatomic) UIScrollView *leadingViewsScrollView;
@property (retain, nonatomic) TFNGradientView *scrollFadeGradientView;
@property (retain, nonatomic) UIColor *topAccentColor;
@property (retain, nonatomic) UIColor *bottomAccentColor;
@property (nonatomic) _Bool accentBordersHidden;
@property (nonatomic) _Bool alignViewsWithContent;
@property (nonatomic) _Bool scrollLeadingViews;
@property (nonatomic) _Bool hasDynamicLeadingViewSpacing;
@property (nonatomic) double additionalLeadingInset;
@property (nonatomic) _Bool extendsTrailingViewsToBarEdge;
@property (copy, nonatomic) NSArray *leadingViews;
@property (copy, nonatomic) NSArray *trailingViews;
@property (nonatomic) double leadingViewsSpacing;
@property (nonatomic) double trailingViewsSpacing;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)calculatedLayoutMetrics;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_tfn_horizontalInsetsWithLayoutMetrics:(id)metrics;
- (_Bool)isAccentBordersHidden;
- (_Bool)shouldScrollLeadingViews;

@end

#endif /* TFNButtonBarView_h */
