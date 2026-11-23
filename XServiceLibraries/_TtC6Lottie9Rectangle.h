//
#ifndef _TtC6Lottie9Rectangle_h
#define _TtC6Lottie9Rectangle_h
@import Foundation;

#include "_TtC6Lottie9ShapeItem.h"

@class Lottie.KeyframeGroup Lottie.LottieVector1D, Lottie.KeyframeGroup Lottie.LottieVector3D, Lottie.PathDirection;

@interface Lottie.Rectangle : Lottie.ShapeItem { // (Swift)
    /* instance variables */
    Lottie.PathDirection direction;
    Lottie.KeyframeGroup Lottie.LottieVector3D position;
    Lottie.KeyframeGroup Lottie.LottieVector3D size;
    Lottie.KeyframeGroup Lottie.LottieVector1D cornerRadius;
}

@end

#endif /* _TtC6Lottie9Rectangle_h */
