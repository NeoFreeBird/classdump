//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef BRZBanners_h
#define BRZBanners_h
@import Foundation;

@class Chat.DidEndCall, NSObject;

@interface BRZBanners : NSObject { // (Swift)
    /* instance variables */
    oneway _Atomic Chat.DidEndCall _bannerPlacements;
    oneway _Atomic Chat.DidEndCall viewStore;
    oneway _Atomic Chat.DidEndCall environment;
    oneway _Atomic Chat.DidEndCall _subscribers;
}

/* instance methods */
- (void)requestBannersRefreshForPlacementIds:(id)ids completion:(id /* block */)completion;
- (void)requestBannersRefreshForPlacementIds:(id)ids;
- (void)getBannerFor:(id)_for completion:(id /* block */)completion;
- (id)subscribeToUpdates:(id /* block */)updates;
- (void)registerView:(id)view;
- (id)init;

@end

#endif /* BRZBanners_h */
