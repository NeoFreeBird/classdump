//
#ifndef _TtC11XNavigation12PassProgress_h
#define _TtC11XNavigation12PassProgress_h
@import Foundation;

@class Swift.Bool, XNavigation.FrameTicker, XNavigation.TimingCurve ?, _$s12CoreGraphics7CGFloatVMn _$scSg ->, _$sSDySO XNavigation.PassProgress.FadeTrack, _$sSa -> XNavigation.PassProgress.MaterialTrack, _$sSo6UIViewC, _$syycSg, _TtCs12_SwiftObject;

@interface XNavigation.PassProgress : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> XNavigation.PassProgress.MaterialTrack materialTracks;
    Swift.Dictionary empty-list Swift.ObjectIdentifier XNavigation.PassProgress.FadeTrack fades;
    (() -> ())? beforeFrame;
    nominal type descriptor for CoreGraphics.CGFloat _$scSg -> afterFrame;
    __C.UIView probe;
    XNavigation.FrameTicker ticker;
    Swift.Bool isFinished;
    XNavigation.TimingCurve ? clock;
    Swift.Bool fadesRideAnimation;
}

@end

#endif /* _TtC11XNavigation12PassProgress_h */
