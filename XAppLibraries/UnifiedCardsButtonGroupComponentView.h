//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UnifiedCardsButtonGroupComponentView_h
#define UnifiedCardsButtonGroupComponentView_h
@import Foundation;

#include "TUCComponentModel-Protocol.h"
#include "TUCComponentView-Protocol.h"
#include "TUCComponentViewEventDelegate-Protocol.h"
#include "TUCLayoutableView.h"
#include "TUCUnifiedCard.h"

@class NSArray, TIPImagePipeline, UIView;

@interface UnifiedCardsButtonGroupComponentView : TUCLayoutableView <TUCComponentView> // (Swift)

@property (nonatomic, retain) TUCUnifiedCard *unifiedCard;
@property (nonatomic, retain) id <TUCComponentModel> component;
@property (nonatomic, retain) TIPImagePipeline *imagePipeline;
@property (nonatomic, weak) id <TUCComponentViewEventDelegate> eventDelegate;
@property (nonatomic, copy) NSArray *buttons;
@property (nonatomic, readonly) UIView *autoplayableContainerView;

/* class methods */
+ (id)sharedLayoutDelegate;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)setupActions;
- (void)prepareForReuse;
- (id)supplementalParamsForEvent:(id)event;
- (id)updatedScribeContextForComponentViewEvent:(id)event sourceScribeContext:(id)context;
- (void)didTapButton:(id)button;
- (id)accessibilityCustomUCActions;

@end

#endif /* UnifiedCardsButtonGroupComponentView_h */
