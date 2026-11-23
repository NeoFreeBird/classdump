//
#ifndef TASConfiguration_h
#define TASConfiguration_h
@import Foundation;

#include "TASActionBackgroundTaskHandleProvider-Protocol.h"
#include "TASApplicationStateMonitor-Protocol.h"
#include "_TtP20TwitterActionService9TASLogger_-Protocol.h"

@class NSObject;

@interface TASConfiguration : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 stateQueue;
    B24@0:8@"NSString"16 appStateMonitor;
    B24@0:8@"NSString"16 stateQueue_backgroundTaskHandleProvider;
    B24@0:8@"NSString"16 stateQueue_beginExecutionTimeout;
    B24@0:8@"NSString"16 stateQueue_lastApplicationState;
}

@property (nonatomic) _Bool assertsEnabled;
@property (nonatomic, retain) id <TwitterActionService.TASLogger> logger;
@property (nonatomic, retain) id <TASActionBackgroundTaskHandleProvider> backgroundTaskHandleProvider;
@property (nonatomic) double beginExecutionTimeout;
@property (nonatomic, retain) id <TASApplicationStateMonitor> applicationStateMonitor;
@property (nonatomic) long long lastApplicationState;

/* instance methods */
- (id)init;

@end

#endif /* TASConfiguration_h */
