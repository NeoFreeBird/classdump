//
#ifndef _TtC6Lottie15DropShadowStyle_h
#define _TtC6Lottie15DropShadowStyle_h
@import Foundation;

#include "_TtC6Lottie10LayerStyle.h"

@class Lottie.KeyframeGroup Lottie.LottieColor, Lottie.KeyframeGroup Lottie.LottieVector1D;

@interface Lottie.DropShadowStyle : Lottie.LayerStyle { // (Swift)
    /* instance variables */
    Lottie.KeyframeGroup Lottie.LottieVector1D opacity;
    Lottie.KeyframeGroup Lottie.LottieColor color;
    Lottie.KeyframeGroup Lottie.LottieVector1D angle;
    Lottie.KeyframeGroup Lottie.LottieVector1D size;
    Lottie.KeyframeGroup Lottie.LottieVector1D distance;
}

@end

#endif /* _TtC6Lottie15DropShadowStyle_h */
