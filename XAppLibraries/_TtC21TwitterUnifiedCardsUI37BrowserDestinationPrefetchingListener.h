//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC21TwitterUnifiedCardsUI37BrowserDestinationPrefetchingListener_h
#define _TtC21TwitterUnifiedCardsUI37BrowserDestinationPrefetchingListener_h
@import Foundation;

@class Swift.Bool, TwitterUnifiedCardsUI0bC39DestinationBrowserPrefetchCacheProtocol_p, _$s10Foundation9IndexPathVMn, _$s12CoreGraphics7CGFloatVMn, _$sSS, _$sSa -> _$s10Foundation3URLVMn, _$sSo14TAFEventLogger_p, _$sSo34TUCBrowserDestinationHandlerHelper_p, _TtCs12_SwiftObject;

@interface TwitterUnifiedCardsUI.BrowserDestinationPrefetchingListener : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat requireLingerDuration;
    Swift.Bool likelyOpenLinkEnabled;
    Swift.Array -> nominal type descriptor for Foundation.URL urls;
    TwitterUnifiedCardsUI0bC39DestinationBrowserPrefetchCacheProtocol_p cache;
    __C.TAFEventLogger eventLogger;
    __C.TUCBrowserDestinationHandlerHelper helper;
    nominal type descriptor for Foundation.IndexPath indexPath;
    Swift.String impressionId;
    Swift.Bool isVisible;
    Swift.Bool didPreload;
}

@end

#endif /* _TtC21TwitterUnifiedCardsUI37BrowserDestinationPrefetchingListener_h */
