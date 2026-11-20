//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCC13XDesignSystem4Blur13ContentEffect_h
#define _TtCC13XDesignSystem4Blur13ContentEffect_h
@import Foundation;

@class XDesignSystem.BlurContentRampDelegate, _$s12CoreGraphics7CGFloatVMn, _$sSDySiySbcG, _$sSi, _$sSo7CALayerC, _TtCs12_SwiftObject;

@interface XDesignSystem.Blur.ContentEffect : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.CALayer layer;
    XDesignSystem.BlurContentRampDelegate rampDelegate;
    nominal type descriptor for CoreGraphics.CGFloat requestedRadius;
    Swift.Int requestCount;
    [Swift.Int : (Swift.Bool) -> ()] completions;
}

@end

#endif /* _TtCC13XDesignSystem4Blur13ContentEffect_h */
