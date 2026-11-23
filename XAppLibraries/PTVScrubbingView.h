//
#ifndef PTVScrubbingView_h
#define PTVScrubbingView_h
@import Foundation;

#include "PTVScrubberView.h"
#include "PTVScrubbingThumbnailView.h"
#include "PTVScrubbingViewDelegate-Protocol.h"

@class NSLayoutConstraint, UIButton, UILabel, UIStackView, UIView;

@interface PTVScrubbingView : UIView {
    /* instance variables */
    PTVScrubberView *_scrubbingBar;
    UIStackView *_hintContainerView;
    UILabel *_zoomLabel;
    PTVScrubbingThumbnailView *_thumbnailView;
    _Bool _isInScrubMode;
    NSLayoutConstraint *_thumbnailTopWithHintsLayoutConstraint;
    NSLayoutConstraint *_thumbnailTopWithoutHintsLayoutConstraint;
}

@property (readonly, nonatomic) UILabel *timecodeView;
@property (weak, nonatomic) id <PTVScrubbingViewDelegate> delegate;
@property (retain, nonatomic) UIView *blurredBackgroundView;
@property (readonly, nonatomic) UIButton *playButton;
@property (nonatomic) double totalDuration;
@property (nonatomic) double startTime;
@property (nonatomic) double currentSelectedTime;
@property (nonatomic) double currentScrubbingZoom;
@property (nonatomic) _Bool shouldShowHints;
@property (nonatomic) long long interfaceOrientation;
@property (readonly, nonatomic) double bottomAreaHeight;

/* class methods */
+ (id)HintViewWithIcon:(id)icon Title:(id)title;

/* instance methods */
- (void)layoutSubviews;
- (id)initWithDelegate:(id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)startScrubbing;
- (void)endScrubbing;
- (void)updateAlphaForEndScrubbing;
- (void)show;
- (void)updateAlphaForStartScrubbing;
- (void)hide;
- (void)updateAlphaForHide;
- (void)hideAnimationDidComplete;
- (void)setZoomLabelTextForCurrentZoom;
- (void)setNewThumbnailURL:(id)url;
- (void)setHintsAlpha;

@end

#endif /* PTVScrubbingView_h */
