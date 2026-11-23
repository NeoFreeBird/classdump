//
#ifndef _TtC6Lottie20LottieAnimationLayer_h
#define _TtC6Lottie20LottieAnimationLayer_h
@import Foundation;

@class CALayer, Lottie.AnimationContext ?, Lottie.AnimationFontProvider, Lottie.AnimationImageProvider, Lottie.AnimationKeypathTextProvider, Lottie.LottieAnimation ?, Lottie.LottieAnimationLayer _$s_ -> Lottie.LottieAnimation _$stcSg, Lottie.LottieAnimationLayer _$s_ -> Lottie.RenderingEngineOption _$stcSg, Lottie.LottieBackgroundBehavior ?, Lottie.LottieConfiguration, Lottie.LottieLogger, Lottie.LottieLoopMode, Lottie.LottiePlaybackMode ?, Lottie.RootAnimationLayer ?, Swift.Bool, _$s12CoreGraphics7CGFloatVMn, _$sSD -> Lottie.AnimationKeypath Lottie.AnyValueProvider, _$sSS, _$sSSSg, _$sSi;

@interface Lottie.LottieAnimationLayer : CALayer { // (Swift)
    /* instance variables */
    Lottie.LottiePlaybackMode ? currentPlaybackMode;
    Swift.Dictionary -> Lottie.AnimationKeypath Lottie.AnyValueProvider valueProviders;
    Lottie.LottieAnimationLayer  first-element-marker  -> Lottie.RenderingEngineOption _$stcSg animationLayerDidLoad;
    Lottie.LottieConfiguration configuration;
    nominal type descriptor for CoreGraphics.CGFloat screenScale;
    Lottie.LottieAnimation ? animation;
    Lottie.LottieAnimationLayer  first-element-marker  -> Lottie.LottieAnimation _$stcSg animationLoaded;
    Lottie.AnimationImageProvider imageProvider;
    Lottie.AnimationKeypathTextProvider textProvider;
    Lottie.AnimationFontProvider fontProvider;
    Swift.Bool maskAnimationToBounds;
    Lottie.LottieLoopMode loopMode;
    Swift.Bool shouldRasterizeWhenIdle;
    nominal type descriptor for CoreGraphics.CGFloat animationSpeed;
    Swift.Bool respectAnimationFrameRate;
    Swift.Bool mainThreadRenderingEngineShouldForceDisplayUpdateOnEachFrame;
    Lottie.RootAnimationLayer ? rootAnimationLayer;
    Lottie.AnimationContext ? animationContext;
    Swift.String? animationName;
    Swift.String _activeAnimationName;
    Swift.Int animationID;
    Lottie.LottieLogger logger;
    Lottie.LottieBackgroundBehavior ? _backgroundBehavior;
}

/* instance methods */
- (id)initWithLayer:(id)layer;
- (id)initWithCoder:(id)coder;
- (id)init;

@end

#endif /* _TtC6Lottie20LottieAnimationLayer_h */
