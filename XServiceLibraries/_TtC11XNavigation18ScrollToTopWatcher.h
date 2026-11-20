//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11XNavigation18ScrollToTopWatcher_h
#define _TtC11XNavigation18ScrollToTopWatcher_h
@import Foundation;

@class Swift.Bool, XNavigation.DisplayLinkDriver ?, _$s12CoreGraphics7CGFloatVMn, _$s12CoreGraphics7CGFloatVMn ?, _$sSi, _$sSo12UIScrollViewCSgXw, _$sySbc, _TtCs12_SwiftObject;

@interface XNavigation.ScrollToTopWatcher : Swift._SwiftObject { // (Swift)
    /* instance variables */
    weak __C.UIScrollView? scrollView;
    nominal type descriptor for CoreGraphics.CGFloat targetOffsetY;
    (Swift.Bool) -> () completion;
    XNavigation.DisplayLinkDriver ? displayLinkDriver;
    nominal type descriptor for CoreGraphics.CGFloat ? previousTickOffsetY;
    Swift.Int stallCount;
    Swift.Bool isFinished;
}

@end

#endif /* _TtC11XNavigation18ScrollToTopWatcher_h */
