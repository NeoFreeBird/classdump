//
#ifndef TUCComponentView_Protocol_h
#define TUCComponentView_Protocol_h
@import Foundation;

#include "TUCComponentModel-Protocol.h"
#include "TUCComponentViewEventDelegate-Protocol.h"

@class TIPImagePipeline, TUCUnifiedCard, UIView;

@protocol TUCComponentView

@required

@property (nonatomic, retain) TUCUnifiedCard *unifiedCard;
@property (nonatomic, retain) id <TUCComponentModel> component;
@property (nonatomic, weak) id <TUCComponentViewEventDelegate> eventDelegate;
@property (nonatomic, retain) TIPImagePipeline *imagePipeline;
@property (nonatomic, readonly) UIView *autoplayableContainerView;

/* class methods */
+ (id)sharedLayoutDelegate;

/* required instance methods */
- (void)setupActions;
- (void)prepareForReuse;
- (id)supplementalParamsForEvent:(id)event;
- (id)supplementalParamsForEvent:(id)event;
- (id)updatedScribeContextForComponentViewEvent:(id)event sourceScribeContext:(id)context;
- (id)updatedScribeContextForComponentViewEvent:(id)event sourceScribeContext:(id)context;
- (id)accessibilityCustomUCActions;

@optional

/* optional instance methods */
- (_Bool)handlesTouchHighlighting;

@end

#endif /* TUCComponentView_Protocol_h */
