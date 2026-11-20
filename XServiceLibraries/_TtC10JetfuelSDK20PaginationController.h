//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10JetfuelSDK20PaginationController_h
#define _TtC10JetfuelSDK20PaginationController_h
@import Foundation;

@class JetfuelSDK.DOM _$s_ -> JetfuelSDK.Action _$stYaYbcSg, JetfuelSDK.PaginationController.RateLimiter, JetfuelSDK.ViewContext, Swift.Bool, _$s10Foundation3URLVMn ?, _$s7Combine9PublishedVMn JetfuelSDK.PaginationController.Status, _$s7Combine9PublishedVMn _$sySa -> JetfuelSDK.PaginationController.Page, _$sSSSg, _$sScTyyt _$ss5NeverOMn ?, _TtCs12_SwiftObject;

@interface JetfuelSDK.PaginationController : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> JetfuelSDK.PaginationController.Page _pages;
    nominal type descriptor for Combine.Published JetfuelSDK.PaginationController.Status _status;
    Swift.Bool useCache;
    JetfuelSDK.ViewContext context;
    nominal type descriptor for Foundation.URL ? feedURL;
    Swift.String? topCursor;
    Swift.String? bottomCursor;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? topTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? bottomTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? refreshTask;
    JetfuelSDK.PaginationController.RateLimiter rateLimiter;
    JetfuelSDK.DOM  first-element-marker  -> JetfuelSDK.Action _$stYaYbcSg $__lazy_storage_$_actionHandler;
}

@end

#endif /* _TtC10JetfuelSDK20PaginationController_h */
