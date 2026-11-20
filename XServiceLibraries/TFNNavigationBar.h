//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNNavigationBar_h
#define TFNNavigationBar_h
@import Foundation;

#include "TFNBarProgressView.h"
#include "TFNLayoutMetricsEnvironment-Protocol.h"
#include "TFNNavigationBarOverlayView.h"
#include "TFNNavigationViewHiding-Protocol.h"

@class NSString, UIColor, UIImageView, UINavigationBar, UIView;

@interface TFNNavigationBar : UINavigationBar <TFNLayoutMetricsEnvironment, TFNNavigationViewHiding>

@property (readonly, nonatomic) UIView *customShadowView;
@property (nonatomic) unsigned long long progressViewHideAnimationCount;
@property (readonly, nonatomic) UIImageView *logoImageView;
@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) TFNNavigationBarOverlayView *overlayView;
@property (readonly, nonatomic) _Bool isLogoHidden;
@property (nonatomic) long long matchingStatusBarStyle;
@property (retain, nonatomic) UIColor *customShadowColor;
@property (nonatomic) long long compressHeightWhenVerticallyCompact;
@property (nonatomic) _Bool boundsChangesDisabled;
@property (nonatomic) _Bool shadowHidden;
@property (readonly, nonatomic) TFNBarProgressView *progressView;
@property (readonly) _Bool logoHidden;
@property (nonatomic) double overlayViewAlpha;
@property (nonatomic) double topTitleViewAlpha;
@property (nonatomic) _Bool windowDraggable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)initialize;
+ (void)setupAppearance:(id)appearance withBarTintColor:(id)color itemTintColor:(id)color titleColor:(id)color customShadowColor:(id)color translucent:(_Bool)translucent;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setBarTintColor:(id)color;
- (void)setTranslucent:(_Bool)translucent;
- (_Bool)isShadowHidden;
- (void)setShadowHidden:(_Bool)hidden animated:(_Bool)animated;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_backgroundViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_customShadowFrame;
- (void)setProgressViewHidden:(_Bool)hidden animated:(_Bool)animated;
- (void)setProgressViewProgress:(float)progress animated:(_Bool)animated completion:(id /* block */)completion;
- (void)setProgressViewProgress:(float)progress animated:(_Bool)animated animationDuration:(double)duration completion:(id /* block */)completion;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_embeddedProgessViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_logoImageViewFrame;
- (void)setLogoHidden:(_Bool)hidden withAccessibilityLabel:(id)label coordinator:(id)coordinator animated:(_Bool)animated;
- (void)tfn_setAlpha:(double)alpha;
- (void)setAlpha:(double)alpha;
- (long long)barPosition;
- (void)_tfn_invokeUIKitLayoutSubviews;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (void)_tfn_refreshGlassBarItemsOfNavigationItem:(id)item;
- (void)_tfn_invalidateGlassTitleViewIfOutsetsChanged:(id)changed;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_tfn_glassContentFrameForTitleView:(id)view;
- (id)_tfn_glassTitleOutsetsForTitleView:(id)view;
- (double)_tfn_glassTitleOverhangForTitleView:(id)view pastItems:(id)items itemsOnLeft:(_Bool)left;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)setCenter:(struct CGPoint { double x0; double x1; })center;
- (void)setItems:(id)items animated:(_Bool)animated;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (id)_tfn_contentView:(id)view hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)_tfn_glassFillingTitleView:(id)view hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (_Bool)isWindowDraggable;

@end

#endif /* TFNNavigationBar_h */
