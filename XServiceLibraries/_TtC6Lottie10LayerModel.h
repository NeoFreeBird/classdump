//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6Lottie10LayerModel_h
#define _TtC6Lottie10LayerModel_h
@import Foundation;

@class Lottie.BlendMode, Lottie.CoordinateSpace, Lottie.LayerType, Lottie.MatteType ?, Lottie.Transform, Swift.Bool, _$sSS, _$sSa -> Lottie.LayerEffect, _$sSa -> Lottie.LayerStyle, _$sSa -> Lottie.Mask ?, _$sSd, _$sSi, _$sSiSg, _TtCs12_SwiftObject;

@interface Lottie.LayerModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String name;
    Swift.Int index;
    Lottie.LayerType type;
    Lottie.CoordinateSpace coordinateSpace;
    Swift.Double inFrame;
    Swift.Double outFrame;
    Swift.Double startTime;
    Lottie.Transform transform;
    Swift.Int? parent;
    Lottie.BlendMode blendMode;
    Swift.Array -> Lottie.Mask ? masks;
    Swift.Double timeStretch;
    Lottie.MatteType ? matte;
    Swift.Bool hidden;
    Swift.Array -> Lottie.LayerStyle styles;
    Swift.Array -> Lottie.LayerEffect effects;
}

@end

#endif /* _TtC6Lottie10LayerModel_h */
