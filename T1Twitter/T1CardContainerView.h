//
#ifndef T1CardContainerView_h
#define T1CardContainerView_h
@import Foundation;

#include "TFNPreviewable-Protocol.h"
#include "TFNReusableViewCacheContainer-Protocol.h"
#include "TUICardViewDelegate-Protocol.h"

@class NSCache, NSString, TFNReusableViewCache, TFNTwitterCardContext, TFSTwitterScribeContext, TUICardView, TUICardViewLayoutState, UIView;

@interface T1CardContainerView : UIView <TFNPreviewable, TFNReusableViewCacheContainer>

@property (retain, nonatomic) NSCache *localCache;
@property (retain, nonatomic) TUICardView *activeCardView;
@property (weak, nonatomic) id <TUICardViewDelegate> delegate;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentEdgeInsets;
@property (retain, nonatomic) TUICardViewLayoutState *layoutState;
@property (retain, nonatomic) TFNTwitterCardContext *cardContext;
@property (copy, nonatomic) TFSTwitterScribeContext *scribeContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) TFNReusableViewCache *reusableViewCache;

/* class methods */
+ (id)_t1_imagePipelineForCardContext:(id)context;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (void)layoutSubviews;
- (void)restartAnimationsIfNeeded;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)_t1_updateActiveCardView;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)previewConfigurationForLocation:(struct CGPoint { double x0; double x1; })location;
- (void)_t1_recycleCardView:(id)view;
- (void)_cardRegistryDidUpdate;

@end

#endif /* T1CardContainerView_h */
