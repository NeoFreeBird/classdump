//
#ifndef TUCComponentView_Protocol_h
#define TUCComponentView_Protocol_h
@import Foundation;

#include "TUCComponentModel-Protocol.h"
#include "TUCComponentViewEventDelegate-Protocol.h"
#include "TUCUnifiedCard.h"

@class TIPImagePipeline, UIView;

@protocol TUCComponentView

@required

@property (retain, nonatomic) TUCUnifiedCard *unifiedCard;
@property (retain, nonatomic) id <TUCComponentModel> component;
@property (weak, nonatomic) id <TUCComponentViewEventDelegate> eventDelegate;
@property (retain, nonatomic) TIPImagePipeline *imagePipeline;
@property (readonly, nonatomic) UIView *autoplayableContainerView;

/* class methods */
+ (id)sharedLayoutDelegate;

/* required instance methods */
- (void)setupActions;
- (void)prepareForReuse;
- (id)supplementalParamsForEvent:(id)event;
- (id)updatedScribeContextForComponentViewEvent:(id)event sourceScribeContext:(id)context;
- (id)accessibilityCustomUCActions;

@optional

/* optional instance methods */
- (_Bool)handlesTouchHighlighting;

@end

#endif /* TUCComponentView_Protocol_h */
