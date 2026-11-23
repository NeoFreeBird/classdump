//
#ifndef PTVGiftHeartSpriteLayer_h
#define PTVGiftHeartSpriteLayer_h
@import Foundation;

#include "PTVGiftStyle.h"
#include "PTVSpriteAnimationLayer.h"

@class CALayer, UIImage;

@interface PTVGiftHeartSpriteLayer : CALayer {
    /* instance variables */
    CALayer *_colorLayer;
    CALayer *_avatarLayer;
    PTVSpriteAnimationLayer *_avatarMaskLayer;
    PTVSpriteAnimationLayer *_borderLayer;
    PTVSpriteAnimationLayer *_colorMask;
    struct CGSize { double width; double height; } _animationFrameSize;
    double _duration;
}

@property (readonly, nonatomic) _Bool isPaused;
@property (readonly, nonatomic) PTVGiftStyle *giftStyle;
@property (nonatomic) long long participantIndex;
@property (retain, nonatomic) UIImage *avatar;

/* instance methods */
- (id)initWithAnimationFrameSize:(struct CGSize { double x0; double x1; })size duration:(double)duration;
- (id)initWithGiftStyle:(id)style;
- (void)applicationWillEnterForeground:(id)foreground;
- (void)layoutSublayers;
- (void)initializeLayersWithFillSprite:(id)sprite maskSprite:(id)sprite borderSprite:(id)sprite;
- (void)initializeLayersWithFillSprite:(id)sprite maskSprite:(id)sprite borderSprite:(id)sprite traitCollection:(id)collection;
- (void)setParticipantIndex:(long long)index avatar:(id)avatar;
- (void)initializeAvatar;
- (void)attachAnimations;
- (void)attachAnimationsIfNeeded;
- (void)resumeAnimation;
- (void)pauseAtOffset;

@end

#endif /* PTVGiftHeartSpriteLayer_h */
