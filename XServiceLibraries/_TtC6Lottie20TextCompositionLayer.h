//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6Lottie20TextCompositionLayer_h
#define _TtC6Lottie20TextCompositionLayer_h
@import Foundation;

#include "_TtC6Lottie16CompositionLayer.h"

@class Lottie.AnimationFontProvider, Lottie.AnimationKeypath ?, Lottie.AnimationKeypathTextProvider, Lottie.CoreTextRenderLayer, Lottie.KeyframeInterpolator Lottie.TextDocument ?, Lottie.MainThreadAnimationLayer ?, Lottie.NodeProperty Lottie.LottieColor, Lottie.TextAnimatorNode ?;

@interface Lottie.TextCompositionLayer : Lottie.CompositionLayer { // (Swift)
    /* instance variables */
    Lottie.TextAnimatorNode ? rootNode;
    Lottie.KeyframeInterpolator Lottie.TextDocument ? textDocument;
    Lottie.NodeProperty Lottie.LottieColor fillColorNode;
    Lottie.NodeProperty Lottie.LottieColor strokeColorNode;
    Lottie.CoreTextRenderLayer textLayer;
    Lottie.AnimationKeypathTextProvider textProvider;
    Lottie.AnimationFontProvider fontProvider;
    Lottie.MainThreadAnimationLayer ? rootAnimationLayer;
    Lottie.AnimationKeypath ? $__lazy_storage_$_fullAnimationKeypath;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithLayer:(id)layer;

@end

#endif /* _TtC6Lottie20TextCompositionLayer_h */
