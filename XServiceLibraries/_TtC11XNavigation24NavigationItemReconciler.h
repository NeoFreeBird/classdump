//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11XNavigation24NavigationItemReconciler_h
#define _TtC11XNavigation24NavigationItemReconciler_h
@import Foundation;

@class XNavigation.NavigationItemSnapshot ?, _$sSo16UINavigationItemCSgXw, _$sySbcSg, _$syycSg, _TtCs12_SwiftObject, __C.CFRunLoopObserver ?;

@interface XNavigation.NavigationItemReconciler : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ((Swift.Bool) -> ())? onChange;
    (() -> ())? onTurn;
    weak __C.UINavigationItem? navigationItem;
    XNavigation.NavigationItemSnapshot ? snapshot;
    __C.CFRunLoopObserver ? observer;
}

@end

#endif /* _TtC11XNavigation24NavigationItemReconciler_h */
