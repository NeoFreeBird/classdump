//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
