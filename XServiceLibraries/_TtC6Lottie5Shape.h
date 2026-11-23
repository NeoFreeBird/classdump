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
