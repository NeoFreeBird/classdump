//
#ifndef _TtC21TwitterUnifiedCardsUI26PlayableVisibilityListener_h
#define _TtC21TwitterUnifiedCardsUI26PlayableVisibilityListener_h
@import Foundation;

@class NSObject, Swift.Bool, TwitterUnifiedCardsUI0bC39DestinationBrowserPrefetchCacheProtocol_p, _$s10Foundation3URLVMn, _$sSd, _$sSo11TUCFeatures_p, _$sSo14TAFEventLogger_p;

@interface TwitterUnifiedCardsUI.PlayableVisibilityListener : NSObject { // (Swift)
    /* instance variables */
    __C.TAFEventLogger eventLogger;
    __C.TUCFeatures features;
    nominal type descriptor for Foundation.URL playableURL;
    TwitterUnifiedCardsUI0bC39DestinationBrowserPrefetchCacheProtocol_p cache;
    Swift.Double prefetchDelay;
    Swift.Bool isVisible;
    Swift.Bool hasPrefetched;
    Swift.Bool hasScribedEnd;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC21TwitterUnifiedCardsUI26PlayableVisibilityListener_h */
