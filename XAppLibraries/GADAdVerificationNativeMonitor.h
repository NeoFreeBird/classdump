//
#ifndef GADAdVerificationNativeMonitor_h
#define GADAdVerificationNativeMonitor_h
@import Foundation;

#include "GADAdVerificationReporter.h"
#include "GADObserverCollection.h"
#include "GADWebViewController.h"

@class NSObject;

@interface GADAdVerificationNativeMonitor : NSObject {
    /* instance variables */
    GADObserverCollection *_observers;
    GADWebViewController *_webViewController;
    GADAdVerificationReporter *_adVerificationReporter;
    struct atomic_flag { _Atomic _Bool _Value; } _beginAdSessionExecuted;
}

/* instance methods */
- (id)initWithAd:(id)ad webViewController:(id)controller partnerName:(id)name contentURL:(id)url impressionType:(unsigned long long)type adType:(id)type useJavaScriptSessionService:(_Bool)service;
- (void)dealloc;
- (void)beginAdSession;
- (void)adDidMakeImpression;
- (void)adDidRecordClick;
- (void)setMonitoredView:(id)view;
- (void)trackExpandView:(id)view;

@end

#endif /* GADAdVerificationNativeMonitor_h */
