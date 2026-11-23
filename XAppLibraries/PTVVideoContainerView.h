//
#ifndef PTVVideoContainerView_h
#define PTVVideoContainerView_h
@import Foundation;

#include "PTVBlurredImageView.h"
#include "PTVLoadingImageView.h"
#include "PTVLoadingImageViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, NSURL, UILayoutGuide, UIView;

@interface PTVVideoContainerView : UIView <PTVLoadingImageViewDelegate> {
    /* instance variables */
    PTVBlurredImageView *_placeholderBackgroundImageView;
    UIView *_placeholderBackgroundShadeView;
    NSMutableArray *_fadeInBackgroundViews;
    NSMutableArray *_backgroundViewsForRemoval;
}

@property (retain, nonatomic) NSArray *videoAreaLayoutGuideConstraints;
@property (readonly, nonatomic) UIView *theaterModeBackgroundView;
@property (nonatomic) _Bool is360;
@property (nonatomic) _Bool aspectFill;
@property (retain, nonatomic) UIView *videoView;
@property (retain, nonatomic) UIView *guestVideoView;
@property (readonly, nonatomic) UILayoutGuide *videoAreaLayoutGuide;
@property (readonly, nonatomic) PTVLoadingImageView *placeholderImageView;
@property (readonly, nonatomic) double videoRotation;
@property (readonly, nonatomic) NSURL *placeholderImageURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)layoutPlaceholderImageView;
- (void)layoutBackgroundViews;
- (void)updateVideoRotation:(double)rotation;
- (void)transitionPlaceholderBackgroundImageViewToBackgroundViews;
- (void)setNewBackgroundView:(id)view animated:(_Bool)animated;
- (void)setNewBackgroundView:(id)view rotation:(double)rotation shouldAnimate:(_Bool)animate;
- (void)newBackgroundViewAnimationDidComplete:(_Bool)complete still:(id)still;
- (void)setPlaceholderImageURL:(id)url shouldShowThumbnail:(_Bool)thumbnail;
- (void)fadeBackgroundViewToBlackColorWithDuration:(double)duration;
- (void)fadeOutBlackBackgroundViewWithDuration:(double)duration;
- (void)loadingImageViewLoadedImageDidChange:(id)change;

@end

#endif /* PTVVideoContainerView_h */
