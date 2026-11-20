//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10JetfuelSDK11WebViewPool_h
#define _TtC10JetfuelSDK11WebViewPool_h
@import Foundation;

@class JetfuelSDK.LRUCache _$sSOSo9WKWebViewC, _$sSo6NSLockC, _TtCs12_SwiftObject;

@interface JetfuelSDK.WebViewPool : Swift._SwiftObject { // (Swift)
    /* instance variables */
    JetfuelSDK.LRUCache Swift.ObjectIdentifier__C.WKWebView cache;
    __C.NSLock lock;
}

@end

#endif /* _TtC10JetfuelSDK11WebViewPool_h */
