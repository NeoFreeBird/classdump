//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6Lottie4Fill_h
#define _TtC6Lottie4Fill_h
@import Foundation;

#include "_TtC6Lottie9ShapeItem.h"

@class Lottie.FillRule, Lottie.KeyframeGroup Lottie.LottieColor, Lottie.KeyframeGroup Lottie.LottieVector1D;

@interface Lottie.Fill : Lottie.ShapeItem { // (Swift)
    /* instance variables */
    Lottie.KeyframeGroup Lottie.LottieVector1D opacity;
    Lottie.KeyframeGroup Lottie.LottieColor color;
    Lottie.FillRule fillRule;
}

@end

#endif /* _TtC6Lottie4Fill_h */
