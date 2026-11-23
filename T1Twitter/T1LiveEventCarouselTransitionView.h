//
#ifndef T1LiveEventCarouselTransitionView_h
#define T1LiveEventCarouselTransitionView_h
@import Foundation;

#include "T1LiveEventCarouselTransitionUserInfoView.h"
#include "T1LiveEventCarouselTransitionViewDelegate-Protocol.h"
#include "T1LiveEventCarouselTransitionViewModel.h"
#include "T1LiveEventRoundedPaddedView.h"
#include "T1LiveEventVideoLoadingView.h"
#include "T1LiveEventVideoLoadingViewDelegate-Protocol.h"
#include "TUIImageViewFetchHelperDelegate-Protocol.h"

@class NSString, TFNPaddedButton, UIImageView, UILabel, UIView;

@interface T1LiveEventCarouselTransitionView : UIView <TUIImageViewFetchHelperDelegate, T1LiveEventVideoLoadingViewDelegate>

@property (readonly, nonatomic) UIImageView *backgroundImageView;
@property (readonly, nonatomic) UIView *dimOverlayView;
@property (readonly, nonatomic) UILabel *upNextLabel;
@property (readonly, nonatomic) T1LiveEventCarouselTransitionUserInfoView *userInfoView;
@property (readonly, nonatomic) UILabel *usernameLabel;
@property (readonly, nonatomic) T1LiveEventRoundedPaddedView *broadcastBadgeView;
@property (readonly, nonatomic) T1LiveEventRoundedPaddedView *durationView;
@property (readonly, nonatomic) TFNPaddedButton *replayButton;
@property (readonly, nonatomic) T1LiveEventVideoLoadingView *loadingView;
@property (weak, nonatomic) id <T1LiveEventCarouselTransitionViewDelegate> delegate;
@property (retain, nonatomic) T1LiveEventCarouselTransitionViewModel *viewModel;
@property (nonatomic) _Bool animating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame carouselTransitionViewModel:(id)model imagePipeline:(id)pipeline;
- (void)pauseAnimation;
- (void)resumeAnimationWithCompletionBlock:(id /* block */)block;
- (void)_t1_updateSubviews;
- (void)_t1_updateFontSizes;
- (void)_t1_replayButtonTapped:(id)tapped;
- (id)_t1_darkBackgroundColor;
- (long long)tui_scaleAspectFillFocusModeForFetchHelper:(id)helper;
- (void)loadingViewDidTapPlayButton:(id)button;
- (void)tfn_fontSizeChanged;
- (_Bool)isAnimating;

@end

#endif /* T1LiveEventCarouselTransitionView_h */
