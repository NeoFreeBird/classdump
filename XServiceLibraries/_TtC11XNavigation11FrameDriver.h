//
#ifndef _TtC11XNavigation11FrameDriver_h
#define _TtC11XNavigation11FrameDriver_h
@import Foundation;

@class NSObject, XNavigation.FrameDriver.Curve, _$s12CoreGraphics7CGFloatVMn _$scSg ->, _$sSd, _$sSo13CADisplayLinkCSg;

@interface XNavigation.FrameDriver : NSObject { // (Swift)
    /* instance variables */
    __C.CADisplayLink? link;
    Swift.Double startTime;
    Swift.Double duration;
    XNavigation.FrameDriver.Curve curve;
    nominal type descriptor for CoreGraphics.CGFloat _$scSg -> onFrame;
}

/* instance methods */
- (void)step:(id)step;
- (id)init;

@end

#endif /* _TtC11XNavigation11FrameDriver_h */
