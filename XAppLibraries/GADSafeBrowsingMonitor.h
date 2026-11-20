//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADSafeBrowsingMonitor_h
#define GADSafeBrowsingMonitor_h
@import Foundation;

#include "GADEventContext.h"
#include "GADObserverCollection.h"
#include "GADSafeBrowsingReport.h"

@class NSObject, NSURL;

@interface GADSafeBrowsingMonitor : NSObject {
    /* instance variables */
    GADObserverCollection *_observers;
    GADEventContext *_context;
    NSURL *_reportURL;
    _Bool _shouldReportMaliciousAds;
    _Bool _shouldReportBenignAds;
    GADSafeBrowsingReport *_report;
}

/* instance methods */
- (id)initWithAdRequestTransaction:(id)transaction baseURL:(id)url monitoredContext:(id)context configuration:(id)configuration;
- (void)dealloc;
- (void)observeNotificationName:(id)name usingBlock:(id /* block */)block;
- (void)sendReport;

@end

#endif /* GADSafeBrowsingMonitor_h */
