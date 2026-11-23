//
#ifndef BRZBanners_h
#define BRZBanners_h
@import Foundation;

@class /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift, NSObject;

@interface BRZBanners : NSObject { // (Swift)
    /* instance variables */
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift _bannerPlacements;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift viewStore;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift environment;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift _subscribers;
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
