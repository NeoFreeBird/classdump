//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNAnimatedGifImageView_h
#define TFNAnimatedGifImageView_h
@import Foundation;

#include "TFNAnimatedGifImage.h"
#include "TFSDisplayLink.h"

@class UIImage, UIView;
@protocol TFNAnimatedGifImageViewDelegate;

@interface TFNAnimatedGifImageView : UIView

@property (readonly, nonatomic) TFSDisplayLink *displayLink;
@property (readonly, nonatomic) double offset;
@property (readonly, nonatomic) unsigned long long frameIndex;
@property (weak, nonatomic) id <TFNAnimatedGifImageViewDelegate> delegate;
@property (retain, nonatomic) TFNAnimatedGifImage *animatedGifImage;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) _Bool animating;
@property (readonly, nonatomic) _Bool beginningOfLoop;
@property (nonatomic) unsigned long long remainingLoops;

/* class methods */
+ (_Bool)tfn_defaultShouldFlipForRightToLeftTransform;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithAnimatedGifImage:(id)image;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (_Bool)isBeginningOfLoop;
- (void)startAnimating;
- (void)stopAnimating;
- (void)updateWithAnimatedGifImageView:(id)view;
- (void)didContinueLooping;
- (void)didFinishLooping;
- (void)_updateAnimations;
- (void)_displayLinkDidFire:(id)fire;
- (void)_updateContent;
- (void)_applicationWillResignActiveNotification:(id)notification;
- (void)_applicationDidBecomeActiveNotification:(id)notification;
- (_Bool)isAnimating;

@end

#endif /* TFNAnimatedGifImageView_h */
