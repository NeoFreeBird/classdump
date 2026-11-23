//
#ifndef BRZURLContext_h
#define BRZURLContext_h
@import Foundation;

@class /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift, NSDictionary, NSObject, NSURL, UIScene, UIViewController;

@interface BRZURLContext : NSObject { // (Swift)
    /* instance variables */
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift lock;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift codableExtras;
}

@property (nonatomic, readonly) long long channel;
@property (nonatomic, copy) NSURL *url;
@property (nonatomic) _Bool useWebView;
@property (nonatomic) _Bool isUniversalLink;
@property (nonatomic, readonly) NSDictionary *extras;
@property (nonatomic, retain) UIScene *targetScene;
@property (nonatomic, retain) UIViewController *targetViewController;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* BRZURLContext_h */
