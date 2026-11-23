//
#ifndef _TtC6Lottie6Stroke_h
#define _TtC6Lottie6Stroke_h
@import Foundation;

#include "_TtC6Lottie9ShapeItem.h"

@class Lottie.KeyframeGroup Lottie.LottieColor, Lottie.KeyframeGroup Lottie.LottieVector1D, Lottie.LineCap, Lottie.LineJoin, _$sSa -> Lottie.DashElement ?, _$sSd;

@interface Lottie.Stroke : Lottie.ShapeItem { // (Swift)
    /* instance variables */
    Lottie.KeyframeGroup Lottie.LottieVector1D opacity;
    Lottie.KeyframeGroup Lottie.LottieColor color;
    Lottie.KeyframeGroup Lottie.LottieVector1D width;
    Lottie.LineCap lineCap;
    Lottie.LineJoin lineJoin;
    Swift.Double miterLimit;
    Swift.Array -> Lottie.DashElement ? dashPattern;
}

@end

#endif /* _TtC6Lottie6Stroke_h */
