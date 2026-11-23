//
#ifndef TDTStartupPerformanceTest_h
#define TDTStartupPerformanceTest_h
@import Foundation;

#include "TDTPerformanceTest.h"

@interface TDTStartupPerformanceTest : TDTPerformanceTest {
    /* instance variables */
    id _notificationSender;
    _Bool _waitForUpdate;
    _Bool _receivedAppearNotification;
    _Bool _receivedUpdateNotification;
    double _totalAppDidFinishLaunchingTime;
    double _totalAppearTime;
    double _totalUpdateTime;
}

@property (readonly, nonatomic) unsigned long long startupIndex;
@property (readonly, nonatomic) unsigned long long startupCount;
@property (readonly, nonatomic) _Bool loadState;

/* instance methods */
- (id)init;
- (id)initWithParameters:(id)parameters;
- (void)startWithNotificationSender:(id)sender waitForUpdateNotification:(_Bool)notification;
- (void)_restart;
- (void)_checkStartupComplete;
- (void)_didAppear:(id)appear;
- (void)_didReceiveUpdate:(id)update;

@end

#endif /* TDTStartupPerformanceTest_h */
