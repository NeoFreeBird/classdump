//
#ifndef _TtC6Lottie15LottieAnimation_h
#define _TtC6Lottie15LottieAnimation_h
@import Foundation;

@class Lottie.AssetLibrary ?, Lottie.CoordinateSpace, Lottie.FontList ?, _$s12CoreGraphics7CGFloatVMn, _$sSDySS Lottie.Marker ?, _$sSS, _$sSa -> Lottie.Glyph ?, _$sSa -> Lottie.LayerModel, _$sSa -> Lottie.Marker ?, _$sSd, _TtCs12_SwiftObject;

@interface Lottie.LottieAnimation : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat startFrame;
    nominal type descriptor for CoreGraphics.CGFloat endFrame;
    Swift.Double framerate;
    Swift.String version;
    Lottie.CoordinateSpace type;
    Swift.Double width;
    Swift.Double height;
    Swift.Array -> Lottie.LayerModel layers;
    Swift.Array -> Lottie.Glyph ? glyphs;
    Lottie.FontList ? fonts;
    Lottie.AssetLibrary ? assetLibrary;
    Swift.Array -> Lottie.Marker ? markers;
    Swift.Dictionary empty-list Swift.String Lottie.Marker ? markerMap;
}

@end

#endif /* _TtC6Lottie15LottieAnimation_h */
