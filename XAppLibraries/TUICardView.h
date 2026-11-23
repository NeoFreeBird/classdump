//
#ifndef TUICardView_h
#define TUICardView_h
@import Foundation;

#include "TFNPreviewable-Protocol.h"
#include "TFNTwitterCardContext.h"

@class NSString, TFNLayoutableView, TFSTwitterScribeContext, TIPImagePipeline, UIView;
@protocol TAVAutoplayViewContainer, TUICardViewDelegate;

@interface TUICardView : TFNLayoutableView <TFNPreviewable>

@property (retain, nonatomic) TFNTwitterCardContext *cardContext;
@property (weak, nonatomic) id <TUICardViewDelegate> delegate;
@property (retain, nonatomic) TIPImagePipeline *imagePipeline;
@property (readonly, nonatomic) UIView *cardMediaView;
@property (readonly, weak, nonatomic) id <TAVAutoplayViewContainer> playerViewContainer;
@property (copy, nonatomic) TFSTwitterScribeContext *scribeContext;
@property (readonly, nonatomic) _Bool hasURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)cardContextDidUpdate;
- (void)prepareForReuse;
- (id)calculatedLayoutMetrics;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)restartAnimationsIfNeeded;
- (id)previewConfigurationForLocation:(struct CGPoint { double x0; double x1; })location;
- (_Bool)openURL;
- (void)fetchImages;
- (id)imageFetchingViews;

@end

#endif /* TUICardView_h */
