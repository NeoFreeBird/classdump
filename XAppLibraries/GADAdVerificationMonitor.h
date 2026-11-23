//
#ifndef GADAdVerificationMonitor_h
#define GADAdVerificationMonitor_h
@import Foundation;

#include "GADAdVerificationReporter.h"
#include "GADObserverCollection.h"
#include "GADWebAdView.h"

@class NSObject;

@interface GADAdVerificationMonitor : NSObject {
    /* instance variables */
    GADObserverCollection *_observers;
    GADWebAdView *_adView;
    GADAdVerificationReporter *_adVerificationReporter;
    struct atomic_flag { _Atomic _Bool _Value; } _beginAdSessionExecuted;
}

/* instance methods */
- (id)initWithAd:(id)ad adView:(id)view friendlyObstructionView:(id)view mediaType:(long long)type contentURL:(id)url impressionType:(unsigned long long)type adType:(id)type useJavaScriptSessionService:(_Bool)service;
- (void)dealloc;
- (void)beginAdSession;
- (void)adDidMakeImpression;
- (void)trackExpandView:(id)view;

@end

#endif /* GADAdVerificationMonitor_h */
