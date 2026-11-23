//
#ifndef _TtC13XPalmLiveness18OneEuroPointFilter_h
#define _TtC13XPalmLiveness18OneEuroPointFilter_h
@import Foundation;

@class XPalmLiveness.OneEuroPointFilter.LowPassFilter, _$sSd, _$sSdSg, _TtCs12_SwiftObject, __C.CGPoint;

@interface XPalmLiveness.OneEuroPointFilter : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Double minCutoff;
    Swift.Double beta;
    Swift.Double derivativeCutoff;
    Swift.Double? lastTimestamp;
    __C.CGPoint lastValue;
    XPalmLiveness.OneEuroPointFilter.LowPassFilter value;
    XPalmLiveness.OneEuroPointFilter.LowPassFilter derivative;
}

@end

#endif /* _TtC13XPalmLiveness18OneEuroPointFilter_h */
