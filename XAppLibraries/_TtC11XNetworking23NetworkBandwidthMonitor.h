//
#ifndef _TtC11XNetworking23NetworkBandwidthMonitor_h
#define _TtC11XNetworking23NetworkBandwidthMonitor_h
@import Foundation;

@class NSObject;

@interface XNetworking.NetworkBandwidthMonitor : NSObject // (Swift)

/* class methods */
+ (_Bool)isDataSaverModeEnabledByUser;
+ (void)setIsDataSaverModeEnabledByUser:(_Bool)user;
+ (id /* block */)enableDataSaverModeHandler;
+ (void)setEnableDataSaverModeHandler:(id /* block */)handler;
+ (id /* block */)disableDataSaverModeHandler;
+ (void)setDisableDataSaverModeHandler:(id /* block */)handler;
+ (void)startMonitoring;

/* instance methods */
- (id)init;

@end

#endif /* _TtC11XNetworking23NetworkBandwidthMonitor_h */
