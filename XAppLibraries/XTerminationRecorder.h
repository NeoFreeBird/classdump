//
#ifndef XTerminationRecorder_h
#define XTerminationRecorder_h
@import Foundation;

#include "MXMetricManagerSubscriber-Protocol.h"

@class NSObject;

@interface XTerminationRecorder : NSObject <MXMetricManagerSubscriber> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 queue;
    @40@0:8:16@24@32 store;
    @40@0:8:16@24@32 state;
    @40@0:8:16@24@32 scribeProvider;
    @40@0:8:16@24@32 recordsLifecycleWithoutWaiting;
    @40@0:8:16@24@32 scribesDetails;
}

/* class methods */
+ (id)sharedRecorder;
+ (void)captureOpenSceneSessions;
+ (void)removeStoredData;
+ (void)noteLaunchOptions:(id)options;
+ (void)noteBackgroundEntry:(id)entry;

/* instance methods */
- (void)didReceiveDiagnosticPayloads:(id)payloads;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)applicationWillTerminate;
- (void)applicationDidReceiveMemoryWarning;
- (id)init;
- (void)startWithCrashlyticsCrash:(_Bool)crash recordsLifecycleWithoutWaiting:(_Bool)waiting scribesDetails:(_Bool)details;
- (void)startScribingWithProvider:(id /* block */)provider;

@end

#endif /* XTerminationRecorder_h */
