//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports21SportsHubChromeScroll_h
#define _TtC7XSports21SportsHubChromeScroll_h
@import Foundation;

@class NSObject, Swift.Bool, XSports.SportsScheduleCarouselStickyHeader ?, XSports.TraySpring, _$s10Foundation21NSKeyValueObservationCMn ?, _$s12CoreGraphics7CGFloatVMn, _$s12CoreGraphics7CGFloatVMn _$scSg ->, _$sSo12UIScrollViewCSgXw, _$sSo13CADisplayLinkCSg;

@interface XSports.SportsHubChromeScroll : NSObject { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat _$scSg -> onOffsetChange;
    nominal type descriptor for CoreGraphics.CGFloat offset;
    nominal type descriptor for CoreGraphics.CGFloat chromeHeight;
    Swift.Bool isEnabled;
    weak __C.UIScrollView? scrollView;
    XSports.SportsScheduleCarouselStickyHeader ? pinnedHeader;
    nominal type descriptor for Foundation.NSKeyValueObservation ? observation;
    nominal type descriptor for CoreGraphics.CGFloat previousContentOffset;
    Swift.Bool isPinning;
    __C.CADisplayLink? settleLink;
    XSports.TraySpring spring;
}

/* instance methods */
- (id)init;
- (void)voiceOverStatusDidChange;

@end

#endif /* _TtC7XSports21SportsHubChromeScroll_h */
