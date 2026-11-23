//
#ifndef BRZFeatureFlags_h
#define BRZFeatureFlags_h
@import Foundation;

@class /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift, NSArray, NSObject;

@interface BRZFeatureFlags : NSObject { // (Swift)
    /* instance variables */
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift viewStore;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift _subscribers;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift __atomicFeatureFlagsDict;
}

@property (nonatomic, copy) NSArray *featureFlags;

/* instance methods */
- (void)requestRefresh;
- (void)requestRefreshWithCompletion:(id /* block */)completion;
- (id)featureFlagWithId:(id)id;
- (id)subscribeToUpdates:(id /* block */)updates;
- (void)logFeatureFlagImpressionWithId:(id)id;
- (id)init;

@end

#endif /* BRZFeatureFlags_h */
