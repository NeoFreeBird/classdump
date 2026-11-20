//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4Grok15GrokMediaLoader_h
#define _TtC4Grok15GrokMediaLoader_h
@import Foundation;

@class Grok.GrokMediaLoadFailureCache, _$sSDyS2SG, _$sSDySSScT -> Grok.GrokMediaLoadOutcome _$ss5NeverOMn, _$sShySSG, _$sSo20NSNotificationCenterC, _$sSo6NSLockC, _$sSo7NSCacheCySo8NSStringC Grok.GrokMediaLoader.CachedMedia, _$sSo8NSObject_pSg, _TtCs12_SwiftObject;

@interface Grok.GrokMediaLoader : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.NSCache empty-list __C.NSString Grok.GrokMediaLoader.CachedMedia cache;
    Grok.GrokMediaLoadFailureCache failures;
    Swift.Dictionary empty-list Swift.StringSwift.Task -> Grok.GrokMediaLoadOutcome nominal type descriptor for Swift.Never inFlightLoads;
    Swift.Set<Swift.String> supersededLoadKeys;
    [Swift.String : Swift.String] canonicalKeys;
    __C.NSLock lock;
    __C.NSNotificationCenter notificationCenter;
    __C.NSObject? backgroundObserver;
}

@end

#endif /* _TtC4Grok15GrokMediaLoader_h */
