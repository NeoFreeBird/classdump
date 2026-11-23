//
#ifndef _TtC6Lottie4Star_h
#define _TtC6Lottie4Star_h
@import Foundation;

#include "_TtC6Lottie9ShapeItem.h"

@class Lottie.KeyframeGroup Lottie.LottieVector1D, Lottie.KeyframeGroup Lottie.LottieVector1D ?, Lottie.KeyframeGroup Lottie.LottieVector3D, Lottie.PathDirection, Lottie.StarType;

@interface Lottie.Star : Lottie.ShapeItem { // (Swift)
    /* instance variables */
    Lottie.PathDirection direction;
    Lottie.KeyframeGroup Lottie.LottieVector3D position;
    Lottie.KeyframeGroup Lottie.LottieVector1D outerRadius;
    Lottie.KeyframeGroup Lottie.LottieVector1D outerRoundness;
    Lottie.KeyframeGroup Lottie.LottieVector1D ? innerRadius;
    Lottie.KeyframeGroup Lottie.LottieVector1D ? innerRoundness;
    Lottie.KeyframeGroup Lottie.LottieVector1D rotation;
    Lottie.KeyframeGroup Lottie.LottieVector1D points;
    Lottie.StarType starType;
}

@end

#endif /* _TtC6Lottie4Star_h */
