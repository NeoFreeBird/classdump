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
