//
#ifndef _TtC6Lottie4Trim_h
#define _TtC6Lottie4Trim_h
@import Foundation;

#include "_TtC6Lottie9ShapeItem.h"

@class Lottie.KeyframeGroup Lottie.LottieVector1D, Lottie.TrimType;

@interface Lottie.Trim : Lottie.ShapeItem { // (Swift)
    /* instance variables */
    Lottie.KeyframeGroup Lottie.LottieVector1D start;
    Lottie.KeyframeGroup Lottie.LottieVector1D end;
    Lottie.KeyframeGroup Lottie.LottieVector1D offset;
    Lottie.TrimType trimType;
}

@end

#endif /* _TtC6Lottie4Trim_h */
