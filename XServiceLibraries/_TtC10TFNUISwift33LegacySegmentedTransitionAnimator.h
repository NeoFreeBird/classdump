//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10TFNUISwift33LegacySegmentedTransitionAnimator_h
#define _TtC10TFNUISwift33LegacySegmentedTransitionAnimator_h
@import Foundation;

@class _$s12CoreGraphics7CGFloatVMn, _$sSd, _$sSdSg, _$sSo13CADisplayLinkCSg, _$syyc, _TtCs12_SwiftObject;

@interface TFNUISwift.LegacySegmentedTransitionAnimator : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat from;
    nominal type descriptor for CoreGraphics.CGFloat to;
    Swift.Double duration;
    nominal type descriptor for CoreGraphics.CGFloat function type (escaping) onTick;
    () -> () onComplete;
    __C.CADisplayLink? displayLink;
    Swift.Double accumulatedElapsed;
    Swift.Double? lastTickTimestamp;
}

/* instance methods */
- (void)tick:(id)tick;

@end

#endif /* _TtC10TFNUISwift33LegacySegmentedTransitionAnimator_h */
