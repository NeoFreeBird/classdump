//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef APMMonitor_h
#define APMMonitor_h
@import Foundation;

#include "APMASLLogger.h"
#include "APMMonitoringSampledData.h"
#include "APMUserDefaults.h"

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface APMMonitor : NSObject {
    /* instance variables */
    long long _logLevel;
    APMASLLogger *_logger;
    APMMonitoringSampledData *_monitoringSampledData;
    NSObject<OS_dispatch_queue> *_monitorQueue;
    long long _libraryVersion;
    APMUserDefaults *_monitorUserDefaults;
    _Bool _deferToFIRLogger;
}

@property (nonatomic) _Bool debugModeEnabled;
@property (nonatomic) _Bool verboseLoggingEnabled;
@property (nonatomic) _Bool encodeContexts;
@property (retain, nonatomic) NSString *logTag;

/* class methods */
+ (id)logLevelDescriptionFromLogLevel:(long long)level;
+ (_Bool)isSilentLevel:(long long)level;
+ (_Bool)isMonitorableLevel:(long long)level;
+ (id)encodedStringWithContextArray:(id)array insertSpaces:(_Bool)spaces;
+ (id)stringWithLogMessage:(id)message logLevel:(long long)level contexts:(id)contexts encodeContexts:(_Bool)contexts;
+ (id)encodedStringWithContextObject:(id)object;
+ (id)lastAPMSymbolFromException:(id)exception;
+ (id)monitoringDataKeyWithMessage:(id)message logLevel:(long long)level libraryVersion:(long long)version;

/* instance methods */
- (id)initWithLibraryVersion:(long long)version;
- (id)initWithLogLevel:(long long)level logger:(id)logger libraryVersion:(long long)version;
- (void)setLogLevel:(long long)level;
- (void)setSGTMDebugModeEnabled:(_Bool)enabled;
- (void)logWithLevel:(long long)level messageCode:(long long)code message:(id)message;
- (void)logWithLevel:(long long)level messageCode:(long long)code message:(id)message context:(id)context;
- (void)logWithLevel:(long long)level messageCode:(long long)code message:(id)message context:(id)context context:(id)context;
- (void)logWithLevel:(long long)level messageCode:(long long)code message:(id)message context:(id)context context:(id)context context:(id)context;
- (void)logWithLevel:(long long)level messageCode:(long long)code message:(id)message contexts:(id)contexts;
- (id)monitoringDataForDispatchWithSamplePeriod:(double)period lastSampledTimestamp:(double)timestamp;
- (void)clearMonitoringData;
- (void)loadMonitoringDataFromUserDefaultsOnMonitorQueue;
- (_Bool)isLoggableLevel:(long long)level;
- (void)logToConsole:(long long)console message:(id)message logLevel:(long long)level;
- (void)insertOrUpdateMonitoringDataWithMessage:(id)message encodedContext:(id)context logLevel:(long long)level;
- (void)saveMonitoringDataToUserDefaultsOnMonitorQueue;
- (void)migrateMonitorDataOnMonitorQueue;
- (void)synchronizeToDiskOnMonitorQueue;
- (_Bool)isDebugModeEnabled;
- (_Bool)isVerboseLoggingEnabled;

@end

#endif /* APMMonitor_h */
