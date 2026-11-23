//
#ifndef TUCUnifiedCardView_Protocol_h
#define TUCUnifiedCardView_Protocol_h
@import Foundation;

#include "TFNPreviewable-Protocol.h"
#include "TUCComponentViewEventDelegate-Protocol.h"

@class NSArray, TFNLayoutableView, TIPImagePipeline, TUCLayoutContext, TUCUnifiedCard, TUCViewLayoutState, UIView;
@protocol TUCComponentContainerView, TUCViewRegistryProtocol;

@protocol TUCUnifiedCardView <TFNPreviewable>

@required

@property (nonatomic, retain) TUCUnifiedCard *unifiedCard;
@property (nonatomic, readonly) NSArray *allComponentViews;
@property (nonatomic, readonly) TFNLayoutableView<TUCComponentContainerView> *containerView;
@property (nonatomic, readonly) UIView *footerView;
@property (nonatomic, retain) TUCLayoutContext *layoutContext;
@property (nonatomic, retain) TUCViewLayoutState *layoutState;
@property (nonatomic, weak) id <TUCComponentViewEventDelegate> eventDelegate;
@property (nonatomic, retain) TIPImagePipeline *imagePipeline;
@property (nonatomic, retain) id <TUCViewRegistryProtocol> viewRegistry;

/* required instance methods */
- (id)filterComponentViewsByClass:(Class)_class;

@optional

@end

#endif /* TUCUnifiedCardView_Protocol_h */
