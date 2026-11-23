//
#ifndef _TtC10TFNUISwift18HornedOverlayLayer_h
#define _TtC10TFNUISwift18HornedOverlayLayer_h
@import Foundation;

@class CAShapeLayer, TFNUISwift.HornedEdge, _$s12CoreGraphics7CGFloatVMn, __C.CGRect;

@interface TFNUISwift.HornedOverlayLayer : CAShapeLayer { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat hornRadius;
    TFNUISwift.HornedEdge edge;
    __C.CGRect calculatedBounds;
}

/* instance methods */
- (id)initWithLayer:(id)layer;
- (id)initWithCoder:(id)coder;
- (void)layoutSublayers;
- (id)init;

@end

#endif /* _TtC10TFNUISwift18HornedOverlayLayer_h */
