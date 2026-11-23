//
#ifndef GADPAWAppLevelSignalsController_h
#define GADPAWAppLevelSignalsController_h
@import Foundation;

#include "GADObserverCollection.h"
#include "WKScriptMessageHandler-Protocol.h"

@class NSObject, NSString, WKWebView;

@interface GADPAWAppLevelSignalsController : NSObject <WKScriptMessageHandler> {
    /* instance variables */
    GADObserverCollection *_observers;
    WKWebView *_weakWebView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)registerWebView:(id)view;
- (void)refreshWebViewGlobals;
- (void)userContentController:(id)controller didReceiveScriptMessage:(id)message;

@end

#endif /* GADPAWAppLevelSignalsController_h */
