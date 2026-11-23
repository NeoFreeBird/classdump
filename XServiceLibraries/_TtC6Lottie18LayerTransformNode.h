//
#ifndef _TtC6Lottie18LayerTransformNode_h
#define _TtC6Lottie18LayerTransformNode_h
@import Foundation;

@class Lottie.AnimatorNode ?, Lottie.LayerTransformProperties, Lottie.NodeOutput, Swift.Bool, _$s12CoreGraphics7CGFloatVMn ?, _$sSf, _TtCs12_SwiftObject, __C.CATransform3D;

@interface Lottie.LayerTransformNode : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Lottie.NodeOutput outputNode;
    Lottie.LayerTransformProperties transformProperties;
    Lottie.AnimatorNode ? parentNode;
    Swift.Bool hasLocalUpdates;
    Swift.Bool hasUpstreamUpdates;
    nominal type descriptor for CoreGraphics.CGFloat ? lastUpdateFrame;
    Swift.Bool isEnabled;
    Swift.Float opacity;
    __C.CATransform3D localTransform;
    __C.CATransform3D globalTransform;
}

@end

#endif /* _TtC6Lottie18LayerTransformNode_h */
