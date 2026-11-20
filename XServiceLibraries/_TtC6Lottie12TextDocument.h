//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6Lottie12TextDocument_h
#define _TtC6Lottie12TextDocument_h
@import Foundation;

@class Lottie.LottieColor ?, Lottie.LottieVector3D ?, Lottie.TextJustification, _$sSS, _$sSbSg, _$sSd, _$sSdSg, _$sSi, _TtCs12_SwiftObject;

@interface Lottie.TextDocument : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String text;
    Swift.Double fontSize;
    Swift.String fontFamily;
    Lottie.TextJustification justification;
    Swift.Int tracking;
    Swift.Double lineHeight;
    Swift.Double? baseline;
    Lottie.LottieColor ? fillColorData;
    Lottie.LottieColor ? strokeColorData;
    Swift.Double? strokeWidth;
    Swift.Bool? strokeOverFill;
    Lottie.LottieVector3D ? textFramePosition;
    Lottie.LottieVector3D ? textFrameSize;
}

@end

#endif /* _TtC6Lottie12TextDocument_h */
