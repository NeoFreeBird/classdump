//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCDefaultContainerView_h
#define TUCDefaultContainerView_h
@import Foundation;

#include "TUCComponentContainerView-Protocol.h"
#include "TUCComponentViewEventDelegate-Protocol.h"
#include "TUCComponentViewRegistry-Protocol.h"
#include "TUCDefaultContainer.h"
#include "TUCLayoutableView.h"
#include "TUCUnifiedCard.h"
#include "TUCVideoComponentView.h"

@class NSArray, NSString, TFNTappableHighlightView, TIPImagePipeline, UIColor, UIView;

@interface TUCDefaultContainerView : TUCLayoutableView <TUCComponentContainerView, TUCComponentContainerView, TUCComponentViewEventDelegate>

@property (nonatomic, readonly) TUCVideoComponentView *currentVideoComponentView;
@property (readonly, nonatomic) TUCUnifiedCard *unifiedCard;
@property (retain, nonatomic) NSArray *componentViews;
@property (retain, nonatomic) UIView *proxyHighlightView;
@property (retain, nonatomic) TFNTappableHighlightView *containerView;
@property (retain, nonatomic) id <TUCComponentViewRegistry> componentViewRegistry;
@property (weak, nonatomic) id <TUCComponentViewEventDelegate> eventDelegate;
@property (nonatomic) _Bool shouldDelayTouchDownHighlighting;
@property (readonly, nonatomic) TUCDefaultContainer *container;
@property (readonly, nonatomic) UIColor *containerBackgroundColor;
@property (readonly, nonatomic) UIColor *containerBorderColor;
@property (nonatomic) _Bool hideBorder;
@property (nonatomic) _Bool roundBottomCorners;
@property (retain, nonatomic) TIPImagePipeline *imagePipeline;
@property (nonatomic) _Bool dataSaverEnabled;
@property (copy, nonatomic) id /* block */ containerShouldTap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedLayoutDelegate;
+ (id)containerViewWithUnifiedCard:(id)card container:(id)container reusableComponentViews:(id)views componentViewRegistry:(id)registry eventDelegate:(id)delegate;

/* instance methods */
- (id)initWithUnifiedCard:(id)card container:(id)container reusableComponentViews:(id)views componentViewRegistry:(id)registry eventDelegate:(id)delegate;
- (void)prepareForReuse;
- (void)updateContainerViewsWithReusableViews:(id)views;
- (void)layoutSubviews;
- (void)disableTouchHighlighting;
- (void)enableTouchHighlighting;
- (void)_tuc_updateBorder;
- (id)allComponentViews;
- (_Bool)canSetLayoutState:(id)state;
- (void)setLayoutState:(id)state;
- (id)autoplayableContainerView;
- (id)componentView:(id)view didFireViewEvent:(id)event;
- (id)containerView:(id)view didFireViewEvent:(id)event;
- (id)accessibilityCustomUCActions;
- (_Bool)hasURL;
- (_Bool)openURL;
- (id)accessibilityLabelForSuperview;
- (id)previewConfigurationForLocation:(struct CGPoint { double x0; double x1; })location;
- (id)_tuc_accessibilityDestinationsString:(id)string;
- (id)componentViewAtPoint:(struct CGPoint { double x0; double x1; })point;
- (void)injectViewControllerForCarousel:(id)carousel scribeContext:(id)context;
- (_Bool)isDataSaverEnabled;

@end

#endif /* TUCDefaultContainerView_h */
