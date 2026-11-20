//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10TFNUISwift17HornedStrokeLayer_h
#define _TtC10TFNUISwift17HornedStrokeLayer_h
@import Foundation;

@class CAShapeLayer, TFNUISwift.HornedEdge, _$s12CoreGraphics7CGFloatVMn, __C.CGRect;

@interface TFNUISwift.HornedStrokeLayer : CAShapeLayer { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat radius;
    TFNUISwift.HornedEdge edge;
    __C.CGRect calculatedBounds;
}

/* instance methods */
- (id)initWithLayer:(id)layer;
- (id)initWithCoder:(id)coder;
- (void)layoutSublayers;
- (id)init;

@end

#endif /* _TtC10TFNUISwift17HornedStrokeLayer_h */
