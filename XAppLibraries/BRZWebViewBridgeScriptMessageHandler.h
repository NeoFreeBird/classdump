//
#ifndef BRZWebViewBridgeScriptMessageHandler_h
#define BRZWebViewBridgeScriptMessageHandler_h
@import Foundation;

#include "WKScriptMessageHandler-Protocol.h"

@class /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift, NSObject;

@interface BRZWebViewBridgeScriptMessageHandler : NSObject <WKScriptMessageHandler> { // (Swift)
    /* instance variables */
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift channel;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift braze;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift logClick;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift logError;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift closeMessage;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift setBannerHeight;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift adHocCompletionHandlers;
}

/* class methods */
+ (id)name;
+ (id)script;

/* instance methods */
- (id)initWithLogClick:(id /* block */)click logError:(id /* block */)error closeMessage:(id /* block */)message braze:(id)braze;
- (id)initWithLogClick:(id /* block */)click logError:(id /* block */)error closeMessage:(id /* block */)message setBannerHeight:(id /* block */)height braze:(id)braze;
- (void)userContentController:(id)controller didReceiveScriptMessage:(id)message;
- (id)init;

@end

#endif /* BRZWebViewBridgeScriptMessageHandler_h */
