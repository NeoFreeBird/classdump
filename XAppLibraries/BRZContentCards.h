//
#ifndef BRZContentCards_h
#define BRZContentCards_h
@import Foundation;

@class /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift, NSArray, NSDate, NSObject;

@interface BRZContentCards : NSObject { // (Swift)
    /* instance variables */
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift viewStore;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift environment;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift _subscribers;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift __atomicCards;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift __atomicLastUpdate;
}

@property (nonatomic, readonly) NSArray *cards;
@property (nonatomic, readonly) NSArray *unviewedCards;
@property (nonatomic, readonly) NSDate *lastUpdate;

/* instance methods */
- (void)requestRefresh;
- (void)requestRefreshWithCompletion:(id /* block */)completion;
- (id)subscribeToUpdates:(id /* block */)updates;
- (id)init;

@end

#endif /* BRZContentCards_h */
