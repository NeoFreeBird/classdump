//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6Lottie23CompatibleAnimationView_h
#define _TtC6Lottie23CompatibleAnimationView_h
@import Foundation;

#include "_TtC6Lottie19CompatibleAnimation.h"
#include "_TtC6Lottie32CompatibleDictionaryTextProvider.h"
#include "_TtP6Lottie31CompatibleAnimationFontProvider_-Protocol.h"
#include "_TtP6Lottie32CompatibleAnimationImageProvider_-Protocol.h"

@class Lottie.CompatibleAnimation ?, Lottie.CompatibleDictionaryTextProvider ?, Lottie.LottieAnimationView, Lottie31CompatibleAnimationFontProvider_pSg, Lottie32CompatibleAnimationImageProvider_pSg, UIView, _$s12CoreGraphics7CGFloatVMn;

@interface Lottie.CompatibleAnimationView : UIView { // (Swift)
    /* instance variables */
    Lottie.LottieAnimationView animationView;
}

@property (nonatomic, retain) Lottie.CompatibleAnimation *compatibleAnimation;
@property (nonatomic) double loopAnimationCount;
@property (nonatomic, retain) Lottie.CompatibleDictionaryTextProvider *compatibleDictionaryTextProvider;
@property (nonatomic, retain) id <Lottie.CompatibleAnimationFontProvider> compatibleAnimationFontProvider;
@property (nonatomic, retain) id <Lottie.CompatibleAnimationImageProvider> compatibleAnimationImageProvider;
@property (nonatomic) long long contentMode;
@property (nonatomic) _Bool shouldRasterizeWhenIdle;
@property (nonatomic) double currentProgress;
@property (nonatomic, readonly) double duration;
@property (nonatomic) double currentTime;
@property (nonatomic) double currentFrame;
@property (nonatomic, readonly) double realtimeAnimationFrame;
@property (nonatomic, readonly) double realtimeAnimationProgress;
@property (nonatomic) double animationSpeed;
@property (nonatomic) _Bool respectAnimationFrameRate;
@property (nonatomic, readonly) _Bool isAnimationPlaying;
@property (nonatomic) long long backgroundMode;

/* instance methods */
- (id)initWithCompatibleAnimation:(id)animation;
- (id)initWithCompatibleAnimation:(id)animation compatibleRenderingEngineOption:(long long)option;
- (id)initWithUrl:(id)url;
- (id)initWithUrl:(id)url compatibleRenderingEngineOption:(long long)option;
- (id)initWithData:(id)data;
- (id)initWithData:(id)data compatibleRenderingEngineOption:(long long)option;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)play;
- (void)playWithCompletion:(id /* block */)completion;
- (void)playFromProgress:(double)progress toProgress:(double)progress completion:(id /* block */)completion;
- (void)playFromFrame:(double)frame toFrame:(double)frame completion:(id /* block */)completion;
- (void)playFromMarker:(id)marker toMarker:(id)marker completion:(id /* block */)completion;
- (void)playWithMarker:(id)marker completion:(id /* block */)completion;
- (void)stop;
- (void)pause;
- (void)reloadImages;
- (void)forceDisplayUpdate;
- (id)getValueFor:(id)_for atFrame:(double)frame;
- (void)logHierarchyKeypaths;
- (void)setColorValue:(id)value forKeypath:(id)keypath;
- (id)getColorValueFor:(id)_for atFrame:(double)frame;
- (void)addSubview:(id)subview forLayerAt:(id)at;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect toLayerAt:(id)at;
- (struct CGPoint { double x0; double x1; })convertWithPoint:(struct CGPoint { double x0; double x1; })point toLayerAt:(id)at;
- (double)progressTimeForMarker:(id)marker;
- (double)frameTimeForMarker:(id)marker;
- (double)durationFrameTimeForMarker:(id)marker;

@end

#endif /* _TtC6Lottie23CompatibleAnimationView_h */
