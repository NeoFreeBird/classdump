//
#ifndef TFSScribeDeviceStatusProvider_h
#define TFSScribeDeviceStatusProvider_h
@import Foundation;

#include "TFSTimer.h"

@class CTTelephonyNetworkInfo, NSDictionary, NSMutableDictionary, NSObject;
@protocol OS_nw_path_monitor;

@interface TFSScribeDeviceStatusProvider : NSObject {
    /* instance variables */
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSDictionary *_cachedStatus;
    NSMutableDictionary *_eventDrivenStatus;
    TFSTimer *_timer;
    NSObject<OS_nw_path_monitor> *_networkMonitor;
    _Bool _storageInfoEnabled;
    CTTelephonyNetworkInfo *_telephonyInfo;
}

/* class methods */
+ (id)shared;

/* instance methods */
- (id)init;
- (void)startWithUpdateInterval:(double)interval storageInfoEnabled:(_Bool)enabled;
- (void)stop;
- (id)deviceStatus;
- (void)setStatusValue:(id)value forKey:(id)key;
- (void)_invalidateTimer;
- (void)_startNetworkMonitoring;
- (id)_cellularTechnologyString;
- (id)_networkTypeFromPath:(id)path;
- (void)_refreshStatus;

@end

#endif /* TFSScribeDeviceStatusProvider_h */
