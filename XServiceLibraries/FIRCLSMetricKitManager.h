//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FIRCLSMetricKitManager_h
#define FIRCLSMetricKitManager_h
@import Foundation;

#include "FBLPromise.h"
#include "FIRCLSExistingReportManager.h"
#include "FIRCLSFileManager.h"
#include "FIRCLSManagerData.h"
#include "MXMetricManagerSubscriber-Protocol.h"

@class NSObject, NSString;

@interface FIRCLSMetricKitManager : NSObject <MXMetricManagerSubscriber>

@property (retain) FBLPromise *metricKitDataAvailable;
@property (retain) FIRCLSExistingReportManager *existingReportManager;
@property (retain) FIRCLSFileManager *fileManager;
@property (retain) FIRCLSManagerData *managerData;
@property _Bool metricKitPromiseFulfilled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithManagerData:(id)data existingReportManager:(id)manager fileManager:(id)manager;
- (void)registerMetricKitManager;
- (void)didReceiveDiagnosticPayloads:(id)payloads;
- (_Bool)processMetricKitPayload:(id)payload skipCrashEvent:(_Bool)event;
- (void)didReceiveMetricPayloads:(id)payloads;
- (id)waitForMetricKitDataAvailable;
- (id)convertThreadsToArray:(id)array;
- (id)convertThreadsToArrayForNonfatal:(id)nonfatal;
- (id)convertMetadataToDictionary:(id)dictionary;
- (void)fulfillMetricKitPromise;
- (_Bool)writeDictionaryToFile:(id)file file:(id)file newLineData:(id)data;
- (id)getSignalName:(id)name;

@end

#endif /* FIRCLSMetricKitManager_h */
