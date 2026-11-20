//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCSwipeableContainerView_h
#define TUCSwipeableContainerView_h
@import Foundation;

#include "TAVUIAutoplayable-Protocol.h"
#include "TUCCarouselViewController.h"
#include "TUCCarouselViewControllerDelegate-Protocol.h"
#include "TUCComponentContainerView-Protocol.h"
#include "TUCComponentViewEventDelegate-Protocol.h"
#include "TUCDefaultContainerViewFactory.h"
#include "TUCLayoutableView.h"
#include "TUCSwipeableContainer.h"
#include "TUCVideoContainerView-Protocol.h"

@class NSString, TAVUIAutoplayManager, TIPImagePipeline, UIView;

@interface TUCSwipeableContainerView : TUCLayoutableView <TUCComponentViewEventDelegate, TUCCarouselViewControllerDelegate, TUCVideoContainerView, TUCComponentContainerView, TAVUIAutoplayable>

@property (weak, nonatomic) id <TUCComponentViewEventDelegate> eventDelegate;
@property (retain, nonatomic) TUCSwipeableContainer *container;
@property (retain, nonatomic) TUCDefaultContainerViewFactory *factory;
@property (retain, nonatomic) TUCCarouselViewController *carouselViewController;
@property (weak, nonatomic) TAVUIAutoplayManager *autoplayManager;
@property (readonly, nonatomic) UIView *currentVideoView;
@property (nonatomic) _Bool hideBorder;
@property (nonatomic) _Bool roundBottomCorners;
@property (retain, nonatomic) TIPImagePipeline *imagePipeline;
@property (nonatomic) _Bool dataSaverEnabled;
@property (copy, nonatomic) id /* block */ containerShouldTap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *autoplayableView;
@property (readonly, nonatomic) long long autoplayableType;

/* class methods */
+ (id)sharedLayoutDelegate;
+ (id)containerViewWithUnifiedCard:(id)card container:(id)container reusableComponentViews:(id)views componentViewRegistry:(id)registry eventDelegate:(id)delegate;

/* instance methods */
- (id)initWithUnifiedCard:(id)card container:(id)container reusableComponentViews:(id)views componentViewRegistry:(id)registry eventDelegate:(id)delegate;
- (void)setupLayoutWithInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets itemSize:(struct CGSize { double x0; double x1; })size;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (id)accessibilityLabelForSuperview;
- (void)accessibilityElementDidBecomeFocused;
- (id)_tuc_accessibilityLabel;
- (_Bool)accessibilityScroll:(long long)scroll;
- (_Bool)accessibilityActivate;
- (id)allComponentViews;
- (id)autoplayableContainerView;
- (id)filterComponentViewsWithBlock:(id /* block */)block;
- (_Bool)hasURL;
- (_Bool)openURL;
- (void)prepareForReuse;
- (void)_tuc_removeCarouselViewController;
- (id)accessibilityCustomUCActions;
- (id)currentContainerView;
- (id)containerViewAtIndex:(long long)index;
- (void)dealloc;
- (_Bool)canSetLayoutState:(id)state;
- (void)injectViewControllerForCarousel:(id)carousel scribeContext:(id)context;
- (id)componentViewAtPoint:(struct CGPoint { double x0; double x1; })point;
- (void)setLayoutState:(id)state;
- (void)_tuc_setCarouselViewControllerLayoutStates;
- (id)previewConfigurationForLocation:(struct CGPoint { double x0; double x1; })location;
- (void)didBecomeActiveAutoplayableWithManager:(id)manager;
- (void)willResignAsActiveAutoplayableWithManager:(id)manager;
- (id)componentView:(id)view didFireViewEvent:(id)event;
- (id)containerView:(id)view didFireViewEvent:(id)event;
- (void)carouselViewController:(id)controller didUserSwipeFrom:(long long)from to:(long long)to;
- (void)carouselViewController:(id)controller didAutoAdvanceFrom:(long long)from to:(long long)to;
- (void)notifyAccessibilityPageScrolled;
- (_Bool)isDataSaverEnabled;

@end

#endif /* TUCSwipeableContainerView_h */
