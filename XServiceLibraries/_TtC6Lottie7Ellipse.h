//
#ifndef _TtC6Lottie7Ellipse_h
#define _TtC6Lottie7Ellipse_h
@import Foundation;

#include "_TtC6Lottie9ShapeItem.h"

@class Lottie.KeyframeGroup Lottie.LottieVector3D, Lottie.PathDirection;

@interface Lottie.Ellipse : Lottie.ShapeItem { // (Swift)
    /* instance variables */
    Lottie.PathDirection direction;
    Lottie.KeyframeGroup Lottie.LottieVector3D position;
    Lottie.KeyframeGroup Lottie.LottieVector3D size;
}

@end

#endif /* _TtC6Lottie7Ellipse_h */
