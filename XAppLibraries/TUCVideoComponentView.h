//
#ifndef TUCVideoComponentView_h
#define TUCVideoComponentView_h
@import Foundation;

#include "TFNPreviewable-Protocol.h"
#include "TUCComponentModel-Protocol.h"
#include "TUCMediaComponentView.h"
#include "TUCMediaComponentViewModel.h"
#include "TUCUnifiedCard.h"
#include "TUCVideoCarouselObserver-Protocol.h"
#include "TUCVideoView-Protocol.h"
#include "TUCVideoViewDelegate-Protocol.h"

@class TIPImagePipeline, UIImage, UIView;

@interface TUCVideoComponentView : TUCMediaComponentView <TUCVideoViewDelegate, TFNPreviewable> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 disableInteractionForSalesWebCard;
    @40@0:8:16@24@32 hideVanityForSalesWebCard;
    @40@0:8:16@24@32 features;
}

@property (nonatomic, weak) id <TUCVideoCarouselObserver> delegate;
@property (nonatomic, retain) UIView<TUCVideoView> *videoView;
@property (nonatomic) _Bool shouldLoopVideo;
@property (nonatomic, retain) TIPImagePipeline *imagePipeline;
@property (nonatomic, retain) id <TUCComponentModel> component;
@property (nonatomic, retain) TUCUnifiedCard *unifiedCard;
@property (nonatomic, retain) TUCMediaComponentViewModel *mediaViewModel;
@property (nonatomic, readonly) UIView *autoplayableContainerView;
@property (nonatomic, readonly) UIImage *previewImage;

/* instance methods */
- (void)videoViewTapped:(id)tapped;
- (void)videoView:(id)view didPlayToEndWithCurrentPlaybackState:(id)state;
- (id)previewConfigurationForLocation:(struct CGPoint { double x0; double x1; })location;
- (id)initWithVideoView:(id)view disableInteractionForSalesWebCard:(_Bool)card hideVanityForSalesWebCard:(_Bool)card trimVanityZeroWidthCharacters:(_Bool)characters features:(id)features;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)fetchImages;
- (void)cleanupMediaView;
- (void)setupActions;
- (_Bool)handlesTouchHighlighting;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;

@end

#endif /* TUCVideoComponentView_h */
