//
#ifndef GADAdVerificationReporter_h
#define GADAdVerificationReporter_h
@import Foundation;

#include "GADOMIDAdSession.h"
#include "GADOMIDJavaScriptSessionService.h"
#include "GADObserverCollection.h"
#include "GADWebViewController.h"

@class NSMutableArray, NSObject, NSString, UIView;

@interface GADAdVerificationReporter : NSObject {
    /* instance variables */
    GADOMIDAdSession *_adSession;
    GADOMIDJavaScriptSessionService *_javaScriptSessionService;
    NSMutableArray *_monitoredViews;
    GADObserverCollection *_observers;
    UIView *_friendlyObstructionView;
    long long _mediaType;
    UIView *_currentMonitoredView;
    GADWebViewController *_webViewController;
    NSString *_contentURL;
    NSString *_adType;
    unsigned long long _impressionType;
    _Bool _useJavaScriptSessionService;
}

/* instance methods */
- (id)initWithWebViewController:(id)controller mediaType:(long long)type friendlyObstructionView:(id)view contentURL:(id)url impressionType:(unsigned long long)type adType:(id)type useJavaScriptSessionService:(_Bool)service;
- (void)beginAdSession;
- (void)endAdSession;
- (void)setOMSessionView:(id)view;
- (void)addFriendlyObstructionInSession:(id)session purpose:(unsigned long long)purpose detailedReason:(id)reason error:(id)error;
- (void)setMonitoredView:(id)view;
- (void)addExpandView:(id)view presenter:(id)presenter;
- (void)stopTrackingAdVerificationView:(id)view;
- (void)cleanUpDeallocatedMonitoredViews;

@end

#endif /* GADAdVerificationReporter_h */
