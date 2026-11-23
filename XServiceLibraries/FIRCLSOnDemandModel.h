//
#ifndef FIRCLSOnDemandModel_h
#define FIRCLSOnDemandModel_h
@import Foundation;

#include "FIRCLSFileManager.h"
#include "FIRCLSSettings.h"

@class NSMutableArray, NSObject, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface FIRCLSOnDemandModel : NSObject

@property (readonly, nonatomic) int recordedOnDemandExceptionCount;
@property (readonly, nonatomic) int droppedOnDemandExceptionCount;
@property (readonly, nonatomic) int queuedOperationsCount;
@property (retain, nonatomic) FIRCLSSettings *settings;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) double lastUpdated;
@property (nonatomic) double currentStep;
@property (retain, nonatomic) FIRCLSFileManager *fileManager;
@property (retain, nonatomic) NSMutableArray *storedActiveReportPaths;

/* instance methods */
- (id)initWithFIRCLSSettings:(id)firclssettings fileManager:(id)manager;
- (_Bool)recordOnDemandExceptionIfQuota:(id)quota withDataCollectionEnabled:(_Bool)enabled usingExistingReportManager:(id)manager;
- (double)calculateUploadDelay;
- (double)calculateStepDuration;
- (void)implementOnDemandUploadDelay:(int)delay;
- (id)recordOnDemandExceptionWithModel:(id)model;
- (void)incrementDroppedExceptionCount;
- (void)decrementDroppedExceptionCount;
- (void)resetDroppedExceptionCount;
- (void)incrementRecordedExceptionCount;
- (void)decrementRecordedExceptionCount;
- (int)getQueuedOperationsCount;
- (void)incrementQueuedOperationCount;
- (void)decrementQueuedOperationCount;
- (_Bool)isQueueFull;

@end

#endif /* FIRCLSOnDemandModel_h */
