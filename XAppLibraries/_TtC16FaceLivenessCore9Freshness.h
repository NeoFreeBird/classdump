//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16FaceLivenessCore9Freshness_h
#define _TtC16FaceLivenessCore9Freshness_h
@import Foundation;

@class _$s12CoreGraphics7CGFloatVMn, _$sSa -> FaceLivenessCore.FaceLivenessSession.DisplayColor, _$sSd, _$sSo7NSTimerCSg, _TtCs12_SwiftObject;

@interface FaceLivenessCore.Freshness : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> FaceLivenessCore.FaceLivenessSession.DisplayColor colorSequences;
    Swift.Double tickRate;
    nominal type descriptor for CoreGraphics.CGFloat initialAlpha;
    nominal type descriptor for CoreGraphics.CGFloat secondaryAlpha;
    __C.NSTimer? timer;
}

@end

#endif /* _TtC16FaceLivenessCore9Freshness_h */
