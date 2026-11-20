//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCSwipeableMediaComponentView_h
#define TUCSwipeableMediaComponentView_h
@import Foundation;

#include "TAVUIAutoplayable-Protocol.h"
#include "TUCComponentModel-Protocol.h"
#include "TUCComponentView-Protocol.h"
#include "TUCComponentViewEventDelegate-Protocol.h"
#include "TUCLayoutableView.h"
#include "TUCMediaComponentView.h"
#include "TUCSwipeableMediaCarouselViewController.h"
#include "TUCSwipeableMediaCarouselViewControllerDelegate-Protocol.h"
#include "TUCUnifiedCard.h"

@class NSString, TIPImagePipeline, UIView;

@interface TUCSwipeableMediaComponentView : TUCLayoutableView <TUCSwipeableMediaCarouselViewControllerDelegate, TAVUIAutoplayable, TUCComponentView> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 selectedIndexPath;
    @40@0:8:16@24@32 componentViewRegistry;
    @40@0:8:16@24@32 features;
    @40@0:8:16@24@32 scribe;
    @40@0:8:16@24@32 disableInteractionForSalesWebCard;
    @40@0:8:16@24@32 scribeContext;
}

@property (nonatomic, readonly) UIView *autoplayableContainerView;
@property (nonatomic, readonly) UIView *autoplayableView;
@property (nonatomic, readonly) long long autoplayableType;
@property (nonatomic, retain) id <TUCComponentModel> component;
@property (nonatomic, retain) TUCUnifiedCard *unifiedCard;
@property (nonatomic, weak) id <TUCComponentViewEventDelegate> eventDelegate;
@property (nonatomic, retain) TUCSwipeableMediaCarouselViewController *carouselViewController;
@property (nonatomic) double leadingInset;
@property (nonatomic, readonly) TUCMediaComponentView *currentMediaComponentView;
@property (nonatomic, retain) TIPImagePipeline *imagePipeline;
@property (nonatomic) _Bool roundBottomCorners;
@property (nonatomic, copy) NSString *accessibilityLabel;

/* class methods */
+ (id)sharedLayoutDelegate;

/* instance methods */
- (void)carouselViewController:(id)controller didSelectItemAtIndexPath:(id)path eventType:(unsigned long long)type;
- (void)carouselViewController:(id)controller didAutoSwipeFrom:(unsigned long long)from to:(unsigned long long)to;
- (void)carouselViewController:(id)controller didManualSwipeFrom:(unsigned long long)from to:(unsigned long long)to;
- (id)carouselViewController:(id)controller didHapticTouchItemAtIndex:(unsigned long long)index;
- (void)carouselViewController:(id)controller didDisplayItemAtIndex:(unsigned long long)index;
- (void)didBecomeActiveAutoplayableWithManager:(id)manager;
- (void)willResignAsActiveAutoplayableWithManager:(id)manager;
- (id)initWithComponentViewRegistry:(id)registry scribe:(id)scribe features:(id)features disableInteractionForSalesWebCard:(_Bool)card;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)addCarouselViewControllerToParent:(id)parent scribeContext:(id)context;
- (id)mediaComponentViewAtIndex:(long long)index;
- (void)setupActions;
- (void)prepareForReuse;
- (id)supplementalParamsForEvent:(id)event;
- (id)updatedScribeContextForComponentViewEvent:(id)event sourceScribeContext:(id)context;
- (void)didMoveToSuperview;
- (void)accessibilityElementDidBecomeFocused;
- (_Bool)accessibilityScroll:(long long)scroll;
- (id)accessibilityCustomUCActions;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* TUCSwipeableMediaComponentView_h */
