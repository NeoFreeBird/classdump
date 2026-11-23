//
#ifndef _TtC7XSports10TraySpring_h
#define _TtC7XSports10TraySpring_h
@import Foundation;

@class _$s12CoreGraphics7CGFloatVMn, _$s12CoreGraphics7CGFloatVMn _$scSg ->, _$sSd, _$sSo13CADisplayLinkCSg, _$syycSg, _TtCs12_SwiftObject;

@interface XSports.TraySpring : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat stiffness;
    nominal type descriptor for CoreGraphics.CGFloat damping;
    __C.CADisplayLink? link;
    nominal type descriptor for CoreGraphics.CGFloat value;
    nominal type descriptor for CoreGraphics.CGFloat velocity;
    nominal type descriptor for CoreGraphics.CGFloat target;
    Swift.Double lastTimestamp;
    nominal type descriptor for CoreGraphics.CGFloat _$scSg -> tick;
    (() -> ())? completion;
}

@end

#endif /* _TtC7XSports10TraySpring_h */
