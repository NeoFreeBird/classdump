//
#ifndef GADWKScriptMessageHandler_h
#define GADWKScriptMessageHandler_h
@import Foundation;

#include "GADWebViewController.h"
#include "WKScriptMessageHandler-Protocol.h"

@class NSObject, NSString;

@interface GADWKScriptMessageHandler : NSObject <WKScriptMessageHandler> {
    /* instance variables */
    GADWebViewController *_webViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithWebViewController:(id)controller;
- (void)userContentController:(id)controller didReceiveScriptMessage:(id)message;

@end

#endif /* GADWKScriptMessageHandler_h */
