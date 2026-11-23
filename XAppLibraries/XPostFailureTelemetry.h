//
#ifndef XPostFailureTelemetry_h
#define XPostFailureTelemetry_h
@import Foundation;

@class NSObject;

@interface XPostFailureTelemetry : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 telemetry;
}

/* class methods */
+ (id)logWithDecision:(id)decision composition:(id)composition error:(id)error featureSwitches:(id)switches scribe:(id)scribe;

/* instance methods */
- (void)logAlertPresentationSucceeded:(_Bool)succeeded;
- (id)init;

@end

#endif /* XPostFailureTelemetry_h */
