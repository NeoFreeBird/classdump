//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6Lottie8Repeater_h
#define _TtC6Lottie8Repeater_h
@import Foundation;

#include "_TtC6Lottie9ShapeItem.h"

@class Lottie.KeyframeGroup Lottie.LottieVector1D, Lottie.KeyframeGroup Lottie.LottieVector3D;

@interface Lottie.Repeater : Lottie.ShapeItem { // (Swift)
    /* instance variables */
    Lottie.KeyframeGroup Lottie.LottieVector1D copies;
    Lottie.KeyframeGroup Lottie.LottieVector1D offset;
    Lottie.KeyframeGroup Lottie.LottieVector1D startOpacity;
    Lottie.KeyframeGroup Lottie.LottieVector1D endOpacity;
    Lottie.KeyframeGroup Lottie.LottieVector1D rotationX;
    Lottie.KeyframeGroup Lottie.LottieVector1D rotationY;
    Lottie.KeyframeGroup Lottie.LottieVector1D rotationZ;
    Lottie.KeyframeGroup Lottie.LottieVector3D anchorPoint;
    Lottie.KeyframeGroup Lottie.LottieVector3D position;
    Lottie.KeyframeGroup Lottie.LottieVector3D scale;
}

@end

#endif /* _TtC6Lottie8Repeater_h */
