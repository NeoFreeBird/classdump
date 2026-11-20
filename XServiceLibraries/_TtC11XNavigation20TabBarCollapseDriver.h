//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11XNavigation20TabBarCollapseDriver_h
#define _TtC11XNavigation20TabBarCollapseDriver_h
@import Foundation;

@class Swift.Bool, XNavigation.DisplayLinkDriver ?, XNavigation.TabBarFrameClock, XNavigation.TabBarSpring, _$s12CoreGraphics7CGFloatVMn, _TtCs12_SwiftObject;

@interface XNavigation.TabBarCollapseDriver : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Bool isLatched;
    Swift.Bool isResizing;
    XNavigation.TabBarChromeMotion function type (escaping) onRender;
    XNavigation.TabBarSpring morphSpring;
    XNavigation.TabBarSpring scaleSpring;
    XNavigation.TabBarSpring resizeSpring;
    XNavigation.TabBarFrameClock clock;
    XNavigation.DisplayLinkDriver ? displayLinkDriver;
    nominal type descriptor for CoreGraphics.CGFloat progressTarget;
    Swift.Bool isCatchingUpScale;
}

@end

#endif /* _TtC11XNavigation20TabBarCollapseDriver_h */
