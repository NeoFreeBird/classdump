//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6Lottie21PolygonNodeProperties_h
#define _TtC6Lottie21PolygonNodeProperties_h
@import Foundation;

@class Lottie.NodeProperty Lottie.LottieVector1D, Lottie.NodeProperty Lottie.LottieVector3D, Lottie.PathDirection, _$sSDySS Lottie.AnyNodeProperty, _$sSS, _$sSa -> Lottie.AnyNodeProperty, _$sSa -> Lottie.KeypathSearchable, _TtCs12_SwiftObject;

@interface Lottie.PolygonNodeProperties : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String keypathName;
    Swift.Array -> Lottie.KeypathSearchable childKeypaths;
    Swift.Dictionary empty-list Swift.String Lottie.AnyNodeProperty keypathProperties;
    Swift.Array -> Lottie.AnyNodeProperty properties;
    Lottie.PathDirection direction;
    Lottie.NodeProperty Lottie.LottieVector3D position;
    Lottie.NodeProperty Lottie.LottieVector1D outerRadius;
    Lottie.NodeProperty Lottie.LottieVector1D outerRoundedness;
    Lottie.NodeProperty Lottie.LottieVector1D rotation;
    Lottie.NodeProperty Lottie.LottieVector1D points;
}

@end

#endif /* _TtC6Lottie21PolygonNodeProperties_h */
