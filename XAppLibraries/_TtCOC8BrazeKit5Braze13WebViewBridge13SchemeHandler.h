//
#ifndef _TtCOC8BrazeKit5Braze13WebViewBridge13SchemeHandler_h
#define _TtCOC8BrazeKit5Braze13WebViewBridge13SchemeHandler_h
@import Foundation;

@class BrazeKit.Braze ?, BrazeKit.Braze.Channel ?, BrazeKit.Braze.WebViewBridge.QueryHandler, NSObject, _$syyc;

@interface BrazeKit.Braze.WebViewBridge.SchemeHandler : NSObject { // (Swift)
    /* instance variables */
    BrazeKit.Braze.Channel ? channel;
    BrazeKit.Braze.WebViewBridge.SchemeHandler.Error function type (escaping) logError;
    () -> () closeMessage;
    BrazeKit.Braze.WebViewBridge.QueryHandler queryHandler;
    BrazeKit.Braze ? braze;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtCOC8BrazeKit5Braze13WebViewBridge13SchemeHandler_h */
