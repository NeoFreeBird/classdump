//
#ifndef T1LiveEventCarouselTransitionViewController_h
#define T1LiveEventCarouselTransitionViewController_h
@import Foundation;

#include "T1LiveEventCarouselEntry.h"
#include "T1LiveEventCarouselTransitionViewControllerDelegate-Protocol.h"
#include "T1LiveEventCarouselTransitionViewDelegate-Protocol.h"
#include "T1LiveEventCarouselTransitionViewModel.h"
#include "T1LiveEventFeatures.h"

@class NSString, TFNViewController, TIPImagePipeline;

@interface T1LiveEventCarouselTransitionViewController : TFNViewController <T1LiveEventCarouselTransitionViewDelegate>

@property (retain, nonatomic) TIPImagePipeline *imagePipeline;
@property (retain, nonatomic) T1LiveEventFeatures *liveEventFeatures;
@property (retain, nonatomic) T1LiveEventCarouselTransitionViewModel *viewModel;
@property (readonly, nonatomic) T1LiveEventCarouselEntry *nextCarouselEntry;
@property (weak, nonatomic) id <T1LiveEventCarouselTransitionViewControllerDelegate> delegate;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly, nonatomic) _Bool transitionFinished;
@property (nonatomic) _Bool animationPaused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithCoder:(id)coder;
- (id)initWithViewModel:(id)model imagePipeline:(id)pipeline liveEventFeatures:(id)features;
- (void)loadView;
- (id)transitionView;
- (void)_t1_handleTransitionCompletion;
- (void)_t1_handleTransitionAnimationFinished:(_Bool)finished;
- (void)startTransitionCountdown;
- (void)pauseTransitionAnimation;
- (void)resumeTransitionAnimation;
- (_Bool)isTransitionFinished;
- (void)carouselTransitionViewDidCompleteTransition:(id)transition;
- (void)carouselTransitionViewDidTapReplay:(id)replay;
- (void)carouselTransitionViewDidTapExpand:(id)expand;
- (_Bool)isAnimationPaused;

@end

#endif /* T1LiveEventCarouselTransitionViewController_h */
