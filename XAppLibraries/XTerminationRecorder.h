//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
}

/* class methods */
+ (id)sharedRecorder;
+ (void)captureOpenSceneSessions;
+ (void)removeStoredData;

/* instance methods */
- (void)didReceiveDiagnosticPayloads:(id)payloads;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)applicationWillTerminate;
- (void)applicationDidReceiveMemoryWarning;
- (id)init;
- (void)startWithCrashlyticsCrash:(_Bool)crash;
- (void)startScribingWithProvider:(id /* block */)provider;

@end

#endif /* XTerminationRecorder_h */
