//
#ifndef BRZContentCardContext_h
#define BRZContentCardContext_h
@import Foundation;

@class /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift, NSObject;

@interface BRZContentCardContext : NSObject { // (Swift)
    /* instance variables */
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift _logImpression;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift _logClick;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift _processClickAction;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift _logDismissed;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift _logError;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift loadImage;
}

/* instance methods */
- (id)initWithLogImpression:(id /* block */)impression logClick:(id /* block */)click processClickAction:(id /* block */)action logDismissed:(id /* block */)dismissed logError:(id /* block */)error loadImage:(id /* block */)image;
- (id)initWithCardRaw:(id)raw using:(id)_using;
- (id)loadImageWithCompletion:(id /* block */)completion;
- (void)logImpression;
- (void)logClick;
- (void)processClickActionWithURL:(id)url useWebView:(_Bool)view;
- (void)logDismissed;
- (void)logError:(id)error;
- (id)init;

@end

#endif /* BRZContentCardContext_h */
