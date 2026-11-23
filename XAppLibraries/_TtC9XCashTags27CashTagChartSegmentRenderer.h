//
#ifndef _TtC9XCashTags27CashTagChartSegmentRenderer_h
#define _TtC9XCashTags27CashTagChartSegmentRenderer_h
@import Foundation;

@class XCashTags.CashTagChartSessionType, _$sSo12CAShapeLayerC, _$sSo15CAGradientLayerC, _$sSo7CALayerC, _TtCs12_SwiftObject, __C.CGPoint;

@interface XCashTags.CashTagChartSegmentRenderer : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XCashTags.CashTagChartSessionType type;
    __C.CGPoint collapseDot;
    __C.CAShapeLayer lineLayer;
    __C.CAShapeLayer dimLineLayer;
    __C.CAGradientLayer gradientLayer;
    __C.CALayer gradientMaskContainerLayer;
    __C.CAShapeLayer gradientMaskLayer;
    __C.CAShapeLayer gradientLeftMaskLayer;
    __C.CAShapeLayer gradientLeftMaskClipLayer;
    __C.CAShapeLayer lineMaskLayer;
}

@end

#endif /* _TtC9XCashTags27CashTagChartSegmentRenderer_h */
