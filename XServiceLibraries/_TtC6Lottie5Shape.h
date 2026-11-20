//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6Lottie5Shape_h
#define _TtC6Lottie5Shape_h
@import Foundation;

#include "_TtC6Lottie9ShapeItem.h"

@class Lottie.KeyframeGroup Lottie.BezierPath, Lottie.PathDirection ?;

@interface Lottie.Shape : Lottie.ShapeItem { // (Swift)
    /* instance variables */
    Lottie.KeyframeGroup Lottie.BezierPath path;
    Lottie.PathDirection ? direction;
}

@end

#endif /* _TtC6Lottie5Shape_h */
