//
#ifndef BRZInAppMessageContext_h
#define BRZInAppMessageContext_h
@import Foundation;

@class /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift, NSObject, NSString;

@interface BRZInAppMessageContext : NSObject { // (Swift)
    /* instance variables */
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift lock;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift _logImpression;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift _logClick;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift _processClickAction;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift _logError;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift _getLocalAssets;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift _withLocalAssets;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift multipleLogClickEnabled;
}

@property (nonatomic, readonly) NSString *userID;
@property (nonatomic, readonly) long long userIDMatchBehavior;
@property (nonatomic, readonly) _Bool valid;
@property (nonatomic, readonly) id braze;

/* instance methods */
- (id)initWithLogImpression:(id /* block */)impression logClick:(id /* block */)click processClickAction:(id /* block */)action logError:(id /* block */)error braze:(id /* block */)braze getLocalAssets:(id /* block */)assets withLocalAssets:(id /* block */)assets multipleLogClickEnabled:(_Bool)enabled;
- (id)initWithUserID:(id)id userIDMatchBehavior:(long long)behavior logImpression:(id /* block */)impression logClick:(id /* block */)click processClickAction:(id /* block */)action logError:(id /* block */)error braze:(id /* block */)braze getLocalAssets:(id /* block */)assets withLocalAssets:(id /* block */)assets multipleLogClickEnabled:(_Bool)enabled;
- (id)initWithMessageRaw:(id)raw using:(id)_using;
- (id)initWithMessageRaw:(id)raw using:(id)_using userID:(id)id userIDMatchBehavior:(long long)behavior;
- (void)logClick;
- (void)logClickWithButtonId:(id)id;
- (void)processClickAction:(long long)action url:(id)url useWebView:(_Bool)view;
- (void)processClickAction:(long long)action url:(id)url useWebView:(_Bool)view target:(id)target;
- (id)getLocalAssets:(id)assets destinationURL:(id)url completionHandler:(id /* block */)handler;
- (id)withLocalAssets:(id)assets destinationURL:(id)url completionHandler:(id /* block */)handler;
- (void)logImpression;
- (void)logError:(id)error;
- (void)logErrorFlattened:(id)flattened;
- (void)discard;
- (id)init;

@end

#endif /* BRZInAppMessageContext_h */
