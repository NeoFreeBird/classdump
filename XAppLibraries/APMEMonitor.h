//
#ifndef APMEMonitor_h
#define APMEMonitor_h
@import Foundation;

#include "APMMonitor.h"

@class NSObject;

@interface APMEMonitor : NSObject {
    /* instance variables */
    APMMonitor *_monitor;
}

/* instance methods */
- (id)initWithMonitor:(id)monitor;
- (void)logWithLevel:(long long)level messageCode:(long long)code message:(id)message;
- (void)logWithLevel:(long long)level messageCode:(long long)code message:(id)message context:(id)context;
- (void)logWithLevel:(long long)level messageCode:(long long)code message:(id)message context:(id)context context:(id)context;
- (void)logWithLevel:(long long)level messageCode:(long long)code message:(id)message context:(id)context context:(id)context context:(id)context;
- (void)clearMonitoringData;

@end

#endif /* APMEMonitor_h */
