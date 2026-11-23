//
#ifndef _TtC6Lottie14GradientStroke_h
#define _TtC6Lottie14GradientStroke_h
@import Foundation;

#include "_TtC6Lottie9ShapeItem.h"

@class Lottie.GradientType, Lottie.KeyframeGroup Lottie.LottieVector1D, Lottie.KeyframeGroup Lottie.LottieVector1D ?, Lottie.KeyframeGroup Lottie.LottieVector3D, Lottie.KeyframeGroup _$sSaySdG, Lottie.LineCap, Lottie.LineJoin, _$sSa -> Lottie.DashElement ?, _$sSd, _$sSi;

@interface Lottie.GradientStroke : Lottie.ShapeItem { // (Swift)
    /* instance variables */
    Lottie.KeyframeGroup Lottie.LottieVector1D opacity;
    Lottie.KeyframeGroup Lottie.LottieVector3D startPoint;
    Lottie.KeyframeGroup Lottie.LottieVector3D endPoint;
    Lottie.GradientType gradientType;
    Lottie.KeyframeGroup Lottie.LottieVector1D ? highlightLength;
    Lottie.KeyframeGroup Lottie.LottieVector1D ? highlightAngle;
    Swift.Int numberOfColors;
    Lottie.KeyframeGroup [Swift.Double] colors;
    Lottie.KeyframeGroup Lottie.LottieVector1D width;
    Lottie.LineCap lineCap;
    Lottie.LineJoin lineJoin;
    Swift.Double miterLimit;
    Swift.Array -> Lottie.DashElement ? dashPattern;
}

@end

#endif /* _TtC6Lottie14GradientStroke_h */
